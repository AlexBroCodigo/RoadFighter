;================================ REGISTRAR USUARIO ===================================
registrarUsuario proc 
	imprimir saltoln
	USUARIO:
		imprimir msjRegUser
		leerCadena entradaU
		mVerificarTamanoUsuario entradaU
		cmp al, 0d
		je ERRORTAM
		VERIUSUARIO: 
			call verficarExistenciadeUsuario
			cmp al, 1d
			je CONTRASENA
			YAEXISTE:
				mWrite <'-ADVERTENCIA: El usuario ya esta registrado. Intentelo con uno nuevo por favor'>
				imprimir saltoln
				jmp USUARIO	
		ERRORTAM:
				mWrite <'-ADVERTENCIA: Numero de caracteres de usuario excedido. Intentelo de nuevo por favor'>
				imprimir saltoln
				jmp USUARIO
	CONTRASENA:
		imprimir msjRegContra
		leerCadena entradaC
		mVerificarTamanoContrasena entradaC
		cmp al, 0d
		je ERRORCON
		VERICONTRA:
			mComprobarSiNumero entradaC
			cmp al, 0d
			je NONUMERO
			call guardarUsuario
			mWrite <'Usurio registrado exitosamente.'>
			leerChar
			cmp numBarras, 20d
			je NOINC
			inc numBarras
			NOINC:
				limpiarCadena entradaU,SIZEOF entradaU,'$'
				limpiarCadena entradaC,SIZEOF entradaC,'$'
				jmp SalirU
			NONUMERO:
				mWrite <'-ADVERTENCIA: Contrasena no valida.'>
				imprimir saltoln
				jmp CONTRASENA
		ERRORCON:
			mWrite <'-ADVERTENCIA: Tamano de contrasena incorrecta.'>
			imprimir saltoln
			jmp CONTRASENA
	SalirU:
		ret

registrarUsuario endp



