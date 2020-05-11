;========================= CONFIGURACION DEL JUEGO ==============================
SetUp proc
	;Iniciar Video
	ModoVideo
	
	;PINTAR ENCABEZADO
    mSetCursor 0,5      ;Coloca el cursor en la (fila,columna) puesta
	printVideo usuarioLogueado
    mSetCursor 0,15
    printVideo nivelActual
    mSetCursor 0,21
    printVideo contadorPuntos
    ;PINTAR ENCABEZADO - TIEMPO DEL JUEGO
    mSetCursor 0,27
    printVideo horaJuego
    mSetCursor 0,29
    printVideo dosPuntos
    mSetCursor 0,30
    printVideo horaJuego ;simulando minutoJuego
    mSetCursor 0,32
    printVideo dosPuntos    
    mSetCursor 0,33
    printVideo horaJuego ;simulando segundoJuego

    ;Inicializar el tiempo Inicial
    call ObtenerTiempoInicial

	;Pintar tablero
	PintarMargenes Blanco
	PintarCuadro GrisClaro

	;Pintar carro
	mtolineal 146,149 	;posicion inicial del carro
	mov posCarro, ax 	;para guardar la posicion del carro 
	mpintarCarro ax,carrocl1

    ;PINTAR PREMIOS
	;Pintar Bloque Premio1
	mtolineal 21,115	;posicion inicial del bloque amarillo 
	mov posPremio1, ax
	mpintarBloque ax, Amarillo,Naranja

    ;Pintar Bloque Premio2
    mtolineal 21,190    ;posicion inicial del bloque amarillo 
    mov posPremio2, ax
    mpintarBloque ax, Amarillo,Naranja

    ;Pintar Bloque Premio3
    mtolineal 21,65    ;posicion inicial del bloque amarillo 
    mov posPremio3, ax
    mpintarBloque ax, Amarillo,Naranja

    ;Pintar Bloque Premio4
    mtolineal 21,240    ;posicion inicial del bloque amarillo 
    mov posPremio4, ax
    mpintarBloque ax, Amarillo,Naranja

    ;PINTAR OBSTACULOS
    ;Pintar Bloque Obstaculo1
    mtolineal 21,140 ;posicion inicial del bloque amarillo 
    mov posObs1, ax
    mpintarBloque ax, Verde,VerdeClaro

    ;Pintar Bloque Obstaculo2
    mtolineal 21,90    ;posicion inicial del bloque amarillo 
    mov posObs2, ax
    mpintarBloque ax, Verde,VerdeClaro

    ;Pintar Bloque Obstaculo3
    mtolineal 21,215 ;posicion inicial del bloque amarillo 
    mov posObs3, ax
    mpintarBloque ax, Verde,VerdeClaro

    ;Pintar Bloque Obstaculo4
    mtolineal 21,165    ;posicion inicial del bloque amarillo 
    mov posObs4, ax
    mpintarBloque ax, Verde,VerdeClaro

	FIN:
		ret

SetUp endp

;================================ JUEGO - LOOP ===============================
Game proc 
	BUCLE: 
		EstadoJuego:
			cmp pausa,1d
			je ControlPausa
			cmp terminoJuego, 1d
			je GAMEOVER
			jmp INSTRUCCION			

		ControlPausa:
			call listening ;se matiene a la escucha del teclado mientras esta en pausa
			cmp al, 01bh   ;se presiono ESC
			je Despausar
			jmp BUCLE

		Despausar:
			mov pausa,0d
			jmp BUCLE

		INSTRUCCION:
			mInstrucciones
	
	jmp BUCLE

    GAMEOVER:
        ;GUARDAR INFORMACION DE PARTIDA
        mGuardarPartida
        ;REINICIO VARIABLES EN CASO DE ENTRAR NUEVAMENTE
        ;TIEMPO
        mov estadoSegundo,0d
        mov contadorMinutos,0d
        mov minutoJuego[0],'0'
        mov minutoJuego[1],'0'
        ;PUNTEO
        mov puntajeJuego, 3d
        mov PuntosPremios, 0d
        mov PuntosObs, 0d
        mov contadorPuntos[0],'3'
        mov contadorPuntos[1],'$'
        mov contadorPuntos[2],'$'
        ;JUEGO - Valores Iniciales
        mov terminoJuego,0d
        mov numPremio, 1d
        mov numObs, 1d
        mov premio1Listo,0d
        mov premio2Listo,0d
        mov premio3Listo,0d
        mov premio4Listo,0d
        mov obs1Listo, 0d
        mov obs2Listo, 0d
        mov obs3Listo, 0d
        mov obs4Listo, 0d
	FIN:
		ret

Game endp

guardarPartida proc
    compararCadena usuario1,usuarioLogueado
    je U1
    compararCadena usuario2,usuarioLogueado
    je U2
    compararCadena usuario3,usuarioLogueado
    je U3
    compararCadena usuario4,usuarioLogueado
    je U4
    compararCadena usuario5,usuarioLogueado
    je U5
    compararCadena usuario6,usuarioLogueado
    je U6
    compararCadena usuario7,usuarioLogueado
    je U7
    compararCadena usuario8,usuarioLogueado
    je U8
    compararCadena usuario9,usuarioLogueado
    je U9
    compararCadena usuario10,usuarioLogueado
    je U10
    compararCadena usuario11,usuarioLogueado
    je U11
    compararCadena usuario12,usuarioLogueado
    je U12
    compararCadena usuario13,usuarioLogueado
    je U13
    compararCadena usuario14,usuarioLogueado
    je U14
    compararCadena usuario15,usuarioLogueado
    je U15
    compararCadena usuario16,usuarioLogueado
    je U16
    compararCadena usuario17,usuarioLogueado
    je U17
    compararCadena usuario18,usuarioLogueado
    je U18
    compararCadena usuario19,usuarioLogueado
    je U19
    compararCadena usuario20,usuarioLogueado
    je U20
    jmp FIN
    U1:
        mov numUsuario[0], 1d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[0], ax
        mov ax, puntajeJuego
        mov punteoU[0], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego ;obtengo los segundos del juego en ax
        mov bx, ax                  ;bx = segundos
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx  ;ax = 60*ax = minutos a segundos en el juego
        add bx, ax ;total de segundos en bx
        mov tiempoU[0], bx
        jmp FIN
    U2:
        mov numUsuario[2], 2d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[2], ax
        mov ax, puntajeJuego
        mov punteoU[2], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[2], bx
        jmp FIN
    U3:
        mov numUsuario[4], 3d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[4], ax
        mov ax, puntajeJuego
        mov punteoU[4], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[4], bx
        jmp FIN
    U4:
        mov numUsuario[6], 4d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[6], ax
        mov ax, puntajeJuego
        mov punteoU[6], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[6], bx
        jmp FIN
    U5:
        mov numUsuario[8], 5d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[8], ax
        mov ax, puntajeJuego
        mov punteoU[8], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[8], bx
        jmp FIN
    U6:
        mov numUsuario[10], 6d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[10], ax
        mov ax, puntajeJuego
        mov punteoU[10], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[10], bx
        jmp FIN
    U7:
        mov numUsuario[12], 7d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[12], ax
        mov ax, puntajeJuego
        mov punteoU[12], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[12], bx
        jmp FIN
    U8:
        mov numUsuario[14], 8d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[14], ax
        mov ax, puntajeJuego
        mov punteoU[14], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[14], bx
        jmp FIN
    U9:
        mov numUsuario[16], 9d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[16], ax
        mov ax, puntajeJuego
        mov punteoU[16], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[16], bx
        jmp FIN
    U10:
        mov numUsuario[18], 10d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[18], ax
        mov ax, puntajeJuego
        mov punteoU[18], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[18], bx
        jmp FIN
    U11:
        mov numUsuario[20], 11d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[20], ax
        mov ax, puntajeJuego
        mov punteoU[20], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[20], bx
        jmp FIN
    U12:
        mov numUsuario[22], 12d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[22], ax
        mov ax, puntajeJuego
        mov punteoU[22], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[22], bx
        jmp FIN
    U13:
        mov numUsuario[24], 13d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[24], ax
        mov ax, puntajeJuego
        mov punteoU[24], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[24], bx
        jmp FIN
    U14:
        mov numUsuario[26], 14d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[26], ax
        mov ax, puntajeJuego
        mov punteoU[26], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[26], bx
        jmp FIN
    U15:
        mov numUsuario[28], 15d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[28], ax
        mov ax, puntajeJuego
        mov punteoU[28], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[28], bx
        jmp FIN
    U16:
        mov numUsuario[30], 16d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[30], ax
        mov ax, puntajeJuego
        mov punteoU[30], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[30], bx
        jmp FIN
    U17:
        mov numUsuario[32], 17d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[32], ax
        mov ax, puntajeJuego
        mov punteoU[32], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[32], bx
        jmp FIN
    U18:
        mov numUsuario[34], 18d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[34], ax
        mov ax, puntajeJuego
        mov punteoU[34], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[34], bx
        jmp FIN
    U19:
        mov numUsuario[36], 19d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[36], ax
        mov ax, puntajeJuego
        mov punteoU[36], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[36], bx
        jmp FIN
    U20:
        mov numUsuario[38], 20d
        ConvertirAscii nivelActual[1]   ;numero en ax
        mov nivelU[38], ax
        mov ax, puntajeJuego
        mov punteoU[38], ax
        ;PARA GUARDAR TIEMPO
        ConvertirAscii segundoJuego 
        mov bx, ax                  
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx 
        add bx, ax 
        mov tiempoU[38], bx
    FIN:
        ret

