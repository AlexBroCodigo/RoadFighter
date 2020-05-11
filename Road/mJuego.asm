;============================ MAPEO LEXICOGRAFICO =========================
mtolineal macro fila,col
    push fila
    push col
    call tolineal
endm

mgetxy macro posicion
   	push posicion 	
   	call getxy
endm


;============================= PINTAR EL JUEGO ===========================
PintarMargenes macro color
	LOCAL Primera, Segunda, Tercera, Cuarta
	mov dl, color

	;empieza en pixel (i,j) = (20,50) = 320*20+50 = 6450
	;barra horizontal superior
	mov di,6450
	Primera:
		mov es:[di],dl ;[di] contiene el color de esa posicion de la memoria de graficos
		inc di
		cmp di,6669   ;(20,269) = 320*20+269 = 6669
		jne Primera

	;barra horizontal inferior
	;empieza en pixel (i,j) = (190,50) = 320*190+50 = 60850
	mov di,60850
	Segunda:
		mov es:[di],dl
		inc di
		cmp di, 61069  ;(190,269) = 320*190+269= 61069
		jne Segunda

	;barra vertical izquierda
	mov di, 6450 ;(20,50)
	Tercera:
		mov es:[di], dl
		add di,320
		cmp di,60850 ;(190,50)
		jne Tercera

	;barra vertical derecha
	mov di,6669  ;(20,269)
	Cuarta:
		mov es:[di], dl
		add di,320
		cmp di,61069 ;(190,269) = 320*190+269= 61069
		jne Cuarta
		mov es:[di],dl ;ultima pintada que es el punto que faltaba

endm


PintarCuadro macro color
	LOCAL PINTAR, SIGFILA, FIN
	mov dl, color
	;Empezamos en la coordenada (21,51) y terminamos en la (21,268) para cada fila, con esto solo vamos bajando de fila mientras no sea la fila 190
	;Calculamos coordenadas: PI(21,51) = 320*21+51 = 6771,  PF(21,268) = 6988
	mov ax, 6771	;Almacenamos en ax y bx  punto inicial y final+1 para luego solo incrementar la fila
	mov bx, 6989	;Un valor mas para comprobar que si llega a ese valor ya no pintara
	mov di, ax
	mov cx, 168d ;Numero de lineas que va a pintar: 189-21=168
	PINTAR:
		mov es:[di],dl
		inc di
		cmp di,bx
		jne PINTAR
	SIGFILA:
		cmp cx, 0d
		je FIN
		dec cx
		add ax,320 ;actualizo punto inicial
		add bx,320 ;actualizo punto final
		mov di,ax
		jmp PINTAR
	FIN:

endm

printVideo macro cadena
    push offset cadena
    call WriteString
    
endm

mpintarCarro macro posicion, color
	;PROLOGO
	push di 	
	push dx
	push cx
	push ax

	mov di, posicion
	mov ax, posicion
	mov dl, color
	mov cx, alturaCarro
	call pintarCarro

	;EPILOGO
	pop ax
	pop cx
	pop dx
	pop di

endm

mlimpiarCarro macro posicion, color
	;PROLOGO
	push di 	
	push dx
	push cx
	push ax

	mov di, posicion
	mov ax, posicion
	mov dl, color
	mov cx, alturaCarro
	call limpiarCarro

	;EPILOGO
	pop ax
	pop cx
	pop dx
	pop di

endm

mpintarBloque macro posicion, colorExterno, colorInterno
	;PROLOGO
	push di 	
	push dx
	push ax
	push bx

	mov di, posicion
	mov dl, colorExterno
	mov al, colorInterno
	call pintarBloque

	;EPILOGO
	pop bx
	pop ax
	pop dx
	pop di

endm


;====================== PARA FUNCIONAMIENTO DEL JUEGO ======================

mSetUp macro 
	call SetUp
endm

mGame macro 
	call Game
endm

mInstrucciones macro 
 	call Instrucciones
endm

mMoverCarro macro 
 	call moverCarro
endm

mAvanzarBloque macro posicion, colorExterno, colorInterno
	;PROLOGO
	push di 	
	push dx
	push ax

	mov di, posicion
	mov dl, colorExterno
	mov al, colorInterno
	call avanzarBloque
	add posicion, 320 ;actualizo la variable que guarda la posicion del bloque 1px abajo

	;EPILOGO
	pop ax
	pop dx
	pop di

endm


mGestionarBloque macro bloque, fila, columna, bloqueListo
	LOCAL REINICIAR, FIN
	;PROLOGO
	push ax

	;CODIGO
	
	mov ax, bloque   ;guardo en ax para no modificar la variable
    sub ax, 5120     ;Con eso apuntamos al cuadro 13
    cmp ax, 60850    ;Si ya se paso la barra horizontal
    ja REINICIAR
    jmp FIN
    REINICIAR:      ;REINICIAR PREMIO1
        mtolineal fila,columna    ;guardamos en ax
        mov bloque, ax 		;actualizo la variable bloque
        mov bloqueListo, 0d ;indico que el bloque esta listo para salir otra vez
    FIN:
    	;EPILOGO
    	pop ax

endm

mGestionChoqueBloque macro posBloque, fila, columna, bloqueListo, color	
	mtolineal fila, columna ;guarda en AX la posicion de reinicio
	mov dl, color
	push offset bloqueListo
	push offset posBloque
	call GestionChoqueBloque
	
endm

mGuardarPartida macro
	call guardarPartida
endm

