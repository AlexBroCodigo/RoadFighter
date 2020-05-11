main proc
	Inicio:
		iniciarDs
	MenuPrincipal:
		ModoTexto
		imprimir menuinicial
		imprimir escoja
		leerChar
		cmp al,31h 	;numero 1 de la tabla ascii ,49d
		je Ingresar
		cmp al,32h
		je Registrar
		cmp al,33h
		je SalirJuego
		jmp MenuPrincipal
	Ingresar:
		 mIngresarUsuario
		 jmp MenuPrincipal
	Registrar:
		mRegistrarUsuario
		jmp MenuPrincipal
	SalirJuego:
		cerrarAplicacion

main endp