guardarPartida endp


;========================= INSTRUCCIONES DEL JUEGO =======================
Instrucciones proc 
	
    call ActualizarTiempoJuego
	call ControlNiveles            ;MANEJA LOS BLOQUES DE CADA NIVEL
	FIN:
		ret

Instrucciones endp


moverCarro proc
	;PROLOGO
	push ax
	push bx

	;CODIGO
	call listening 	;coloca en al el valor ingresado por teclado
	cmp al,04dh     ;flecha derecha
    je MOVDERECHA
    cmp al,04bh    	;flecha izquierda
    je MOVIZQUIERDA
    cmp al,01bh
    je PAUSAR		;si presione ESC
    cmp al,20h		;barra espaciadora
    je  GAMEOVER 		
    jmp FIN
    MOVDERECHA:
    	mov bx, posCarro
    	mgetxy bx	;retorna (fila,columna) del mapeo lexicografico = (ax,cx)
    	add cx,5
    	cmp cx, limiteDerecho ;Si llego al limite del margen derecho no hace nada
    	jge FIN

    	mlimpiarCarro bx, GrisClaro ;Limpiamos el carro en donde estaba posicionado
    	add bx,5 	;movemos la posicion del carro 5px hacia la derecha
    	mpintarCarro bx, colorCarro
    	mov posCarro, bx	;actualizamos la posicion del Carro
    	jmp FIN	

    MOVIZQUIERDA:
    	mov bx, posCarro
    	mgetxy bx 	;retorna (fila,columna) del mapeo lexicografico = (ax,cx)
    	cmp cx, limiteIzquierdo
    	jle FIN

    	mlimpiarCarro bx, GrisClaro
    	sub bx,5
    	mpintarCarro bx, colorCarro
    	mov posCarro,bx
    	jmp FIN

    PAUSAR:
    	mov pausa,1d
    	jmp FIN

   	GAMEOVER:
   		mov terminoJuego, 1d
   		jmp FIN

    FIN:
    	pop bx
    	pop ax
    	ret

moverCarro endp