verficarExistenciadeUsuario proc
	;verifico con el administrador
	compararCadena entradaU,userAdmin
	je YAEXISTE
	;verifico si esta lleno el usuario y si si lo comparo  
	cmp usuario1[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario1 
	je YAEXISTE
	cmp usuario2[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario2 
	je YAEXISTE
	cmp usuario3[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario3 
	je YAEXISTE
	cmp usuario4[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario4 
	je YAEXISTE
	cmp usuario5[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario5 
	je YAEXISTE
	cmp usuario6[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario6 
	je YAEXISTE
	cmp usuario7[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario7 
	je YAEXISTE
	cmp usuario8[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario8
	je YAEXISTE
	cmp usuario9[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario9 
	je YAEXISTE
	cmp usuario10[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario10 
	je YAEXISTE
	cmp usuario11[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario11 
	je YAEXISTE
	cmp usuario12[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario12 
	je YAEXISTE
	cmp usuario13[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario13 
	je YAEXISTE
	cmp usuario14[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario14 
	je YAEXISTE
	cmp usuario15[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario15 
	je YAEXISTE
	cmp usuario16[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario16 
	je YAEXISTE
	cmp usuario17[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario17 
	je YAEXISTE
	cmp usuario18[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario18 
	je YAEXISTE
	cmp usuario19[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario19 
	je YAEXISTE
	cmp usuario20[0],'$'
	je NOEXISTE
	compararCadena entradaU, usuario20 
	je YAEXISTE
	jmp NOEXISTE
	YAEXISTE:
		mov al, 0d
		jmp SalirE
	NOEXISTE:
		mov al, 1d
	SalirE:
		ret

verficarExistenciadeUsuario endp



ComprobarSiNumero proc
	INICIO:
		cmp bl, 4d
		je FIN
		mov cl, byte ptr[di]
		cmp cl, 48d
		jl ERROR
		cmp cl, 57d
		jg ERROR
		inc bl
		inc di
		jmp INICIO
	ERROR:
		mov al, 0d
		jmp SalirC
	FIN:
		mov al, 1d
	SalirC:
		ret

ComprobarSiNumero endp



guardarUsuario proc
	cmp usuario1[0],'$'
	je GUARDAR1
	cmp usuario2[0],'$'
	je GUARDAR2
	cmp usuario3[0],'$'
	je GUARDAR3
	cmp usuario4[0],'$'
	je GUARDAR4
	cmp usuario5[0],'$'
	je GUARDAR5
	cmp usuario6[0],'$'
	je GUARDAR6
	cmp usuario7[0],'$'
	je GUARDAR7
	cmp usuario8[0],'$'
	je GUARDAR8
	cmp usuario9[0],'$'
	je GUARDAR9
	cmp usuario10[0],'$'
	je GUARDAR10
	cmp usuario11[0],'$'
	je GUARDAR11
	cmp usuario12[0],'$'
	je GUARDAR12
	cmp usuario13[0],'$'
	je GUARDAR13
	cmp usuario14[0],'$'
	je GUARDAR14
	cmp usuario15[0],'$'
	je GUARDAR15
	cmp usuario16[0],'$'
	je GUARDAR16
	cmp usuario17[0],'$'
	je GUARDAR17
	cmp usuario18[0],'$'
	je GUARDAR18
	cmp usuario19[0],'$'
	je GUARDAR19
	cmp usuario20[0],'$'
	je GUARDAR20
	jmp GUARDAR20
	GUARDAR1:
		mCopiarCadena usuario1, entradaU
		mCopiarCadena contra1, entradaC
		jmp FINISHG	
	GUARDAR2:
		mCopiarCadena usuario2, entradaU
		mCopiarCadena contra2, entradaC
		jmp FINISHG	
	GUARDAR3:
		mCopiarCadena usuario3, entradaU
		mCopiarCadena contra3, entradaC
		jmp FINISHG	
	GUARDAR4:
		mCopiarCadena usuario4, entradaU
		mCopiarCadena contra4, entradaC
		jmp FINISHG	
	GUARDAR5:
		mCopiarCadena usuario5, entradaU
		mCopiarCadena contra5, entradaC
		jmp FINISHG	
	GUARDAR6:
		mCopiarCadena usuario6, entradaU
		mCopiarCadena contra6, entradaC
		jmp FINISHG	
	GUARDAR7:
		mCopiarCadena usuario7, entradaU
		mCopiarCadena contra7, entradaC
		jmp FINISHG	
	GUARDAR8:
		mCopiarCadena usuario8, entradaU
		mCopiarCadena contra8, entradaC
		jmp FINISHG	
	GUARDAR9:
		mCopiarCadena usuario9, entradaU
		mCopiarCadena contra9, entradaC
		jmp FINISHG	
	GUARDAR10:
		mCopiarCadena usuario10, entradaU
		mCopiarCadena contra10, entradaC
		jmp FINISHG	
	GUARDAR11:
		mCopiarCadena usuario11, entradaU
		mCopiarCadena contra11, entradaC
		jmp FINISHG	
	GUARDAR12:
		mCopiarCadena usuario12, entradaU
		mCopiarCadena contra12, entradaC
		jmp FINISHG	
	GUARDAR13:
		mCopiarCadena usuario13, entradaU
		mCopiarCadena contra13, entradaC
		jmp FINISHG	
	GUARDAR14:
		mCopiarCadena usuario14, entradaU
		mCopiarCadena contra14, entradaC
		jmp FINISHG	
	GUARDAR15:
		mCopiarCadena usuario15, entradaU
		mCopiarCadena contra15, entradaC
		jmp FINISHG	
	GUARDAR16:
		mCopiarCadena usuario16, entradaU
		mCopiarCadena contra16, entradaC
		jmp FINISHG	
	GUARDAR17:
		mCopiarCadena usuario17, entradaU
		mCopiarCadena contra17, entradaC
		jmp FINISHG	
	GUARDAR18:
		mCopiarCadena usuario18, entradaU
		mCopiarCadena contra18, entradaC
		jmp FINISHG	
	GUARDAR19:
		mCopiarCadena usuario19, entradaU
		mCopiarCadena contra19, entradaC
		jmp FINISHG	
	GUARDAR20:
		mCopiarCadena usuario20, entradaU
		mCopiarCadena contra20, entradaC
		jmp FINISHG	
	FINISHG:
		ret

guardarUsuario endp



copiarCadena proc
	INICIOCC:
	cmp byte ptr[di],'$' ;pregunto si no es dolar el caracter de entrada
	je FINALIZO
	;Guardo caracter por caracter mov buffer,entrada 
	mov bl, byte ptr[di]
	mov byte ptr[si], bl
	inc si
	inc di
	jmp INICIOCC
	FINALIZO:
		mov byte ptr[si],'$'
		ret

copiarCadena endp



copiarInformacion proc 
	;di = buffer
	;si = posicion del caracter a copiar
	INICIOCI:
		cmp bufferInformacion[si],';'
		je FIN
		;Guardo caracter por caracter mov buffer,entrada 
		mov bl, bufferInformacion[si]
		mov byte ptr[di], bl
		inc si
		inc di
		jmp INICIOCI
	FIN:
		ret

copiarInformacion endp


copiarPersonaje proc 
	;di = buffer
	;si = posicion del caracter a copiar
	INICIOCP:
		cmp bufferInformacion[si],13d ;13d = retorno de carro
		je FIN
		;Guardo caracter por caracter mov buffer,entrada 
		mov bl, bufferInformacion[si]
		mov byte ptr[di], bl
		inc si
		inc di
		jmp INICIOCP
	FIN:
		ret

copiarPersonaje endp


imprimirUsuario proc
	;---------------------------------------------------------------------------------
        ;   Recibe:      ax = numero de Usuario   
		;				                                      
        ;                                                                   
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Imprime en pantalla el usuario correspondiente a su numero				                 
        ;----------------------------------------------------------------------------
    cmp ax, 1d
    je U1
	cmp ax, 2d
    je U2
    cmp ax, 3d
    je U3
    cmp ax, 4d
    je U4
    cmp ax, 5d
    je U5
    cmp ax, 6d
    je U6
    cmp ax, 7d
    je U7
    cmp ax, 8d
    je U8
    cmp ax, 9d
    je U9
    cmp ax, 10d
    je U10
    cmp ax, 11d
    je U11
    cmp ax, 12d
    je U12
    cmp ax, 13d
    je U13
    cmp ax, 14d
    je U14
    cmp ax, 15d
    je U15
    cmp ax, 16d
    je U16
    cmp ax, 17d
    je U17
    cmp ax, 18d
    je U18
    cmp ax, 19d
    je U19
    cmp ax, 20d
    je U20
    jmp FIN
    U1:
    	imprimir usuario1
    	jmp FIN
    U2:
    	imprimir usuario2
    	jmp FIN
    U3:
    	imprimir usuario3
    	jmp FIN
    U4:
    	imprimir usuario4
    	jmp FIN
    U5:
    	imprimir usuario5
    	jmp FIN
    U6:
    	imprimir usuario6
    	jmp FIN
    U7:
    	imprimir usuario7
    	jmp FIN
    U8:
    	imprimir usuario8
    	jmp FIN
    U9:
    	imprimir usuario9
    	jmp FIN
    U10:
    	imprimir usuario10
    	jmp FIN
    U11:
    	imprimir usuario11
    	jmp FIN
    U12:
    	imprimir usuario12
    	jmp FIN
    U13:
    	imprimir usuario13
    	jmp FIN
    U14:
    	imprimir usuario14
    	jmp FIN
    U15:
    	imprimir usuario15
    	jmp FIN
    U16:
    	imprimir usuario16
    	jmp FIN
    U17:
    	imprimir usuario17
    	jmp FIN
    U18:
    	imprimir usuario18
    	jmp FIN
    U19:
    	imprimir usuario19
    	jmp FIN
    U20:
    	imprimir usuario20
   	FIN:
   		ret

imprimirUsuario endp


;============================= INGRESAR USUARIO ===============================
ingresarUsuario proc
	imprimir saltoln
	INGRESO:
		limpiarCadena entradaU,SIZEOF entradaU,'$'
		limpiarCadena entradaC,SIZEOF entradaC,'$'
		imprimir msjU
		leerCadena entradaU
		imprimir msjC
		leerCadena entradaC
		call buscarUsuario
		cmp al, 0d
		je INCO
		cmp al, 1d
		je REGUS
		cmp al, 2d
		je REGAD
		INCO:
			mWrite <'Usuario o contrasena incorrecta.'>
			imprimir saltoln
			jmp INGRESO
		REGUS:
			call SesionUsuario
			jmp TERMINAR
		REGAD:
			call SesionAdministrador
			jmp TERMINAR
		TERMINAR:
			ret

ingresarUsuario endp


buscarUsuario proc
	cmp entradaU[0],'$' ;en caso de que le de enter a los dos
	je NOEXISTE
	cmp entradaC[0],'$'
	je NOEXISTE
	;COMPARAR CON ADMISTRADOR
	compararCadena userAdmin, entradaU
	je UADMIN
	;COMPARAR CON LOS USUARIOS 
	compararCadena usuario1, entradaU
	je U1
	compararCadena usuario2, entradaU
	je U2
	compararCadena usuario3, entradaU
	je U3
	compararCadena usuario4, entradaU
	je U4
	compararCadena usuario5, entradaU
	je U5
	compararCadena usuario6, entradaU
	je U6
	compararCadena usuario7, entradaU
	je U7
	compararCadena usuario8, entradaU
	je U8
	compararCadena usuario9, entradaU
	je U9
	compararCadena usuario10, entradaU
	je U10
	compararCadena usuario11, entradaU
	je U11
	compararCadena usuario12, entradaU
	je U12
	compararCadena usuario13, entradaU
	je U13
	compararCadena usuario14, entradaU
	je U14
	compararCadena usuario15, entradaU
	je U15
	compararCadena usuario16, entradaU
	je U16
	compararCadena usuario17, entradaU
	je U17
	compararCadena usuario18, entradaU
	je U18
	compararCadena usuario19, entradaU
	je U19
	compararCadena usuario20, entradaU
	je U20
	jmp NOEXISTE
	UADMIN:
		compararCadena contraAdmin, entradaC
		je ESADMIN
		jne NOEXISTE
	U1:
		compararCadena contra1, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario1 ;guardo ya que se logueo
		jmp EXISTE
	U2:
		compararCadena contra2, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario2
		jmp EXISTE
	U3:
		compararCadena contra3, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario3
		jmp EXISTE
	U4:
		compararCadena contra4, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario4
		jmp EXISTE
	U5:
		compararCadena contra5, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario5
		jmp EXISTE
	U6:
		compararCadena contra6, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario6
		jmp EXISTE
	U7:
		compararCadena contra7, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario7
		jmp EXISTE
	U8:
		compararCadena contra8, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario8
		jmp EXISTE
	U9:
		compararCadena contra9, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario9
		jmp EXISTE
	U10:
		compararCadena contra10, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario10
		jmp EXISTE
	U11:
		compararCadena contra11, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario11
		jmp EXISTE
	U12:
		compararCadena contra12, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario12
		jmp EXISTE
	U13:
		compararCadena contra13, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario13
		jmp EXISTE
	U14:
		compararCadena contra14, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario14
		jmp EXISTE
	U15:
		compararCadena contra15, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario15
		jmp EXISTE
	U16:
		compararCadena contra16, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario16
		jmp EXISTE
	U17:
		compararCadena contra17, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario17
		jmp EXISTE
	U18:
		compararCadena contra18, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario18
		jmp EXISTE
	U19:
		compararCadena contra19, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario19
		jmp EXISTE
	U20:
		compararCadena contra20, entradaC
		jne NOEXISTE
		mCopiarCadena usuarioLogueado, usuario20
		jmp EXISTE
	ESADMIN:
		mov al, 2d
		jmp FINAL
	EXISTE:
		mov al, 1d
		jmp FINAL
	NOEXISTE:
		mov al, 0d
	FINAL:
		ret

buscarUsuario endp

;======================= SESION DE USUARIO ==================================
SesionUsuario proc
	MenuUsuario:
		ModoTexto ;limpia la pantalla
		imprimir encabezado
		imprimir menuUser
		imprimir escoja
		leerChar
		cmp al, '1'
		je Iniciar
		cmp al, '2'
		je Cargar
		cmp al, '3'
		je SalirMU
		jmp MenuUsuario
		Iniciar:
			cmp juegoCargado, 0d
			je NOCARGADO
			mIniciarJuego
			ModoTexto ;para escribir en la pantalla normal
			mWrite<'JUEGO TERMINADO!'>
			imprimir saltoln
			mWrite <'Informacion de partida jugada guardada!'>
			leerChar
			jmp MenuUsuario
			NOCARGADO:
				imprimir saltoln
				mWrite<'No se ha cargado las configuraciones del juego.'>
				leerChar
			jmp MenuUsuario
		Cargar:
			mCargarJuego
			jmp MenuUsuario
		SalirMU:
			ret

SesionUsuario endp

;=================================== INICIAR JUEGO ==============================
iniciarJuego proc
	mSetUp
	mGame
	ret

iniciarJuego endp

;=================================== CARGAR JUEGO ===========================

cargarJuego proc
	CARGA:
		limpiarCadena bufferentrada, SIZEOF bufferentrada, 24h; limpia la cadena con caracteres de dolar 
		imprimir saltoln
		mWrite<'Ingrese la ruta del archivo de entrada:'>
		imprimir saltoln
		leerRuta bufferentrada
		abrirFichero bufferentrada, handlerentrada
		cmp siabrio, 0d
		je CARGA 
		limpiarCadena bufferInformacion, SIZEOF bufferInformacion, 24h
		leerFichero handlerentrada, bufferInformacion, SIZEOF bufferInformacion ;numero de bytes maximo a leer
		cerrarFichero handlerentrada
		call almacenarConfiguracion
		mWrite<'Archivo de entrada cargado exitosamente.'>
		mov juegoCargado, 1d
		leerChar
		ret

cargarJuego endp


almacenarConfiguracion proc
	xor si,si
	PARALEVEL1:
		Nivel1:
			cmp bufferInformacion[si],';'
			je NUMNIVEL1
			inc si
			jmp Nivel1
		NUMNIVEL1:
			inc si
			cmp bufferInformacion[si],';'
			je TN1
			jmp NUMNIVEL1
		TN1: ;Tiempo nivel 1
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov TiempoNivel1, ax
		TOBS1: ;me lo dejo en el punto y coma
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov tiempo1Obs, al
		TPREM1:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov tiempo1Premio, al
		PTOBS1:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov puntosObsN1, ax
		PTPREM1:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov puntosPremiosN1, ax
		CLCARRO1:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarPersonaje bufferaux
			compararCadena bufferaux, cadrojo
			je CLROJO1
			compararCadena bufferaux, cadverde
			je CLVERDE1
			compararCadena bufferaux, cadazul
			je CLAZUL1
			compararCadena bufferaux, cadblanco
			je CLBLANCO1
			CLROJO1:
				mov carrocl1, 4d
				jmp PARALEVEL2
			CLVERDE1:
				mov carrocl1, 2d
				jmp PARALEVEL2
			CLAZUL1:
				mov carrocl1, 1d
				jmp PARALEVEL2
			CLBLANCO1:
				mov carrocl1, 15d
	PARALEVEL2:
		inc si ;nueva linea = caracter 10
		inc si ;posible dolar o siguiente nivel
		cmp bufferInformacion[si],'$' ;si no hay nivel 2
		je FIN
		limpiarCadena bufferaux, SIZEOF bufferaux, 24h
		Nivel2:
			cmp bufferInformacion[si],';'
			je NUMNIVEL2
			inc si
			jmp Nivel2
		NUMNIVEL2:
			inc si
			cmp bufferInformacion[si],';'
			je TN2
			jmp NUMNIVEL2
		TN2: 
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov TiempoNivel2, ax
		TOBS2: ;me lo dejo en el punto y coma
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov tiempo2Obs, al
		TPREM2:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov tiempo2Premio, al
		PTOBS2:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov puntosObsN2, ax
		PTPREM2:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov puntosPremiosN2, ax
		CLCARRO2:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarPersonaje bufferaux
			compararCadena bufferaux, cadrojo
			je CLROJO2
			compararCadena bufferaux, cadverde
			je CLVERDE2
			compararCadena bufferaux, cadazul
			je CLAZUL2
			compararCadena bufferaux, cadblanco
			je CLBLANCO2
			CLROJO2:
				mov carrocl2, 4d
				jmp PARALEVEL3
			CLVERDE2:
				mov carrocl2, 2d
				jmp PARALEVEL3
			CLAZUL2:
				mov carrocl2, 1d
				jmp PARALEVEL3
			CLBLANCO2:
				mov carrocl2, 15d
	PARALEVEL3:
		inc si ;nueva linea = caracter 10
		inc si ;posible dolar o siguiente nivel
		cmp bufferInformacion[si],'$' ;si no hay nivel 2
		je FIN
		limpiarCadena bufferaux, SIZEOF bufferaux, 24h
		Nivel3:
			cmp bufferInformacion[si],';'
			je NUMNIVEL3
			inc si
			jmp Nivel3
		NUMNIVEL3:
			inc si
			cmp bufferInformacion[si],';'
			je TN3
			jmp NUMNIVEL3
		TN3: 
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov TiempoNivel3, ax
		TOBS3: ;me lo dejo en el punto y coma
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov tiempo3Obs, al
		TPREM3:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov tiempo3Premio, al
		PTOBS3:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov puntosObsN3, ax
		PTPREM3:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov puntosPremiosN3, ax
		CLCARRO3:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarPersonaje bufferaux
			compararCadena bufferaux, cadrojo
			je CLROJO3
			compararCadena bufferaux, cadverde
			je CLVERDE3
			compararCadena bufferaux, cadazul
			je CLAZUL3
			compararCadena bufferaux, cadblanco
			je CLBLANCO3
			CLROJO3:
				mov carrocl3, 4d
				jmp PARALEVEL4
			CLVERDE3:
				mov carrocl3, 2d
				jmp PARALEVEL4
			CLAZUL3:
				mov carrocl3, 1d
				jmp PARALEVEL4
			CLBLANCO3:
				mov carrocl3, 15d
	PARALEVEL4:
		inc si ;nueva linea = caracter 10
		inc si ;posible dolar o siguiente nivel
		cmp bufferInformacion[si],'$' ;si no hay nivel 2
		je FIN
		limpiarCadena bufferaux, SIZEOF bufferaux, 24h
		Nivel4:
			cmp bufferInformacion[si],';'
			je NUMNIVEL4
			inc si
			jmp Nivel4
		NUMNIVEL4:
			inc si
			cmp bufferInformacion[si],';'
			je TN4
			jmp NUMNIVEL4
		TN4: 
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov TiempoNivel4, ax
		TOBS4: ;me lo dejo en el punto y coma
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov tiempo4Obs, al
		TPREM4:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov tiempo4Premio, al
		PTOBS4:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov puntosObsN4, ax
		PTPREM4:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov puntosPremiosN4, ax
		CLCARRO4:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarPersonaje bufferaux
			compararCadena bufferaux, cadrojo
			je CLROJO4
			compararCadena bufferaux, cadverde
			je CLVERDE4
			compararCadena bufferaux, cadazul
			je CLAZUL4
			compararCadena bufferaux, cadblanco
			je CLBLANCO4
			CLROJO4:
				mov carrocl4, 4d
				jmp PARALEVEL5
			CLVERDE4:
				mov carrocl4, 2d
				jmp PARALEVEL5
			CLAZUL4:
				mov carrocl4, 1d
				jmp PARALEVEL5
			CLBLANCO4:
				mov carrocl4, 15d
	PARALEVEL5:
		inc si ;nueva linea = caracter 10
		inc si ;posible dolar o siguiente nivel
		cmp bufferInformacion[si],'$' ;si no hay nivel 2
		je FIN
		limpiarCadena bufferaux, SIZEOF bufferaux, 24h
		Nivel5:
			cmp bufferInformacion[si],';'
			je NUMNIVEL5
			inc si
			jmp Nivel5
		NUMNIVEL5:
			inc si
			cmp bufferInformacion[si],';'
			je TN5
			jmp NUMNIVEL5
		TN5: 
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov TiempoNivel5, ax
		TOBS5: ;me lo dejo en el punto y coma
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov tiempo5Obs, al
		TPREM5:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov tiempo5Premio, al
		PTOBS5:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov puntosObsN5, ax
		PTPREM5:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov puntosPremiosN5, ax
		CLCARRO5:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarPersonaje bufferaux
			compararCadena bufferaux, cadrojo
			je CLROJO5
			compararCadena bufferaux, cadverde
			je CLVERDE5
			compararCadena bufferaux, cadazul
			je CLAZUL5
			compararCadena bufferaux, cadblanco
			je CLBLANCO5
			CLROJO5:
				mov carrocl5, 4d
				jmp PARALEVEL6
			CLVERDE5:
				mov carrocl5, 2d
				jmp PARALEVEL6
			CLAZUL5:
				mov carrocl5, 1d
				jmp PARALEVEL6
			CLBLANCO5:
				mov carrocl5, 15d
	PARALEVEL6:
		inc si ;nueva linea = caracter 10
		inc si ;posible dolar o siguiente nivel
		cmp bufferInformacion[si],'$' ;si no hay nivel 2
		je FIN
		limpiarCadena bufferaux, SIZEOF bufferaux, 24h
		Nivel6:
			cmp bufferInformacion[si],';'
			je NUMNIVEL6
			inc si
			jmp Nivel6
		NUMNIVEL6:
			inc si
			cmp bufferInformacion[si],';'
			je TN6
			jmp NUMNIVEL6
		TN6: 
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov TiempoNivel6, ax
		TOBS6: ;me lo dejo en el punto y coma
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov tiempo6Obs, al
		TPREM6:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov tiempo6Premio, al
		PTOBS6:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov puntosObsN6, ax
		PTPREM6:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarInformacion bufferaux
			ConvertirAscii bufferaux ;numero en ax
			mov puntosPremiosN6, ax
		CLCARRO6:
			limpiarCadena bufferaux, SIZEOF bufferaux, 24h
			inc si
			mCopiarPersonaje bufferaux
			compararCadena bufferaux, cadrojo
			je CLROJO6
			compararCadena bufferaux, cadverde
			je CLVERDE6
			compararCadena bufferaux, cadazul
			je CLAZUL6
			compararCadena bufferaux, cadblanco
			je CLBLANCO6
			CLROJO6:
				mov carrocl6, 4d
				jmp FIN
			CLVERDE6:
				mov carrocl6, 2d
				jmp FIN
			CLAZUL6:
				mov carrocl6, 1d
				jmp FIN
			CLBLANCO6:
				mov carrocl6, 15d
	FIN:
		ret

almacenarConfiguracion endp


;======================= SESION DE ADMINISTRADOR ============================
SesionAdministrador proc	
	MenuManager:
		ModoTexto ;limpia la pantalla
		imprimir encabezado
		imprimir menuAdmin
		imprimir escoja
		leerChar
		cmp al, '1'
		je TOPPUNTOS
		cmp al, '2'
		je TOPTIEMPO
		cmp al, '3'
		je SalirMA
		jmp MenuManager
		TOPPUNTOS:
			ModoTexto
			mTop10Puntos
			jmp MenuManager
		TOPTIEMPO:
			ModoTexto
			mTop10Tiempo
			jmp MenuManager
		SalirMA:
			ret

SesionAdministrador endp

;============================ TOP 10 PUNTOS ===============================

Top10Puntos proc 
	mCalcularPuntosDescendente
	mMostrarTopPuntos
	leerChar
	mArchivoTopPuntos
	leerChar
	cmp al,20h		;barra espaciadora
	je BARRAS
	jmp FIN
	BARRAS:
		mIniciarBarrasPuntos
	FIN:
		ret

Top10Puntos endp


calcularPuntosDescendente proc
	;--------------------------------------------------------------------
        ;   Recibe:      si = para recorrer en i  
		;				 di = para recorrer en j                                     
        ;                ax = auxiliar                                                    
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Ordena en forma descendente para el top puntos				                 
        ;----------------------------------------------------------------
	xor si,si
	mov di,si
	inc di
	inc di
	CONDICION:
		mov ax, punteoU[si]
		cmp ax, punteoU[di]
		jae SIGJ
		;AUX = VALOR1
		mov ax, numUsuario[si] 	;usuario
		mov usuarioaux, ax
		mov ax, punteoU[si]  	;punteo
		mov punteoaux, ax
		mov ax, tiempoU[si] 	;tiempo
		mov tiempoaux, ax
		mov ax, nivelU[si]
		mov nivelaux,ax 		;nivel
		;VALOR1 = VALOR2
		mov ax, numUsuario[di] 
		mov numUsuario[si],ax
		mov ax, punteoU[di]
		mov punteoU[si], ax
		mov ax, tiempoU[di]
		mov tiempoU[si],ax
		mov ax, nivelU[di]
		mov nivelU[si],ax
		;VALOR2 = AUX
		mov ax, usuarioaux
		mov numUsuario[di],ax
		mov ax, punteoaux
		mov punteoU[di],ax
		mov ax, tiempoaux
		mov tiempoU[di],ax
		mov ax, nivelaux
		mov nivelU[di],ax
		SIGJ:
			cmp di, 38d
			je SIGI
			inc di
			inc di
			jmp CONDICION
		SIGI:
			cmp si,36d
			je FIN
			inc si
			inc si
			mov di, si
			inc di
			inc di
			jmp CONDICION
	FIN:
		ret

calcularPuntosDescendente endp


mostrarTopPuntos proc
	imprimir toptituloP
	NO1:
		imprimir top1
		imprimir tab2
		mImprimirUsuario numUsuario[0]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[0]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[0]
		ConvertirString numeroaux
		imprimir numeroaux
	NO2:
		imprimir top2
		imprimir tab2
		mImprimirUsuario numUsuario[2]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[2]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[2]
		ConvertirString numeroaux
		imprimir numeroaux
	NO3:
		imprimir top3
		imprimir tab2
		mImprimirUsuario numUsuario[4]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[4]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[4]
		ConvertirString numeroaux
		imprimir numeroaux
	NO4:
		imprimir top4
		imprimir tab2
		mImprimirUsuario numUsuario[6]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[6]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[6]
		ConvertirString numeroaux
		imprimir numeroaux
	NO5:
		imprimir top5
		imprimir tab2
		mImprimirUsuario numUsuario[8]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[8]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[8]
		ConvertirString numeroaux
		imprimir numeroaux
	NO6:
		imprimir top6
		imprimir tab2
		mImprimirUsuario numUsuario[10]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[10]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[10]
		ConvertirString numeroaux
		imprimir numeroaux
	NO7:
		imprimir top7
		imprimir tab2
		mImprimirUsuario numUsuario[12]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[12]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[12]
		ConvertirString numeroaux
		imprimir numeroaux
	NO8:
		imprimir top8
		imprimir tab2
		mImprimirUsuario numUsuario[14]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[14]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[14]
		ConvertirString numeroaux
		imprimir numeroaux
	NO9:
		imprimir top9
		imprimir tab2
		mImprimirUsuario numUsuario[16]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[16]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[16]
		ConvertirString numeroaux
		imprimir numeroaux
	NO10:
		imprimir top10
		imprimir tab2
		mImprimirUsuario numUsuario[18]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[18]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[18]
		ConvertirString numeroaux
		imprimir numeroaux
	FIN:
		ret

mostrarTopPuntos endp


;====================== ARCHIVO PUNTOS.REP =============================
archivoTopPuntos proc
	crearFichero rutapuntos, handlerentrada
	call EscribirTopPuntos
	cerrarFichero handlerentrada
	imprimir saltoln
	mWrite <'Archivo Puntos.rep generado correctamente!'>
	ret

archivoTopPuntos endp



EscribirTopPuntos proc
	escribirFichero handlerentrada, toptituloP, 17d
	NO1:
		escribirFichero handlerentrada, top1, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[0]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[0]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[0]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO2:
		escribirFichero handlerentrada, top2, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[2]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[2]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[2]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO3:
		escribirFichero handlerentrada, top3, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[4]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[4]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[4]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO4:
		escribirFichero handlerentrada, top4, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[6]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[6]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[6]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO5:
		escribirFichero handlerentrada, top5, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[8]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[8]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[8]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO6:
		escribirFichero handlerentrada, top6, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[10]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[10]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[10]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO7:
		escribirFichero handlerentrada, top7, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[12]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[12]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[12]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO8:
		escribirFichero handlerentrada, top8, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[14]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[14]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[14]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO9:
		escribirFichero handlerentrada, top9, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[16]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[16]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[16]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO10:
		escribirFichero handlerentrada, top10, 5d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[18]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[18]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, punteoU[18]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	FIN:
		ret

EscribirTopPuntos endp


escribirFicheroUsuario proc
	;----------------------------------------------------------------------------------
        ;   Recibe:      ax = numero de Usuario   
		;				                                      
        ;                                                                   
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Escribe en el archivo el usuario correspondiente a su numero				                 
        ;------------------------------------------------------------------------------
    cmp ax, 1d
    je U1
	cmp ax, 2d
    je U2
    cmp ax, 3d
    je U3
    cmp ax, 4d
    je U4
    cmp ax, 5d
    je U5
    cmp ax, 6d
    je U6
    cmp ax, 7d
    je U7
    cmp ax, 8d
    je U8
    cmp ax, 9d
    je U9
    cmp ax, 10d
    je U10
    cmp ax, 11d
    je U11
    cmp ax, 12d
    je U12
    cmp ax, 13d
    je U13
    cmp ax, 14d
    je U14
    cmp ax, 15d
    je U15
    cmp ax, 16d
    je U16
    cmp ax, 17d
    je U17
    cmp ax, 18d
    je U18
    cmp ax, 19d
    je U19
    cmp ax, 20d
    je U20
    jmp FIN
    U1:
    	String_size usuario1
		mov cx, ax	
		escribirFichero handlerentrada, usuario1, cx
    	jmp FIN
    U2:
    	String_size usuario2
		mov cx, ax	
		escribirFichero handlerentrada, usuario2, cx
    	jmp FIN
    U3:
    	String_size usuario3
		mov cx, ax	
		escribirFichero handlerentrada, usuario3, cx
    	jmp FIN
    U4:
    	String_size usuario4
		mov cx, ax	
		escribirFichero handlerentrada, usuario4, cx
    	jmp FIN
    U5:
    	String_size usuario5
		mov cx, ax	
		escribirFichero handlerentrada, usuario5, cx
    	jmp FIN
    U6:
    	String_size usuario6
		mov cx, ax	
		escribirFichero handlerentrada, usuario6, cx
    	jmp FIN
    U7:
    	String_size usuario7
		mov cx, ax	
		escribirFichero handlerentrada, usuario7, cx
    	jmp FIN
    U8:
    	String_size usuario8
		mov cx, ax	
		escribirFichero handlerentrada, usuario8, cx
    	jmp FIN
    U9:
    	String_size usuario9
		mov cx, ax	
		escribirFichero handlerentrada, usuario9, cx
    	jmp FIN
    U10:
    	String_size usuario10
		mov cx, ax	
		escribirFichero handlerentrada, usuario10, cx
    	jmp FIN
    U11:
    	String_size usuario11
		mov cx, ax	
		escribirFichero handlerentrada, usuario11, cx
    	jmp FIN
    U12:
    	String_size usuario12
		mov cx, ax	
		escribirFichero handlerentrada, usuario12, cx
    	jmp FIN
    U13:
    	String_size usuario13
		mov cx, ax	
		escribirFichero handlerentrada, usuario13, cx
    	jmp FIN
    U14:
    	String_size usuario14
		mov cx, ax	
		escribirFichero handlerentrada, usuario14, cx
    	jmp FIN
    U15:
    	String_size usuario15
		mov cx, ax	
		escribirFichero handlerentrada, usuario15, cx
    	jmp FIN
    U16:
    	String_size usuario16
		mov cx, ax	
		escribirFichero handlerentrada, usuario16, cx
    	jmp FIN
    U17:
    	String_size usuario17
		mov cx, ax	
		escribirFichero handlerentrada, usuario17, cx
    	jmp FIN
    U18:
    	String_size usuario18
		mov cx, ax	
		escribirFichero handlerentrada, usuario18, cx
    	jmp FIN
    U19:
    	String_size usuario19
		mov cx, ax	
		escribirFichero handlerentrada, usuario19, cx
    	jmp FIN
    U20:
    	String_size usuario20
		mov cx, ax	
		escribirFichero handlerentrada, usuario20, cx
   	FIN:
   		ret

escribirFicheroUsuario endp


;============================= TOP 10 TIEMPO ============================

Top10Tiempo proc 
	mCalularTiempoDescendente
	mMostrarTopTiempo
	leerChar
	mArchivoTopTiempo
	leerChar
	cmp al,20h		;barra espaciadora
	je BARRAS
	jmp FIN
	BARRAS:
		mIniciarBarrasTiempo
	FIN:
		ret

Top10Tiempo endp



calcularTiempoDescendente proc
	;--------------------------------------------------------------------
        ;   Recibe:      si = para recorrer en i    
		;				 di = para recorrer en j                                    
        ;                ax = auxiliar                                                    
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Ordena en forma descendente para el top tiempo				                 
        ;----------------------------------------------------------------
	xor si,si
	mov di,si
	inc di
	inc di
	CONDICION:
		mov ax, tiempoU[si]
		cmp ax, tiempoU[di]
		jae SIGJ
		;AUX = VALOR1
		mov ax, numUsuario[si] 	;usuario
		mov usuarioaux, ax
		mov ax, punteoU[si]  	;punteo
		mov punteoaux, ax
		mov ax, tiempoU[si] 	;tiempo
		mov tiempoaux, ax
		mov ax, nivelU[si]
		mov nivelaux,ax 		;nivel
		;VALOR1 = VALOR2
		mov ax, numUsuario[di] 
		mov numUsuario[si],ax
		mov ax, punteoU[di]
		mov punteoU[si], ax
		mov ax, tiempoU[di]
		mov tiempoU[si],ax
		mov ax, nivelU[di]
		mov nivelU[si],ax
		;VALOR2 = AUX
		mov ax, usuarioaux
		mov numUsuario[di],ax
		mov ax, punteoaux
		mov punteoU[di],ax
		mov ax, tiempoaux
		mov tiempoU[di],ax
		mov ax, nivelaux
		mov nivelU[di],ax
		SIGJ:
			cmp di, 38d
			je SIGI
			inc di
			inc di
			jmp CONDICION
		SIGI:
			cmp si,36d
			je FIN
			inc si
			inc si
			mov di, si
			inc di
			inc di
			jmp CONDICION
	FIN:
		ret

calcularTiempoDescendente endp


mostarTopTiempo proc
	imprimir toptituloT
	NO1:
		imprimir top1
		imprimir tab2
		mImprimirUsuario numUsuario[0]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[0]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[0]
		ConvertirString numeroaux
		imprimir numeroaux
	NO2:
		imprimir top2
		imprimir tab2
		mImprimirUsuario numUsuario[2]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[2]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[2]
		ConvertirString numeroaux
		imprimir numeroaux
	NO3:
		imprimir top3
		imprimir tab2
		mImprimirUsuario numUsuario[4]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[4]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[4]
		ConvertirString numeroaux
		imprimir numeroaux
	NO4:
		imprimir top4
		imprimir tab2
		mImprimirUsuario numUsuario[6]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[6]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[6]
		ConvertirString numeroaux
		imprimir numeroaux
	NO5:
		imprimir top5
		imprimir tab2
		mImprimirUsuario numUsuario[8]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[8]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[8]
		ConvertirString numeroaux
		imprimir numeroaux
	NO6:
		imprimir top6
		imprimir tab2
		mImprimirUsuario numUsuario[10]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[10]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[10]
		ConvertirString numeroaux
		imprimir numeroaux
	NO7:
		imprimir top7
		imprimir tab2
		mImprimirUsuario numUsuario[12]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[12]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[12]
		ConvertirString numeroaux
		imprimir numeroaux
	NO8:
		imprimir top8
		imprimir tab2
		mImprimirUsuario numUsuario[14]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[14]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[14]
		ConvertirString numeroaux
		imprimir numeroaux
	NO9:
		imprimir top9
		imprimir tab2
		mImprimirUsuario numUsuario[16]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[16]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[16]
		ConvertirString numeroaux
		imprimir numeroaux
	NO10:
		imprimir top10
		imprimir tab2
		mImprimirUsuario numUsuario[18]
		imprimir tab4
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[18]
		ConvertirString numeroaux
		imprimir numeroaux
		imprimir tab3
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[18]
		ConvertirString numeroaux
		imprimir numeroaux
	FIN:
		ret

mostarTopTiempo endp



;=========================== ARCHIVO TIEMPOS.REP ===========================

archivoTopTiempo proc
	crearFichero rutatiempos, handlerentrada
	call EscribirTopTiempos
	cerrarFichero handlerentrada
	imprimir saltoln
	mWrite <'Archivo Tiempos.rep generado correctamente!'>
	ret

archivoTopTiempo endp


EscribirTopTiempos proc 
	escribirFichero handlerentrada, toptituloT, 23d
	NO1:
		escribirFichero handlerentrada, top1, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[0]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[0]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[0]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO2:
		escribirFichero handlerentrada, top2, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[2]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[2]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[2]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO3:
		escribirFichero handlerentrada, top3, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[4]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[4]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[4]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO4:
		escribirFichero handlerentrada, top4, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[6]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[6]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[6]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO5:
		escribirFichero handlerentrada, top5, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[8]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[8]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[8]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO6:
		escribirFichero handlerentrada, top6, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[10]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[10]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[10]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO7:
		escribirFichero handlerentrada, top7, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[12]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[12]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[12]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO8:
		escribirFichero handlerentrada, top8, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[14]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[14]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[14]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO9:
		escribirFichero handlerentrada, top9, 4d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[16]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[16]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[16]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	NO10:
		escribirFichero handlerentrada, top10, 5d
		escribirFichero handlerentrada, tab2, 2d
		mEscribirFicheroUsuario numUsuario[18]
		escribirFichero handlerentrada, tab4, 4d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, nivelU[18]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
		escribirFichero handlerentrada, tab3, 3d
		limpiarCadena numeroaux, SIZEOF numeroaux, 24h
		mov ax, tiempoU[18]
		ConvertirString numeroaux
		String_size numeroaux
		mov cx, ax
		escribirFichero handlerentrada, numeroaux, cx
	FIN:
		ret

EscribirTopTiempos endp



;================================================= PARA INICIAR GRAFICA SOBRE PUNTOS ======================================

iniciarBarrasPuntos proc
	call almacenarPuntos 	;almacenamos los puntos en tamBarra[]
	mov ax, punteoU[0] 		
	mov valorMaximo, ax 	;guardamos el punteo mayor para la referencia con las barras
	mSetUpBarras
	mMenuOrden
	ret
	
iniciarBarrasPuntos endp

almacenarPuntos proc 
	mov ax, punteoU[0]
	mov tamBarra[0], ax
	mov ax, punteoU[2]
	mov tamBarra[2], ax
	mov ax, punteoU[4]
	mov tamBarra[4], ax
	mov ax, punteoU[6]
	mov tamBarra[6], ax
	mov ax, punteoU[8]
	mov tamBarra[8], ax
	mov ax, punteoU[10]
	mov tamBarra[10], ax
	mov ax, punteoU[12]
	mov tamBarra[12], ax
	mov ax, punteoU[14]
	mov tamBarra[14], ax
	mov ax, punteoU[16]
	mov tamBarra[16], ax
	mov ax, punteoU[18]
	mov tamBarra[18], ax
	mov ax, punteoU[20]
	mov tamBarra[20], ax
	mov ax, punteoU[22]
	mov tamBarra[22], ax
	mov ax, punteoU[24]
	mov tamBarra[24], ax
	mov ax, punteoU[26]
	mov tamBarra[26], ax
	mov ax, punteoU[28]
	mov tamBarra[28], ax
	mov ax, punteoU[30]
	mov tamBarra[30], ax
	mov ax, punteoU[32]
	mov tamBarra[32], ax
	mov ax, punteoU[34]
	mov tamBarra[34], ax
	mov ax, punteoU[36]
	mov tamBarra[36], ax
	mov ax, punteoU[38]
	mov tamBarra[38], ax
	FIN:
		ret

almacenarPuntos endp


;================================================= PARA INICIAR GRAFICA SOBRE TIEMPOS ======================================

iniciarBarrasTiempo proc
	call almacenarTiempos 	;almacenamos los tiempos en tamBarra[]
	mov ax, tiempoU[0] 		
	mov valorMaximo, ax 	;guardamos el tiempo mayor para la referencia con las barras
	mSetUpBarras
	mMenuOrden
	ret

iniciarBarrasTiempo endp


almacenarTiempos proc
	mov ax, tiempoU[0]
	mov tamBarra[0], ax
	mov ax, tiempoU[2]
	mov tamBarra[2], ax
	mov ax, tiempoU[4]
	mov tamBarra[4], ax
	mov ax, tiempoU[6]
	mov tamBarra[6], ax
	mov ax, tiempoU[8]
	mov tamBarra[8], ax
	mov ax, tiempoU[10]
	mov tamBarra[10], ax
	mov ax, tiempoU[12]
	mov tamBarra[12], ax
	mov ax, tiempoU[14]
	mov tamBarra[14], ax
	mov ax, tiempoU[16]
	mov tamBarra[16], ax
	mov ax, tiempoU[18]
	mov tamBarra[18], ax
	mov ax, tiempoU[20]
	mov tamBarra[20], ax
	mov ax, tiempoU[22]
	mov tamBarra[22], ax
	mov ax, tiempoU[24]
	mov tamBarra[24], ax
	mov ax, tiempoU[26]
	mov tamBarra[26], ax
	mov ax, tiempoU[28]
	mov tamBarra[28], ax
	mov ax, tiempoU[30]
	mov tamBarra[30], ax
	mov ax, tiempoU[32]
	mov tamBarra[32], ax
	mov ax, tiempoU[34]
	mov tamBarra[34], ax
	mov ax, tiempoU[36]
	mov tamBarra[36], ax
	mov ax, tiempoU[38]
	mov tamBarra[38], ax
	FIN:
		ret

almacenarTiempos endp


;====================================== ORDENAMIENTOS ==================================
menuOrden proc
	MENUSORT:
		ModoTexto
		imprimir msjMenuOrden
		imprimir escoja
		leerChar
		cmp al,'1'
		je BSORT
		cmp al,'2'
		je QSORT
		cmp al,'3'
		je SSORT
		cmp al,'4'
		je FIN
		jmp MENUSORT
		BSORT:
			mov tipoOrden,1d
			jmp VELO
		QSORT:
			mov tipoOrden,2d
			jmp VELO
		SSORT:
			mov tipoOrden,3d
		VELO:
			imprimir msjvelocidad
			leerChar
			cmp al, '0'
			jb ERVEL
			cmp al, '9'
			ja ERVEL
			jmp GUVEL
			ERVEL:
				imprimir saltoln
				mWrite<'Error en velocidad, ingrese un numero entre 0 a 9 por favor.'>
				leerChar
				jmp VELO
			GUVEL:
				mov velocidad[0], al
			FORMA:
				imprimir msjASDEC
				imprimir escoja
				leerChar
				cmp al, '1'
				je DESC
				cmp al, '2'
				je ASC
				jmp FORMA
				DESC:
					mov formaOrden, 1d
					jmp ORDENAR
				ASC:
					mov formaOrden, 2d
			ORDENAR:
				mGameBarras
				;REINICIAR TIEMPO
				mov estadoSegundoB, 0d
				mov contadorMinutosB, 0d
				mov minutoBarra[0],'0'
				mov minutoBarra[1],'0'
	jmp MENUSORT
	FIN:
		ret

menuOrden endp