ControlNiveles proc 
	NIVELES:
        ConvertirAscii segundoJuego ;obtengo los segundos del juego en ax
        mov bx, ax                  ;bx = segundos
        mov ax, contadorMinutos
        mov cx, 60d
        mul cx  ;ax = 60*ax = minutos a segundos en el juego
        add bx, ax ;total de segundos en bx
        ;SOLO EL REGISTRO BX ME IMPORTA DESDE AQUI
        cmp bx, TiempoNivel1 ;EMPIEZO A COMPARAR PARA SABER EN QUE NIVEL NOS ENCONTRAMOS
        jbe LEVEL1
        mov cx, TiempoNivel1
        add cx, TiempoNivel2 ;sumo los 2 tiempos
        cmp bx, cx  
        jbe LEVEL2
        add cx, TiempoNivel3 ;sumos los 3 tiempos
        cmp bx, cx
        jbe LEVEL3
        add cx, TiempoNivel4 ;sumos los 4 tiempos
        cmp bx, cx
        jbe LEVEL4
        add cx, TiempoNivel5 ;sumos los 5 tiempos
        cmp bx, cx
        jbe LEVEL5
        add cx, TiempoNivel6 ;sumos los 6 tiempos
        cmp bx, cx
        jbe LEVEL6
        mov terminoJuego,1d
        jmp FIN
	    LEVEL1:
            ;establecer color del carro
            mov al, carrocl1
            mov colorCarro, al
            mMoverCarro 
            ;establecer puntos del nivel
            mov ax, puntosPremiosN1
            mov PuntosPremios, ax
            mov ax, puntosObsN1
            mov PuntosObs, ax
            ;jugar
	        mDelay 180
            mov nivelActual[1],'1'
            mSetCursor 0,15
            printVideo nivelActual
            CONTROLPREMIOSL1:
                compararCadena mismoTiempo, segundoJuego
                je NOMULTIPLO1
                mCopiarCadena mismoTiempo, segundoJuego
                ConvertirAscii segundoJuego ;tenemos numero en ax
                ;AVERIGUAMOS SI ES MULTIPLO
                cmp ax, 0d
                je NOMULTIPLO1 
                div tiempo1Premio   ;dividendo: ax, divisor:variable, residuo: ah
                cmp ah, 0d
                je ESMULTIPLO1
                jne NOMULTIPLO1
                ESMULTIPLO1:
                    call ControlPremiosMultiplo
                    jmp CONTROLOBSL1
                NOMULTIPLO1:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
                    call ControlPremiosNomultiplo
                    jmp CONTROLOBSL1
            CONTROLOBSL1:
                compararCadena mismoTiempoBS, segundoJuego
                je NOMULTIPLOBS1
                mCopiarCadena mismoTiempoBS, segundoJuego
                ConvertirAscii segundoJuego ;tenemos numero en ax
                ;AVERIGUAMOS SI ES MULTIPLO
                cmp ax, 0d
                je NOMULTIPLOBS1 
                div tiempo1Obs   ;dividendo: ax, divisor:variable, residuo: ah
                cmp ah, 0d
                je ESMULTIPLOBS1
                jne NOMULTIPLOBS1
                ESMULTIPLOBS1:
                    call ControlObsMultiplo
                    jmp FIN  
                NOMULTIPLOBS1:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
                    call ControlObsNomultiplo
                    jmp FIN
        LEVEL2:
            ;establecer color del carro
            mov al, carrocl2
            mov colorCarro, al
            mMoverCarro 
            ;establecer puntos del nivel
            mov ax, puntosPremiosN2
            mov PuntosPremios, ax
            mov ax, puntosObsN2
            mov PuntosObs, ax
            ;jugar
            mDelay 180
            mov nivelActual[1],'2'
            mSetCursor 0,15
            printVideo nivelActual
            CONTROLPREMIOSL2:
                compararCadena mismoTiempo, segundoJuego
                je NOMULTIPLO2
                mCopiarCadena mismoTiempo, segundoJuego
                ConvertirAscii segundoJuego ;tenemos numero en ax
                ;AVERIGUAMOS SI ES MULTIPLO
                cmp ax, 0d
                je NOMULTIPLO2 
                div tiempo2Premio   ;dividendo: ax, divisor:variable, residuo: ah
                cmp ah, 0d
                je ESMULTIPLO2
                jne NOMULTIPLO2
                ESMULTIPLO2:
                    call ControlPremiosMultiplo
                    jmp CONTROLOBSL2
                NOMULTIPLO2:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
                    call ControlPremiosNomultiplo
                    jmp CONTROLOBSL2
            CONTROLOBSL2:
                compararCadena mismoTiempoBS, segundoJuego
                je NOMULTIPLOBS2
                mCopiarCadena mismoTiempoBS, segundoJuego
                ConvertirAscii segundoJuego ;tenemos numero en ax
                ;AVERIGUAMOS SI ES MULTIPLO
                cmp ax, 0d
                je NOMULTIPLOBS2 
                div tiempo2Obs   ;dividendo: ax, divisor:variable, residuo: ah
                cmp ah, 0d
                je ESMULTIPLOBS2
                jne NOMULTIPLOBS2
                ESMULTIPLOBS2:
                    call ControlObsMultiplo
                    jmp FIN  
                NOMULTIPLOBS2:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
                    call ControlObsNomultiplo
                    jmp FIN
        LEVEL3:
            ;establecer color del carro
            mov al, carrocl3
            mov colorCarro, al
            mMoverCarro 
            ;establecer puntos del nivel
            mov ax, puntosPremiosN3
            mov PuntosPremios, ax
            mov ax, puntosObsN3
            mov PuntosObs, ax
            ;jugar
            mDelay 180
            mov nivelActual[1],'3'
            mSetCursor 0,15
            printVideo nivelActual
            CONTROLPREMIOSL3:
                compararCadena mismoTiempo, segundoJuego
                je NOMULTIPLO3
                mCopiarCadena mismoTiempo, segundoJuego
                ConvertirAscii segundoJuego ;tenemos numero en ax
                ;AVERIGUAMOS SI ES MULTIPLO
                cmp ax, 0d
                je NOMULTIPLO3 
                div tiempo3Premio   ;dividendo: ax, divisor:variable, residuo: ah
                cmp ah, 0d
                je ESMULTIPLO3
                jne NOMULTIPLO3
                ESMULTIPLO3:
                    call ControlPremiosMultiplo
                    jmp CONTROLOBSL3
                NOMULTIPLO3:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
                    call ControlPremiosNomultiplo
                    jmp CONTROLOBSL3
            CONTROLOBSL3:
                compararCadena mismoTiempoBS, segundoJuego
                je NOMULTIPLOBS3
                mCopiarCadena mismoTiempoBS, segundoJuego
                ConvertirAscii segundoJuego ;tenemos numero en ax
                ;AVERIGUAMOS SI ES MULTIPLO
                cmp ax, 0d
                je NOMULTIPLOBS3 
                div tiempo3Obs   ;dividendo: ax, divisor:variable, residuo: ah
                cmp ah, 0d
                je ESMULTIPLOBS3
                jne NOMULTIPLOBS3
                ESMULTIPLOBS3:
                    call ControlObsMultiplo
                    jmp FIN  
                NOMULTIPLOBS3:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
                    call ControlObsNomultiplo
                    jmp FIN
        LEVEL4:
            ;establecer color del carro
            mov al, carrocl4
            mov colorCarro, al
            mMoverCarro 
            ;establecer puntos del nivel
            mov ax, puntosPremiosN4
            mov PuntosPremios, ax
            mov ax, puntosObsN4
            mov PuntosObs, ax
            ;jugar
            mDelay 180
            mov nivelActual[1],'4'
            mSetCursor 0,15
            printVideo nivelActual
            CONTROLPREMIOSL4:
                compararCadena mismoTiempo, segundoJuego
                je NOMULTIPLO4
                mCopiarCadena mismoTiempo, segundoJuego
                ConvertirAscii segundoJuego ;tenemos numero en ax
                ;AVERIGUAMOS SI ES MULTIPLO
                cmp ax, 0d
                je NOMULTIPLO4 
                div tiempo4Premio   ;dividendo: ax, divisor:variable, residuo: ah
                cmp ah, 0d
                je ESMULTIPLO4
                jne NOMULTIPLO4
                ESMULTIPLO4:
                    call ControlPremiosMultiplo
                    jmp CONTROLOBSL4
                NOMULTIPLO4:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
                    call ControlPremiosNomultiplo
                    jmp CONTROLOBSL4
            CONTROLOBSL4:
                compararCadena mismoTiempoBS, segundoJuego
                je NOMULTIPLOBS4
                mCopiarCadena mismoTiempoBS, segundoJuego
                ConvertirAscii segundoJuego ;tenemos numero en ax
                ;AVERIGUAMOS SI ES MULTIPLO
                cmp ax, 0d
                je NOMULTIPLOBS4 
                div tiempo4Obs   ;dividendo: ax, divisor:variable, residuo: ah
                cmp ah, 0d
                je ESMULTIPLOBS4
                jne NOMULTIPLOBS4
                ESMULTIPLOBS4:
                    call ControlObsMultiplo
                    jmp FIN  
                NOMULTIPLOBS4:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
                    call ControlObsNomultiplo
                    jmp FIN
        LEVEL5:
            ;establecer color del carro
            mov al, carrocl5
            mov colorCarro, al
            mMoverCarro 
            ;establecer puntos del nivel
            mov ax, puntosPremiosN5
            mov PuntosPremios, ax
            mov ax, puntosObsN5
            mov PuntosObs, ax
            ;jugar
            mDelay 180
            mov nivelActual[1],'5'
            mSetCursor 0,15
            printVideo nivelActual
            CONTROLPREMIOSL5:
                compararCadena mismoTiempo, segundoJuego
                je NOMULTIPLO5
                mCopiarCadena mismoTiempo, segundoJuego
                ConvertirAscii segundoJuego ;tenemos numero en ax
                ;AVERIGUAMOS SI ES MULTIPLO
                cmp ax, 0d
                je NOMULTIPLO5 
                div tiempo5Premio   ;dividendo: ax, divisor:variable, residuo: ah
                cmp ah, 0d
                je ESMULTIPLO5
                jne NOMULTIPLO5
                ESMULTIPLO5:
                    call ControlPremiosMultiplo
                    jmp CONTROLOBSL5
                NOMULTIPLO5:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
                    call ControlPremiosNomultiplo
                    jmp CONTROLOBSL5
            CONTROLOBSL5:
                compararCadena mismoTiempoBS, segundoJuego
                je NOMULTIPLOBS5
                mCopiarCadena mismoTiempoBS, segundoJuego
                ConvertirAscii segundoJuego ;tenemos numero en ax
                ;AVERIGUAMOS SI ES MULTIPLO
                cmp ax, 0d
                je NOMULTIPLOBS5 
                div tiempo5Obs   ;dividendo: ax, divisor:variable, residuo: ah
                cmp ah, 0d
                je ESMULTIPLOBS5
                jne NOMULTIPLOBS5
                ESMULTIPLOBS5:
                    call ControlObsMultiplo
                    jmp FIN  
                NOMULTIPLOBS5:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
                    call ControlObsNomultiplo
                    jmp FIN
        LEVEL6:
            ;establecer color del carro
            mov al, carrocl6
            mov colorCarro, al
            mMoverCarro 
            ;establecer puntos del nivel
            mov ax, puntosPremiosN6
            mov PuntosPremios, ax
            mov ax, puntosObsN6
            mov PuntosObs, ax
            mDelay 180
            mov nivelActual[1],'6'
            mSetCursor 0,15
            printVideo nivelActual
            CONTROLPREMIOSL6:
                compararCadena mismoTiempo, segundoJuego
                je NOMULTIPLO6
                mCopiarCadena mismoTiempo, segundoJuego
                ConvertirAscii segundoJuego ;tenemos numero en ax
                ;AVERIGUAMOS SI ES MULTIPLO
                cmp ax, 0d
                je NOMULTIPLO6
                div tiempo6Premio   ;dividendo: ax, divisor:variable, residuo: ah
                cmp ah, 0d
                je ESMULTIPLO6
                jne NOMULTIPLO6
                ESMULTIPLO6:
                    call ControlPremiosMultiplo
                    jmp CONTROLOBSL6
                NOMULTIPLO6:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
                    call ControlPremiosNomultiplo
                    jmp CONTROLOBSL6
            CONTROLOBSL6:
                compararCadena mismoTiempoBS, segundoJuego
                je NOMULTIPLOBS6
                mCopiarCadena mismoTiempoBS, segundoJuego
                ConvertirAscii segundoJuego ;tenemos numero en ax
                ;AVERIGUAMOS SI ES MULTIPLO
                cmp ax, 0d
                je NOMULTIPLOBS6 
                div tiempo6Obs   ;dividendo: ax, divisor:variable, residuo: ah
                cmp ah, 0d
                je ESMULTIPLOBS6
                jne NOMULTIPLOBS6
                ESMULTIPLOBS6:
                    call ControlObsMultiplo
                    jmp FIN  
                NOMULTIPLOBS6:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
                    call ControlObsNomultiplo
                    jmp FIN
	FIN:
		ret

ControlNiveles endp



ControlPremiosMultiplo proc 
    cmp numPremio,1d ;sale posPremio1
    je PREMIO1
    cmp numPremio,2d ;sale posPremio2
    je PREMIO2
    cmp numPremio,3d ;sale posPremio3
    je PREMIO3
    cmp numPremio,4d ;sale posPremio4
    je PREMIO4
    PREMIO1:
        cmp premio1Listo, 0d ;si es 0 esta listo para salir, si es 1 sigue en pantalla
        je SALEPREM1
        jne YASALIOPREM1 ;premio1Listo es 1 osea que sigue en pantalla
        SALEPREM1:
            mov numPremio, 2d
            mov premio1Listo, 1d
            jmp NOMULTIPLO
        YASALIOPREM1:
            jmp NOMULTIPLO  ;premio en pantalla, asi que no lo puedo sacar otra vez
    PREMIO2:
        cmp premio2Listo, 0d 
        je SALEPREM2
        jne YASALIOPREM2 
        SALEPREM2:
            mov numPremio, 3d
            mov premio2Listo, 1d
            jmp NOMULTIPLO
        YASALIOPREM2:
        jmp NOMULTIPLO
    PREMIO3:
        cmp premio3Listo, 0d 
        je SALEPREM3
        jne YASALIOPREM3 
        SALEPREM3:
            mov numPremio, 4d
            mov premio3Listo, 1d
            jmp NOMULTIPLO
        YASALIOPREM3:
            jmp NOMULTIPLO
    PREMIO4:
        cmp premio4Listo, 0d 
        je SALEPREM4
        jne YASALIOPREM4 
        SALEPREM4:
            mov numPremio, 1d
            mov premio4Listo, 1d
            jmp NOMULTIPLO
        YASALIOPREM4:
            jmp NOMULTIPLO
    NOMULTIPLO:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
        VERPREM1:
            cmp premio1Listo, 1d ;es que esta en juego
            je ESTAPREM1
        VERPREM2:
            cmp premio2Listo, 1d
            je ESTAPREM2
        VERPREM3:
            cmp premio3Listo, 1d
            je ESTAPREM3
        VERPREM4:
            cmp premio4Listo, 1d
            je ESTAPREM4
            jmp FIN ;SE VA A VER LOS OBSTACULOS
            ESTAPREM1:
                mAvanzarBloque posPremio1, Amarillo, Naranja        ;avanzamos 1px hacia abajo al bloque
                mGestionarBloque posPremio1,21,115, premio1Listo     ;Reinicia al blque desde el inicio si salio el 13 cuadro
                mGestionChoqueBloque posPremio1,21,115,premio1Listo,Amarillo
                jmp VERPREM2
            ESTAPREM2:
                mAvanzarBloque posPremio2, Amarillo, Naranja        ;avanzamos 1px hacia abajo al bloque
                mGestionarBloque posPremio2,21,190, premio2Listo
                mGestionChoqueBloque posPremio2,21,190,premio2Listo,Amarillo
                jmp VERPREM3
            ESTAPREM3:
                mAvanzarBloque posPremio3, Amarillo, Naranja        ;avanzamos 1px hacia abajo al bloque
                mGestionarBloque posPremio3,21,65, premio3Listo
                mGestionChoqueBloque posPremio3,21,65,premio3Listo,Amarillo
                jmp VERPREM4
            ESTAPREM4:
                mAvanzarBloque posPremio4, Amarillo, Naranja        ;avanzamos 1px hacia abajo al bloque
                mGestionarBloque posPremio4,21,240, premio4Listo
                mGestionChoqueBloque posPremio4,21,240,premio4Listo,Amarillo
                jmp FIN ;SE VA A VER LOS OBSTACULOS                
    FIN:
        ret    

ControlPremiosMultiplo endp



ControlPremiosNomultiplo proc
        VERPREM1:
            cmp premio1Listo, 1d ;es que esta en juego
            je ESTAPREM1
        VERPREM2:
            cmp premio2Listo, 1d
            je ESTAPREM2
        VERPREM3:
            cmp premio3Listo, 1d
            je ESTAPREM3
        VERPREM4:
            cmp premio4Listo, 1d
            je ESTAPREM4
            jmp FIN ;SE VA A VER LOS OBSTACULOS
            ESTAPREM1:
                mAvanzarBloque posPremio1, Amarillo, Naranja        ;avanzamos 1px hacia abajo al bloque
                mGestionarBloque posPremio1,21,115, premio1Listo     ;Reinicia al blque desde el inicio si salio el 13 cuadro
                mGestionChoqueBloque posPremio1,21,115,premio1Listo,Amarillo
                jmp VERPREM2
            ESTAPREM2:
                mAvanzarBloque posPremio2, Amarillo, Naranja        ;avanzamos 1px hacia abajo al bloque
                mGestionarBloque posPremio2,21,190, premio2Listo
                mGestionChoqueBloque posPremio2,21,190,premio2Listo,Amarillo
                jmp VERPREM3
            ESTAPREM3:
                mAvanzarBloque posPremio3, Amarillo, Naranja        ;avanzamos 1px hacia abajo al bloque
                mGestionarBloque posPremio3,21,65, premio3Listo
                mGestionChoqueBloque posPremio3,21,65,premio3Listo,Amarillo
                jmp VERPREM4
            ESTAPREM4:
                mAvanzarBloque posPremio4, Amarillo, Naranja        ;avanzamos 1px hacia abajo al bloque
                mGestionarBloque posPremio4,21,240, premio4Listo
                mGestionChoqueBloque posPremio4,21,240,premio4Listo,Amarillo
                jmp FIN ;SE VA A VER LOS OBSTACULOS
        FIN:
            ret

ControlPremiosNomultiplo endp



ControlObsMultiplo proc 
    cmp numObs,1d ;sale posObs1
    je OBS1
    cmp numObs,2d ;sale posObs2
    je OBS2
    cmp numObs,3d ;sale posObs3
    je OBS3
    cmp numObs,4d ;sale posObs4
    je OBS4
    OBS1:
        cmp obs1Listo, 0d ;si es 0 esta listo para salir, si es 1 sigue en pantalla
        je SALEOBS1
        jne YASALIOBS1 ;obs1Listo es 1 osea que sigue en pantalla
        SALEOBS1:
            mov numObs, 2d
            mov obs1Listo, 1d
            jmp NOMULTIPLOBS
       YASALIOBS1:
            jmp NOMULTIPLOBS  
    OBS2:
        cmp obs2Listo, 0d 
        je SALEOBS2
        jne YASALIOBS2 
        SALEOBS2:
            mov numObs, 3d
            mov obs2Listo, 1d
            jmp NOMULTIPLOBS
        YASALIOBS2:
            jmp NOMULTIPLOBS
    OBS3:
        cmp obs3Listo, 0d ;si es 0 esta listo para salir, si es 1 sigue en pantalla
        je SALEOBS3
        jne YASALIOBS3 ;obs1Listo es 1 osea que sigue en pantalla
        SALEOBS3:
            mov numObs, 4d
            mov obs3Listo, 1d
            jmp NOMULTIPLOBS
        YASALIOBS3:
            jmp NOMULTIPLOBS
    OBS4:
        cmp obs4Listo, 0d ;si es 0 esta listo para salir, si es 1 sigue en pantalla
        je SALEOBS4
        jne YASALIOBS4 ;obs1Listo es 1 osea que sigue en pantalla
        SALEOBS4:
            mov numObs, 1d
            mov obs4Listo, 1d
            jmp NOMULTIPLOBS
        YASALIOBS4:
            jmp NOMULTIPLOBS  
    NOMULTIPLOBS:    ;REVISO QUIEN ESTA EN PANTALLA Y QUIEN NO PARA AVANZAR LOS BLOQUES
        VEROBS1:
            cmp obs1Listo, 1d ;es que esta en juego
            je ESTAOBS1
        VEROBS2:
            cmp obs2Listo, 1d
            je ESTAOBS2
        VEROBS3:
            cmp obs3Listo, 1d
            je ESTAOBS3
        VEROBS4:
            cmp obs4Listo, 1d
            je ESTAOBS4 
            jmp FIN
            ESTAOBS1:
                mAvanzarBloque posObs1, Verde, VerdeClaro       ;avanzamos 1px hacia abajo al bloque
                mGestionarBloque posObs1,21,140, obs1Listo       ;Reinicia al blque desde el inicio si salio el 13 cuadro
                mGestionChoqueBloque posObs1,21,140,obs1Listo,Verde
                jmp VEROBS2
            ESTAOBS2:
                mAvanzarBloque posObs2, Verde, VerdeClaro        ;avanzamos 1px hacia abajo al bloque
                mGestionarBloque posObs2,21,90, obs2Listo
                mGestionChoqueBloque posObs2,21,90,obs2Listo,Verde
                jmp VEROBS3
            ESTAOBS3:
                mAvanzarBloque posObs3, Verde, VerdeClaro        ;avanzamos 1px hacia abajo al bloque
                mGestionarBloque posObs3,21,215, obs3Listo
                mGestionChoqueBloque posObs3,21,215,obs3Listo,Verde
                jmp VEROBS4
            ESTAOBS4:
                mAvanzarBloque posObs4, Verde, VerdeClaro        ;avanzamos 1px hacia abajo al bloque
                mGestionarBloque posObs4,21,165, obs4Listo
                mGestionChoqueBloque posObs4,21,165,obs4Listo,Verde
                jmp FIN
    FIN:
        ret

ControlObsMultiplo endp



ControlObsNomultiplo proc 
    VEROBS1:
        cmp obs1Listo, 1d ;es que esta en juego
        je ESTAOBS1
    VEROBS2:
        cmp obs2Listo, 1d
        je ESTAOBS2
    VEROBS3:
        cmp obs3Listo, 1d
        je ESTAOBS3
    VEROBS4:
        cmp obs4Listo, 1d
        je ESTAOBS4 
        jmp FIN
        ESTAOBS1:
            mAvanzarBloque posObs1, Verde, VerdeClaro       ;avanzamos 1px hacia abajo al bloque
            mGestionarBloque posObs1,21,140, obs1Listo       ;Reinicia al blque desde el inicio si salio el 13 cuadro
            mGestionChoqueBloque posObs1,21,140,obs1Listo,Verde
            jmp VEROBS2
        ESTAOBS2:
            mAvanzarBloque posObs2, Verde, VerdeClaro        ;avanzamos 1px hacia abajo al bloque
            mGestionarBloque posObs2,21,90, obs2Listo
            mGestionChoqueBloque posObs2,21,90,obs2Listo,Verde
            jmp VEROBS3
        ESTAOBS3:
            mAvanzarBloque posObs3, Verde, VerdeClaro        ;avanzamos 1px hacia abajo al bloque
            mGestionarBloque posObs3,21,215, obs3Listo
            mGestionChoqueBloque posObs3,21,215,obs3Listo,Verde
            jmp VEROBS4
        ESTAOBS4:
            mAvanzarBloque posObs4, Verde, VerdeClaro        ;avanzamos 1px hacia abajo al bloque
            mGestionarBloque posObs4,21,165, obs4Listo
            mGestionChoqueBloque posObs4,21,165,obs4Listo,Verde
            jmp FIN
    FIN:
        ret    

ControlObsNomultiplo endp




avanzarBloque proc 
	;--------------------------------------------------------------------
        ;   Recibe:       di = posicion   
		;				  dl = colorExterno   												
        ;                 al = colorInterno                            			 
        ;                                                             
        ;   Devuelve:    nada	                               			  				 
        ;                                                                    				 
        ;   Comentarios: Avanza el bloque 1px hacia abajo			                 
        ;--------------------------------------------------------------------
   	mpintarBloque di, GrisClaro, GrisClaro 	;limpio el obstaculo
   	add di,320 	;1px hacia abajo
   	mpintarBloque di, dl, al 	;pinto el obstaculo nuevamente
   	ret

avanzarBloque endp


GestionChoqueBloque proc
    ;------------------------------------------------------------------------
        ;   Recibe:       si = [bp+4] = posBloque
        ;                 di = [bp+6] = bloqueListo                                              
        ;                 ax = posicion para reiniciar el bloque                                      
        ;                 dl = color que me indicara si sumo o resto puntos
        ;                 bx = auxiliar                                            
        ;   Devuelve:    nada                                                            
        ;                                                                                    
        ;   Comentarios: Detecta si choco el bloque con el carro, si lo hizo, restablece el bloque a su posicion inicial.                        
        ;--------------------------------------------------------------------
    ;ini Subrutina proglogo
        push bp
        mov  bp,sp
        pusha
    ;ini Subrutina prologo

    ;INIT CODIGO
    mov si,word ptr[bp+4]               ;si=direccion del posBloque
    mov di,word ptr[bp+6]               ;di=direccion del bloqueListo

    ;CODIGO
    SEN1:
        mov bx,[si]         ;igual al valor de la posicion del bloque para no afectar el valor verdadero
        add bx,sensor1      ;ahora bx tiene la posicion del sensor1
        mov cl,es:[bx]     ;guardo en CL el color que esta en el sensor1
        cmp cl,GrisClaro
        je SEN2         
        cmp cl,Negro 
        je SEN2      
        VERCHOCO1:
            cmp bx, 9971d   ;debido al margen superior blanca 
            jb SEN2
            cmp bx, 60749d   ;si esta en la pista o no, el sensor1, NOTA: debido a la linea blanca de abajo del margen 
            ja SEN2 ;esta fuera de la pista entonces no hago nada porque mGestionarBloque se encargara     
            CHOCO1:
                mpintarBloque [si], GrisClaro, GrisClaro ;limpio el bloque
                cmp dl, Amarillo    ;si no es Amarillo entonces es Verde
                je SUMO1
                jne RESTO1
                SUMO1:
                    call aumentoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
                RESTO1:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN2:
        mov bx,[si]         
        add bx,sensor2      
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN3         
        cmp cl,Negro
        je SEN3      
        VERCHOCO2:
            cmp bx, 9971d
            jb SEN3
            cmp bx, 60749d   
            ja SEN3       
            CHOCO2:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO2
                jne RESTO2
                SUMO2:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO2:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN3:
        mov bx,[si]         
        sub bx,sensor3           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN4         
        cmp cl,Negro
        je SEN4      
        VERCHOCO3:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista (31,51) porque si
            jb SEN4
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN4       
            CHOCO3:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO3
                jne RESTO3
                SUMO3:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO3:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN4:
        mov bx,[si]         
        sub bx,sensor4           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN5         
        cmp cl,Negro
        je SEN5      
        VERCHOCO4:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista
            jb SEN5
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN5       
            CHOCO4:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO4
                jne RESTO4
                SUMO4:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO4:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN5:
        mov bx,[si]         
        sub bx,sensor5           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN6         
        cmp cl,Negro
        je SEN6      
        VERCHOCO5:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista
            jb SEN6
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN6       
            CHOCO5:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO5
                jne RESTO5
                SUMO5:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO5:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN6:
        mov bx,[si]         
        sub bx,sensor6           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN7         
        cmp cl,Negro
        je SEN7      
        VERCHOCO6:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista
            jb SEN7
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN7       
            CHOCO6:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO6
                jne RESTO6
                SUMO6:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO6:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN7:
        mov bx,[si]         
        sub bx,sensor7           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN8         
        cmp cl,Negro
        je SEN8      
        VERCHOCO7:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista
            jb SEN8
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN8       
            CHOCO7:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO7
                jne RESTO7
                SUMO7:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO7:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN8:
        mov bx,[si]         
        sub bx,sensor8           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN9         
        cmp cl,Negro
        je SEN9      
        VERCHOCO8:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista
            jb SEN9
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN9       
            CHOCO8:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO8
                jne RESTO8
                SUMO8:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO8:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN9:
        mov bx,[si]         
        sub bx,sensor9           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN10         
        cmp cl,Negro
        je SEN10     
        VERCHOCO9:
            cmp bx, 9971d  ;si el sensor no ha entrado a la pista
            jb SEN10
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN10       
            CHOCO9:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO9
                jne RESTO9
                SUMO9:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO9:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN10:
        mov bx,[si]         
        sub bx,sensor10           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN11         
        cmp cl,Negro
        je SEN11      
        VERCHOCO10:
            cmp bx, 9971d  ;si el sensor no ha entrado a la pista
            jb SEN11
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN11       
            CHOCO10:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO10
                jne RESTO10
                SUMO10:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO10:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN11:
        mov bx,[si]         
        sub bx,sensor11           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN12         
        cmp cl,Negro
        je SEN12      
        VERCHOCO11:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista
            jb SEN12
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN12       
            CHOCO11:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO11
                jne RESTO11
                SUMO11:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO11:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN12:
        mov bx,[si]         
        sub bx,sensor12           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN13         
        cmp cl,Negro
        je SEN13      
        VERCHOCO12:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista
            jb SEN13
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN13       
            CHOCO12:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO12
                jne RESTO12
                SUMO12:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO12:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN13:
        mov bx,[si]         
        sub bx,sensor13           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN14         
        cmp cl,Negro
        je SEN14      
        VERCHOCO13:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista
            jb SEN14
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN14       
            CHOCO13:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO13
                jne RESTO13
                SUMO13:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO13:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN14:
        mov bx,[si]         
        sub bx,sensor14           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN15         
        cmp cl,Negro
        je SEN15      
        VERCHOCO14:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista
            jb SEN15
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN15       
            CHOCO14:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO14
                jne RESTO14
                SUMO14:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO14:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN15:
        mov bx,[si]         
        sub bx,sensor15           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN16         
        cmp cl,Negro
        je SEN16      
        VERCHOCO15:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista
            jb SEN16
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN16       
            CHOCO15:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO15
                jne RESTO15
                SUMO15:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO15:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN16:
        mov bx,[si]         
        sub bx,sensor16           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je SEN17         
        cmp cl,Negro
        je SEN17      
        VERCHOCO16:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista
            jb SEN17
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja SEN17       
            CHOCO16:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO16
                jne RESTO16
                SUMO16:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO16:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    SEN17:
        mov bx,[si]         
        sub bx,sensor17           
        mov cl,es:[bx]     
        cmp cl,GrisClaro
        je FIN         
        cmp cl,Negro
        je FIN      
        VERCHOCO17:
            cmp bx, 9971d   ;si el sensor no ha entrado a la pista
            jb FIN
            cmp bx, 60749d  ;si el sensor ya salio de la pista
            ja FIN        
            CHOCO17:
                mpintarBloque [si], GrisClaro, GrisClaro 
                cmp dl, Amarillo    
                je SUMO17
                jne RESTO17
                SUMO17:
                    call aumentoPuntos
                    mov [si],ax  
                    mov ax, 0d
                    mov [di],ax  
                    jmp FIN
                RESTO17:
                    call disminuyoPuntos
                    mov [si],ax  ;reinicio la posicion del bloque
                    mov ax, 0d
                    mov [di],ax  ;indico que el bloque esta listo para salir
                    jmp FIN
    ;ini Subrutina epilogo
    FIN:
        popa
        mov sp,bp
        pop bp
        ret 4
        ;fin etiqueta
    ;fin Subrutina epilogo

GestionChoqueBloque endp



aumentoPuntos proc
    ;PROLOGO - Guardo en pila estos registros porque los necesito antes de entrar a este procedimiento
    push ax
    push si
    push di

    ;CODIGO
    mov ax, puntajeJuego
    add ax, PuntosPremios
    mov puntajeJuego, ax
    ConvertirString contadorPuntos
    mSetCursor 0,21
    String_size contadorPuntos  
    cmp ax, 1d
    je DIGITO1
    cmp ax, 2d
    je DIGITO2
    jmp DIGITO3
    DIGITO1:
        printVideo contadorPuntos
        printVideo space2 
        jmp FIN
    DIGITO2:
        printVideo contadorPuntos
        printVideo space
        jmp FIN
    DIGITO3:
        printVideo contadorPuntos
    
    ;EPILOGO
    FIN:
        pop di
        pop si
        pop ax
        ret

aumentoPuntos endp


disminuyoPuntos proc
    ;PROLOGO - Guardo en pila estos registros porque los necesito antes de entrar a este procedimiento
    push ax
    push si
    push di

    ;CODIGO
    mov ax, puntajeJuego
    sub ax, PuntosObs
    mov puntajeJuego, ax
    cmp puntajeJuego, 0d
    jl GAMEOVER
    ConvertirString contadorPuntos
    mSetCursor 0,21
    String_size contadorPuntos
    cmp ax, 1d
    je DIGITO1
    cmp ax, 2d
    je DIGITO2
    jmp DIGITO3
    DIGITO1:
        printVideo contadorPuntos
        printVideo space2 
        jmp FIN
    DIGITO2:
        printVideo contadorPuntos
        printVideo space
        jmp FIN
    DIGITO3:
        printVideo contadorPuntos
        jmp FIN
    GAMEOVER:
        mov terminoJuego, 1d
        mov puntajeJuego, 0d
    ;EPILOGO
    FIN:
        pop di
        pop si
        pop ax
        ret

disminuyoPuntos endp


ActualizarTiempoJuego proc
    call ObtenerTiempoActual
    ;TENGO AMBOS SEGUNDOS EN MEMORIA ASI QUE PREGUNTO:
    mov bl, segundoInicial
    cmp segundoActual, bl   
    jge VERESTADO   
    jl ACTUALMENOR

    VERESTADO:
        cmp estadoSegundo, 0d
        je ACTUALMAYOR
        jne MINUTO  ;estadoSegundo = 1d quiere decir que paso de menor a mayor osea que ya paso un minuto
    MINUTO:
        inc contadorMinutos
        mov ax, contadorMinutos
        ;mov ah, 00d
        ConvertirStringTiempo minutoJuego
        mov estadoSegundo, 0d
    ACTUALMAYOR:
        mov al, segundoActual
        sub al, segundoInicial
        mov ah, 00d  ;para tener en ax el numero de segundos, siempre pasar numero positivos
        ConvertirStringTiempo segundoJuego    ;numero en ax
        jmp IMPRESION
    ACTUALMENOR:
        mov estadoSegundo, 1d
        mov bl, segundoInicial
        sub bl, segundoActual
        mov al, 60d ;60-bl = resultado en seg
        sub al, bl  ;resultado en AL
        mov ah, 00d
        ConvertirStringTiempo segundoJuego    ;numero en ax
    IMPRESION:
        ;IMPRIMIR EL TIEMPO DEL JUEGO ACTUALIZADO
        String_size minutoJuego ;tamaño de la cadena en ax
        cmp ax, 1d
        je DIGITO1
        jne DIGITO2
        DIGITO1:
            mSetCursor 0,30
            printVideo cero
            mSetCursor 0,31
            printVideo minutoJuego
            jmp CONTINUAR
        DIGITO2:
            mSetCursor 0,30
            printVideo minutoJuego
        CONTINUAR:
            String_size segundoJuego   ;tamaño de la cadena en ax
            cmp ax, 1d
            je DIGITO1S
            jne DIGITO2S
            DIGITO1S:
                mSetCursor 0,33
                printVideo cero
                mSetCursor 0,34
                printVideo segundoJuego
                jmp FIN
            DIGITO2S:
                mSetCursor 0,33
                printVideo segundoJuego
    FIN:
        ret

ActualizarTiempoJuego endp


ObtenerTiempoActual proc
	ObtenerHora 	;hora=ch, minutos=cl, segundos = dh, milisegundos = dl
    mov segundoActual, dh
    ret

ObtenerTiempoActual endp


ObtenerTiempoInicial proc
    ObtenerHora     ;hora=ch, minutos=cl, segundos = dh, milisegundos = dl
    mov segundoInicial, dh
    ret

ObtenerTiempoInicial endp

;========================= PARA PINTAR PIEZAS DEL JUEGO ===================

pintarCarro proc

	;--------------------------------------------------------------------
        ;   Recibe:       di = posicion   
		;				  dl = color   
        ;                 ax = auxiliar de posicion
        ;                 cx = alturaCarro                                 
        ;                                                                    
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Pintar el carro en cualquier posicion				                 
        ;--------------------------------------------------------------------
	;PINTAR CADA FILA DEL CARRO
	PINTARCARROZA:  
    	mov es:[di], dl
    	mov es:[di+1],dl
    	mov es:[di+2],dl
    	mov es:[di+3],dl
    	mov es:[di+4],dl
    	mov es:[di+5],dl
    	mov es:[di+6],dl
    	mov es:[di+7],dl
    	mov es:[di+8],dl
    	mov es:[di+9],dl
    	mov es:[di+10],dl
    	mov es:[di+11],dl
    	mov es:[di+12],dl
    	mov es:[di+13],dl
    	mov es:[di+14],dl
    	mov es:[di+15],dl
    	mov es:[di+16],dl
    	mov es:[di+17],dl
    	mov es:[di+18],dl
    	mov es:[di+19],dl
    SIGFILA:
    	dec cx 
    	cmp cx, 0d
    	je LLANTA1
    	add di,320
    	jmp PINTARCARROZA
    ;PINTAR LLANTAS DEL CARRO
    LLANTA1:	;SUPERIOR IZQUIERDA
    	mov di, ax 	;punto inicial 
    	add di,1920 ;6 pixeles abajo entonces 6(320) = 1920
    	sub di,3	;le resto 3 para que este sobre la llanta y tenga grosor de 3px
    	mov dl, Gris 
    	;ALTURA DE LLANTA DE 8PX
    	;PINTAR GROSOR 1
    	mov es:[di],dl								
		mov es:[di+320],dl 
    	mov es:[di+640],dl
    	mov es:[di+960],dl
    	mov es:[di+1280],dl 
    	mov es:[di+1600],dl 
    	mov es:[di+1920],dl
    	mov es:[di+2240],dl
    	;PINTAR GROSOR 2
    	mov es:[di+1],dl	
    	mov es:[di+321],dl   
    	mov es:[di+641],dl
    	mov es:[di+961],dl
    	mov es:[di+1281],dl
    	mov es:[di+1601],dl
    	mov es:[di+1921],dl
    	mov es:[di+2241],dl
    	;PINTAR GROSOR 3
    	mov es:[di+2],dl	
    	mov es:[di+322],dl   
    	mov es:[di+642],dl
    	mov es:[di+962],dl
    	mov es:[di+1282],dl
    	mov es:[di+1602],dl
    	mov es:[di+1922],dl
    	mov es:[di+2242],dl
    LLANTA2:		;SUPERIOR DERECHA
    	mov di, ax 	;punto inicial 
    	add di, 20	;ya estoy en la columna de la llanta
    	add di,1920 ;6 pixeles abajo entonces 6(320) = 1920, ya estoy en la llanta
    	;ALTURA DE LLANTA DE 8PX
    	;PINTAR GROSOR 1
    	mov es:[di],dl								
		mov es:[di+320],dl   
    	mov es:[di+640],dl
    	mov es:[di+960],dl
    	mov es:[di+1280],dl
    	mov es:[di+1600],dl
    	mov es:[di+1920],dl
    	mov es:[di+2240],dl
    	;PINTAR GROSOR 2
    	mov es:[di+1],dl	
    	mov es:[di+321],dl   
    	mov es:[di+641],dl
    	mov es:[di+961],dl
    	mov es:[di+1281],dl
    	mov es:[di+1601],dl
    	mov es:[di+1921],dl
    	mov es:[di+2241],dl
    	;PINTAR GROSOR 3
    	mov es:[di+2],dl	
    	mov es:[di+322],dl   
    	mov es:[di+642],dl
    	mov es:[di+962],dl
    	mov es:[di+1282],dl
    	mov es:[di+1602],dl
    	mov es:[di+1922],dl
    	mov es:[di+2242],dl
    LLANTA3:		;INFERIOR IZQUIERDA
    	mov di, ax 	;punto inicial
    	add di, 8640 	;ya estoy en la fila de llanta 320(6+8+13) = 8640
    	sub di, 3		;ya estoy en la llanta
    	;ALTURA DE LLANTA DE 8PX
    	;PINTAR GROSOR 1
    	mov es:[di],dl								
		mov es:[di+320],dl   
    	mov es:[di+640],dl
    	mov es:[di+960],dl
    	mov es:[di+1280],dl
    	mov es:[di+1600],dl
    	mov es:[di+1920],dl
    	mov es:[di+2240],dl
    	;PINTAR GROSOR 2
    	mov es:[di+1],dl	
    	mov es:[di+321],dl   
    	mov es:[di+641],dl
    	mov es:[di+961],dl
    	mov es:[di+1281],dl
    	mov es:[di+1601],dl
    	mov es:[di+1921],dl
    	mov es:[di+2241],dl
    	;PINTAR GROSOR 3
    	mov es:[di+2],dl	
    	mov es:[di+322],dl   
    	mov es:[di+642],dl
    	mov es:[di+962],dl
    	mov es:[di+1282],dl
    	mov es:[di+1602],dl
    	mov es:[di+1922],dl
    	mov es:[di+2242],dl
    LLANTA4: 	;INFERIOR DERECHA
    	mov di, ax 	;punto inicial 
    	add di, 20	;ya estoy en la columna de la llanta
    	add di, 8640 ;ya estoy en la fila y en la llanta 320(6+8+13) = 8640
    	;ALTURA DE LLANTA DE 8PX
    	;PINTAR GROSOR 1
    	mov es:[di],dl								
		mov es:[di+320],dl   
    	mov es:[di+640],dl
    	mov es:[di+960],dl
    	mov es:[di+1280],dl
    	mov es:[di+1600],dl
    	mov es:[di+1920],dl
    	mov es:[di+2240],dl
    	;PINTAR GROSOR 2
    	mov es:[di+1],dl	
    	mov es:[di+321],dl   
    	mov es:[di+641],dl
    	mov es:[di+961],dl
    	mov es:[di+1281],dl
    	mov es:[di+1601],dl
    	mov es:[di+1921],dl
    	mov es:[di+2241],dl
    	;PINTAR GROSOR 3
    	mov es:[di+2],dl	
    	mov es:[di+322],dl   
    	mov es:[di+642],dl
    	mov es:[di+962],dl
    	mov es:[di+1282],dl
    	mov es:[di+1602],dl
    	mov es:[di+1922],dl
    	mov es:[di+2242],dl
    FIN:
    	ret

pintarCarro endp


limpiarCarro proc
	;--------------------------------------------------------------------
        ;   Recibe:       di = posicion   
		;				  dl = color   
        ;                 ax = auxiliar de posicion
        ;                 cx = alturaCarro                                 
        ;                                                                    
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Pintar el carro en cualquier posicion				                 
        ;--------------------------------------------------------------------
	;PINTAR CADA FILA DEL CARRO
	PINTARCARROZA:  
    	mov es:[di], dl
    	mov es:[di+1],dl
    	mov es:[di+2],dl
    	mov es:[di+3],dl
    	mov es:[di+4],dl
    	mov es:[di+5],dl
    	mov es:[di+6],dl
    	mov es:[di+7],dl
    	mov es:[di+8],dl
    	mov es:[di+9],dl
    	mov es:[di+10],dl
    	mov es:[di+11],dl
    	mov es:[di+12],dl
    	mov es:[di+13],dl
    	mov es:[di+14],dl
    	mov es:[di+15],dl
    	mov es:[di+16],dl
    	mov es:[di+17],dl
    	mov es:[di+18],dl
    	mov es:[di+19],dl
    SIGFILA:
    	dec cx 
    	cmp cx, 0d
    	je LLANTA1
    	add di,320
    	jmp PINTARCARROZA
    ;PINTAR LLANTAS DEL CARRO
    LLANTA1:	;SUPERIOR IZQUIERDA
    	mov di, ax 	;punto inicial 
    	add di,1920 ;6 pixeles abajo entonces 6(320) = 1920
    	sub di,3	;le resto 3 para que este sobre la llanta y tenga grosor de 3px
    	mov dl, GrisClaro
    	;ALTURA DE LLANTA DE 8PX
    	;PINTAR GROSOR 1
    	mov es:[di],dl								
		mov es:[di+320],dl 
    	mov es:[di+640],dl
    	mov es:[di+960],dl
    	mov es:[di+1280],dl 
    	mov es:[di+1600],dl 
    	mov es:[di+1920],dl
    	mov es:[di+2240],dl
    	;PINTAR GROSOR 2
    	mov es:[di+1],dl	
    	mov es:[di+321],dl   
    	mov es:[di+641],dl
    	mov es:[di+961],dl
    	mov es:[di+1281],dl
    	mov es:[di+1601],dl
    	mov es:[di+1921],dl
    	mov es:[di+2241],dl
    	;PINTAR GROSOR 3
    	mov es:[di+2],dl	
    	mov es:[di+322],dl   
    	mov es:[di+642],dl
    	mov es:[di+962],dl
    	mov es:[di+1282],dl
    	mov es:[di+1602],dl
    	mov es:[di+1922],dl
    	mov es:[di+2242],dl
    LLANTA2:		;SUPERIOR DERECHA
    	mov di, ax 	;punto inicial 
    	add di, 20	;ya estoy en la columna de la llanta
    	add di,1920 ;6 pixeles abajo entonces 6(320) = 1920, ya estoy en la llanta
    	;ALTURA DE LLANTA DE 8PX
    	;PINTAR GROSOR 1
    	mov es:[di],dl								
		mov es:[di+320],dl   
    	mov es:[di+640],dl
    	mov es:[di+960],dl
    	mov es:[di+1280],dl
    	mov es:[di+1600],dl
    	mov es:[di+1920],dl
    	mov es:[di+2240],dl
    	;PINTAR GROSOR 2
    	mov es:[di+1],dl	
    	mov es:[di+321],dl   
    	mov es:[di+641],dl
    	mov es:[di+961],dl
    	mov es:[di+1281],dl
    	mov es:[di+1601],dl
    	mov es:[di+1921],dl
    	mov es:[di+2241],dl
    	;PINTAR GROSOR 3
    	mov es:[di+2],dl	
    	mov es:[di+322],dl   
    	mov es:[di+642],dl
    	mov es:[di+962],dl
    	mov es:[di+1282],dl
    	mov es:[di+1602],dl
    	mov es:[di+1922],dl
    	mov es:[di+2242],dl
    LLANTA3:		;INFERIOR IZQUIERDA
    	mov di, ax 	;punto inicial
    	add di, 8640 	;ya estoy en la fila de llanta 320(6+8+13) = 8640
    	sub di, 3		;ya estoy en la llanta
    	;ALTURA DE LLANTA DE 8PX
    	;PINTAR GROSOR 1
    	mov es:[di],dl								
		mov es:[di+320],dl   
    	mov es:[di+640],dl
    	mov es:[di+960],dl
    	mov es:[di+1280],dl
    	mov es:[di+1600],dl
    	mov es:[di+1920],dl
    	mov es:[di+2240],dl
    	;PINTAR GROSOR 2
    	mov es:[di+1],dl	
    	mov es:[di+321],dl   
    	mov es:[di+641],dl
    	mov es:[di+961],dl
    	mov es:[di+1281],dl
    	mov es:[di+1601],dl
    	mov es:[di+1921],dl
    	mov es:[di+2241],dl
    	;PINTAR GROSOR 3
    	mov es:[di+2],dl	
    	mov es:[di+322],dl   
    	mov es:[di+642],dl
    	mov es:[di+962],dl
    	mov es:[di+1282],dl
    	mov es:[di+1602],dl
    	mov es:[di+1922],dl
    	mov es:[di+2242],dl
    LLANTA4: 	;INFERIOR DERECHA
    	mov di, ax 	;punto inicial 
    	add di, 20	;ya estoy en la columna de la llanta
    	add di, 8640 ;ya estoy en la fila y en la llanta 320(6+8+13) = 8640
    	;ALTURA DE LLANTA DE 8PX
    	;PINTAR GROSOR 1
    	mov es:[di],dl								
		mov es:[di+320],dl   
    	mov es:[di+640],dl
    	mov es:[di+960],dl
    	mov es:[di+1280],dl
    	mov es:[di+1600],dl
    	mov es:[di+1920],dl
    	mov es:[di+2240],dl
    	;PINTAR GROSOR 2
    	mov es:[di+1],dl	
    	mov es:[di+321],dl   
    	mov es:[di+641],dl
    	mov es:[di+961],dl
    	mov es:[di+1281],dl
    	mov es:[di+1601],dl
    	mov es:[di+1921],dl
    	mov es:[di+2241],dl
    	;PINTAR GROSOR 3
    	mov es:[di+2],dl	
    	mov es:[di+322],dl   
    	mov es:[di+642],dl
    	mov es:[di+962],dl
    	mov es:[di+1282],dl
    	mov es:[di+1602],dl
    	mov es:[di+1922],dl
    	mov es:[di+2242],dl
    FIN:
    	ret

limpiarCarro endp


pintarBloque proc 
	;--------------------------------------------------------------------
        ;   Recibe:       di = posicion   
		;				  dl = colorExterno   											
        ;                 al = colorInterno                             			 
        ;                 bx = auxiliar para comparaciones                                            
        ;   Devuelve:    nada	                               			  				 
        ;                                                                    				
        ;   Comentarios: Pintar el bloque en cualquier posicion				                 
        ;--------------------------------------------------------------------
	;PINTAR CUADRO PRINCIPAL DEL BLOQUE
	CUADRO1: 
        cmp di,7629         ;si no ha llegado el bloque entero a la barra horizontal superior (23,269) = 7629 no pinta nada aun
        jb FIN
        cmp di,60850          ;Si llego a la barra horizontal inferior (190,50) = 60850 ya no pinta
        ja CUADRO2          
		;Linea 1
    	mov es:[di], dl
    	mov es:[di+1],dl
    	mov es:[di+2],dl
    	mov es:[di+3],dl
    	;Linea 2
    	mov es:[di-320],dl
    	mov es:[di-319],dl
    	mov es:[di-318],dl
    	mov es:[di-317],dl
    	;Linea 3
    	mov es:[di-640],dl
    	mov es:[di-639],dl
    	mov es:[di-638],dl
    	mov es:[di-637],dl
    	;Linea 4
    	mov es:[di-960],dl
    	mov es:[di-959],dl
    	mov es:[di-958],dl
    	mov es:[di-957],dl
    CUADRO2:
        mov bx, di
        sub bx,1284
        cmp bx,7629
        jb FIN
        cmp bx,60850        ;bx = di-1284
        ja CUADRO5
    	;Linea 1
    	mov es:[di-1284],dl
    	mov es:[di-1283],dl
    	mov es:[di-1282],dl
    	mov es:[di-1281],dl
    	;Linea 2
    	mov es:[di-1604],dl
    	mov es:[di-1603],dl
    	mov es:[di-1602],dl
    	mov es:[di-1601],dl
    	;Linea 3
    	mov es:[di-1924],dl
    	mov es:[di-1923],dl
    	mov es:[di-1922],dl
    	mov es:[di-1921],dl
    	;Linea 4
    	mov es:[di-2244],dl
    	mov es:[di-2243],dl
    	mov es:[di-2242],dl
    	mov es:[di-2241],dl
    CUADRO3: 
		;Linea 1
    	mov es:[di-1280],al 
    	mov es:[di-1279],al
    	mov es:[di-1278],al
    	mov es:[di-1277],al
    	;Linea 2
    	mov es:[di-1600],al
    	mov es:[di-1599],al
    	mov es:[di-1598],al
    	mov es:[di-1597],al
    	;Linea 3
    	mov es:[di-1920],al
    	mov es:[di-1919],al
    	mov es:[di-1918],al
    	mov es:[di-1917],al
    	;Linea 4
    	mov es:[di-2240],al
    	mov es:[di-2239],al
    	mov es:[di-2238],al
    	mov es:[di-2237],al
    CUADRO4:
    	;Linea 1
    	mov es:[di-1276],dl 
    	mov es:[di-1275],dl
    	mov es:[di-1274],dl
    	mov es:[di-1273],dl
    	;Linea 2
    	mov es:[di-1596],dl
    	mov es:[di-1595],dl
    	mov es:[di-1594],dl
    	mov es:[di-1593],dl
    	;Linea 3
    	mov es:[di-1916],dl
    	mov es:[di-1915],dl
    	mov es:[di-1914],dl
    	mov es:[di-1913],dl
    	;Linea 4
    	mov es:[di-2236],dl
    	mov es:[di-2235],dl
    	mov es:[di-2234],dl
    	mov es:[di-2233],dl
    CUADRO5:
        mov bx, di
        sub bx,2568
        cmp bx,7629
        jb FIN
        cmp bx,60850        
        ja CUADRO10
    	;Linea 1
    	mov es:[di-2568],dl 
    	mov es:[di-2567],dl
    	mov es:[di-2566],dl
    	mov es:[di-2565],dl
    	;Linea 2
    	mov es:[di-2888],dl
    	mov es:[di-2887],dl
    	mov es:[di-2886],dl
    	mov es:[di-2885],dl
    	;Linea 3
    	mov es:[di-3208],dl
    	mov es:[di-3207],dl
    	mov es:[di-3206],dl
    	mov es:[di-3205],dl
    	;Linea 4
    	mov es:[di-3528],dl
    	mov es:[di-3527],dl
    	mov es:[di-3526],dl
    	mov es:[di-3525],dl
    CUADRO6:
    	;Linea 1
    	mov es:[di-2564],al
    	mov es:[di-2563],al
    	mov es:[di-2562],al
    	mov es:[di-2561],al
    	;Linea 2
    	mov es:[di-2884],al
    	mov es:[di-2883],al
    	mov es:[di-2882],al
    	mov es:[di-2881],al
    	;Linea 3
    	mov es:[di-3204],al
    	mov es:[di-3203],al
    	mov es:[di-3202],al
    	mov es:[di-3201],al
    	;Linea 4
    	mov es:[di-3524],al
    	mov es:[di-3523],al
    	mov es:[di-3522],al
    	mov es:[di-3521],al
    CUADRO7:
    	;Linea 1
    	mov es:[di-2560],al
    	mov es:[di-2559],al
    	mov es:[di-2558],al
    	mov es:[di-2557],al
    	;Linea 2
    	mov es:[di-2880],al
    	mov es:[di-2879],al
    	mov es:[di-2878],al
    	mov es:[di-2877],al
    	;Linea 3
    	mov es:[di-3200],al
    	mov es:[di-3199],al
    	mov es:[di-3198],al
    	mov es:[di-3197],al
    	;Linea 4
    	mov es:[di-3520],al
    	mov es:[di-3519],al
    	mov es:[di-3518],al
    	mov es:[di-3517],al
    CUADRO8:
    	;Linea 1
    	mov es:[di-2556],al
    	mov es:[di-2555],al
    	mov es:[di-2554],al
    	mov es:[di-2553],al
    	;Linea 2
    	mov es:[di-2876],al
    	mov es:[di-2875],al
    	mov es:[di-2874],al
    	mov es:[di-2873],al
    	;Linea 3
    	mov es:[di-3196],al
    	mov es:[di-3195],al
    	mov es:[di-3194],al
    	mov es:[di-3193],al
    	;Linea 4
    	mov es:[di-3516],al
    	mov es:[di-3515],al
    	mov es:[di-3514],al
    	mov es:[di-3513],al
    CUADRO9:
    	;Linea 1
    	mov es:[di-2552],dl
    	mov es:[di-2551],dl
    	mov es:[di-2550],dl
    	mov es:[di-2549],dl
    	;Linea 2
    	mov es:[di-2872],dl
    	mov es:[di-2871],dl
    	mov es:[di-2870],dl
    	mov es:[di-2869],dl
    	;Linea 3
    	mov es:[di-3192],dl
    	mov es:[di-3191],dl
    	mov es:[di-3190],dl
    	mov es:[di-3189],dl
    	;Linea 4
    	mov es:[di-3512],dl
    	mov es:[di-3511],dl
    	mov es:[di-3510],dl
    	mov es:[di-3509],dl
    CUADRO10:
        mov bx, di
        sub bx,3844
        cmp bx,7629
        jb FIN
        cmp bx,60850        
        ja CUADRO13
    	;Linea 1
    	mov es:[di-3844],dl
    	mov es:[di-3843],dl
    	mov es:[di-3842],dl
    	mov es:[di-3841],dl
    	;Linea 2
    	mov es:[di-4164],dl
    	mov es:[di-4163],dl
    	mov es:[di-4162],dl
    	mov es:[di-4161],dl
    	;Linea 3
    	mov es:[di-4484],dl
    	mov es:[di-4483],dl
    	mov es:[di-4482],dl
    	mov es:[di-4481],dl
    	;Linea 4
    	mov es:[di-4804],dl
    	mov es:[di-4803],dl
    	mov es:[di-4802],dl
    	mov es:[di-4801],dl
    CUADRO11:
    	;Linea 1
    	mov es:[di-3840],al
    	mov es:[di-3839],al
    	mov es:[di-3838],al
    	mov es:[di-3837],al
    	;Linea 2
    	mov es:[di-4160],al 
    	mov es:[di-4159],al
    	mov es:[di-4158],al
    	mov es:[di-4157],al
    	;Linea 3
    	mov es:[di-4480],al
    	mov es:[di-4479],al
    	mov es:[di-4478],al
    	mov es:[di-4477],al
    	;Linea 4
    	mov es:[di-4800],al
    	mov es:[di-4799],al
    	mov es:[di-4798],al
    	mov es:[di-4797],al
    CUADRO12:
    	;Linea 1
    	mov es:[di-3836],dl
    	mov es:[di-3835],dl
    	mov es:[di-3834],dl
    	mov es:[di-3833],dl
    	;Linea 2
    	mov es:[di-4156],dl 
    	mov es:[di-4155],dl
    	mov es:[di-4154],dl
    	mov es:[di-4153],dl
    	;Linea 3
    	mov es:[di-4476],dl
    	mov es:[di-4475],dl
    	mov es:[di-4474],dl
    	mov es:[di-4473],dl
    	;Linea 4
    	mov es:[di-4796],dl
    	mov es:[di-4795],dl
    	mov es:[di-4794],dl
    	mov es:[di-4793],dl
    CUADRO13:
        mov bx, di
        sub bx,5120
        cmp bx,7629
        jb FIN
        cmp bx,60850        
        ja FIN
    	;Linea 1
    	mov es:[di-5120],dl
    	mov es:[di-5119],dl
    	mov es:[di-5118],dl
    	mov es:[di-5117],dl
    	;Linea 2
    	mov es:[di-5440],dl 
    	mov es:[di-5439],dl
    	mov es:[di-5438],dl
    	mov es:[di-5437],dl
    	;Linea 3
    	mov es:[di-5760],dl
    	mov es:[di-5759],dl
    	mov es:[di-5758],dl
    	mov es:[di-5757],dl
    	;Linea 4
    	mov es:[di-6080],dl
    	mov es:[di-6079],dl
    	mov es:[di-6078],dl
    	mov es:[di-6077],dl
    FIN:
    	ret

pintarBloque endp

