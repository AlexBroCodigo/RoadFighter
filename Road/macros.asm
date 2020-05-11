;=======================MACROS COMUNES=======================
iniciarDs macro 
        mov ax,@data        ;pasamos la direccion de data a ax
        mov ds,ax           ;Inicializa DS
endm

imprimir macro buffer
	mov ah, 09h ;Numero de funcion para imprimir cadena en pantalla del grupo 21h
	mov dx,offset buffer ; equivalente a lea dx, cadena, iniciliza en dx la posicion donde comienza la cadena
	int 21h
endm

leerChar macro	;Obtiene el char ingresado en hexadecimal y lo coloca en al
    mov ah,01h
    int 21h
endm

printChar macro buffer
	mov ah, 02h
	mov dl, buffer
	int 21h
endm

cerrarAplicacion macro
	mov ah,4ch ; numero de funcion para finalizar el programa
   	int 21h
endm

leerCadena macro buffer
	LOCAL ObtenerChar, FinOT ;LOCAL sirve que a la hora de llamar varias veces el metodo ObtenerTexto no haya confucion para el compilador con las etiquetas al hacer los saltos condicionales
	xor si,si	;limpia contra el mismo, tambien podriamos poner mov si, 0
	ObtenerChar:
		leerChar
		cmp al, 0dh ;ascii del salto de linea en hexadecimal
		je FinOT	;etiqueta que nos dirige fin del macro
		mov buffer[si], al ;mover destino, fuente ======== CON TODO ESTO ASEGURAMOS QUE al ya no es un salto de linea
		inc si	;si++
		jmp ObtenerChar
	FinOT:
	mov al,24h ;ascii del dolar en hexadecimal = 36d
	mov buffer[si],al ;deja de guardar los valores en el arreglo porque es el caracter de finalizacion del arreglo
endm

mWrite macro texto
    LOCAL cadena
    .data
        cadena byte texto,'$'
    .code
        push offset cadena
        call WriteString
endm

printReg macro parameter1
        push ax     
        mov ax,parameter1
        call toAscii
        imprimir corA
        imprimir Num
        imprimir corC
        pop ax
endm

String_size macro cadena 
	push offset cadena 
    call Str_length 
endm

compararCadena macro string1,string2
        push offset string2
        push offset string1
        call Compare_String
endm

limpiarCadena macro buffer, numbytes, caracter
	LOCAL Repetir
	push si
	xor si,si
	xor cx,cx
	mov cx, numbytes
	Repetir:
		mov buffer[si], caracter
		inc si
	Loop Repetir
	pop si

endm

leerRuta macro buffer
	LOCAL ObtenerChar, FinOT ;LOCAL sirve que a la hora de llamar varias veces el metodo ObtenerTexto no haya confucion para el compilador con las etiquetas al hacer los saltos condicionales
	xor si,si	;limpia contra el mismo, tambien podriamos poner mov si, 0
	ObtenerChar:
		LeerChar
		cmp al, 0dh ;ascii del salto de linea en hexadecimal
		je FinOT	;etiqueta que nos dirige fin del macro
		mov buffer[si], al ;mover destino, fuente ======== CON TODO ESTO ASEGURAMOS QUE al ya no es un salto de linea
		inc si	;si++
		jmp ObtenerChar
	FinOT:
	mov al, 00h ;ascii del nulo en hexadecimal porque sera el caracter de finalizacion de la cadena
	mov buffer[si],al

endm

mSetCursor macro fila,columna 	;para colocar el cursor donde queramos en el modo video y hace poder imprimir
    push fila 
    push columna
    call SetCursor

endm

mImprimirUsuario macro numUser
	push ax
	mov ax, numUser
	call imprimirUsuario
	pop ax
	
endm


;========================= HORA Y TIEMPO DEL JUEGO =================
ObtenerHora macro 	; hora=ch , minutos=cl, segundos = dh, milisegundos = dl
	mov ah,2ch	
	int 21h
endm


ConvertirStringTiempo macro buffer 		;recibe en ax el numero y lo guarda como cadena en el buffer 
	LOCAL Dividir, Dividir2, FinCr3, NEGATIVO, FIN, ESCERO
	xor si,si
	xor cx,cx
	xor bx,bx
	xor dx,dx
	mov dl,0ah ;10d nueva linea

	cmp al,0d 	;si es cero el numero
	je ESCERO

	test ax, 1000000000000000 ;numero guardado en ax, verificamos si viene con negativo
	jnz NEGATIVO
	jmp Dividir2

	NEGATIVO:
		neg ax			;regreso al numero sin signo
		;mov buffer[si],45 ;signo menos 
		;inc si
		jmp Dividir2

	Dividir:
		xor ah,ah
	Dividir2:
		div dl
		inc cx
		push ax
		cmp al, 00h ;caracter nulo, todo cero en binario, 00, osea que el cociente es 0
		je FinCr3
		jmp Dividir
	FinCr3:
		pop ax
		add ah,30h 	;suma 48 a ah
		mov buffer[si],ah
		inc si
	Loop FinCr3
		mov ah,24h 	;24h es dolar
		mov buffer[si],ah
		inc si
		jmp FIN

	ESCERO:
		mov buffer[si],al
		mov buffer[si+1],24h ;24h es dolar
	FIN: 	 

endm

ConvertirAscii macro numero 
	;recibe una cadena con el numero: entero sin signo y devuelve el numero en ax
	LOCAL INICIO, FIN
	push si
	xor ax,ax
	xor bx,bx
	xor cx,cx
	mov bx,10 	;multiplicador 10
	xor si,si
	INICIO:
		mov cl,numero[si]
		cmp cl,48
		jl FIN
		cmp cl,57
		jg FIN
		inc si
		sub cl,48 	;restar 48 para que me de el numero
		mul bx 		;multiplicar ax por 10
		add ax,cx 	;sumar lo que tengo mas el siguiente
		jmp INICIO
	FIN:
		pop si

endm


;========================= CONVERTIR PUNTAJE =======================
ConvertirString macro buffer
	LOCAL Dividir,Dividir2,FinCr3,NEGATIVO,FIN
	xor si,si
	xor cx,cx
	xor bx,bx
	xor dx,dx
	mov dl,0ah ;10d
	test ax,1000000000000000
	jnz NEGATIVO
	jmp Dividir2

	NEGATIVO:
		neg ax
		mov buffer[si],45
		inc si
		jmp Dividir2

	Dividir:
		xor ah,ah
	Dividir2:
		div dl
		inc cx
		push ax
		cmp al, 00h
		je FinCr3
		jmp Dividir
	FinCr3:
		pop ax
		add ah,30h
		mov buffer[si],ah
		inc si
		Loop FinCr3
		mov ah,24h
		mov buffer[si],ah
		inc si
	FIN:

endm


;========================= MODO VIDEO Y MODO TEXTO =================
ModoTexto macro 
	mov ax, 0003h
	int 10h
endm

ModoVideo macro
	mov ah, 00h
	mov al, 13h
	int 10h
	mov ax, 0A000h
	mov es, ax  ; DS = A000h (memoria de graficos).
endm

delayModoVideo macro
	mov ah, 10h
	int 16h
endm

mDelay macro constante
    push ax
    mov ax,constante
    call delay
    pop ax
endm


;====================== REGISTRAR USUARIOS =========================
mRegistrarUsuario macro
	call registrarUsuario
endm

mVerificarTamanoUsuario macro usuario
	LOCAL ERROR, Continuar, Salir
	String_size usuario
	cmp ax,7d
	jg ERROR
	jmp Continuar
	ERROR:
		mov al, 0d
		jmp Salir
	Continuar:
		mov al, 1d
	Salir: 
		
endm

mVerificarTamanoContrasena macro contra
	LOCAL ERROR, Continuar, Salir
	String_size contra
	cmp ax,4d
	jne ERROR
	Continuar:
		mov al, 1d
		jmp Salir
	ERROR:
		mov al,0d
	Salir:

endm

mComprobarSiNumero macro contra
	mov bl,0d
	mov di,offset contra
	call ComprobarSiNumero
endm


mCopiarCadena macro buffer, entrada
	mov si, offset buffer
	mov di, offset entrada
	call copiarCadena
endm

;============================ CARGAR EL JUEGO ================================
mCopiarInformacion macro buffer
	
	mov di, offset buffer
	call copiarInformacion
	
endm

mCopiarPersonaje macro buffer
	mov di, offset buffer
	call copiarPersonaje

endm

;============================= INGRESAR USUARIO ===============================
mIngresarUsuario macro 
	call ingresarUsuario
endm

;============================= INICIAR JUEGO ==================================
mIniciarJuego macro 
	call iniciarJuego
endm

mCargarJuego macro 
	call cargarJuego
endm

;============================= CONTROL DE FICHEROS ============================
abrirFichero macro buffer, handler
	LOCAL ErrorAbrirFichero, Funciono, Salir
	mov ah,3dh
	mov al,02h ;modo lectura/escritura 
	lea dx, buffer
	int 21h 
	jc ErrorAbrirFichero
	jnc Funciono
	Funciono:
		mov handler, ax
		mov siabrio, 1d
		jmp Salir
	ErrorAbrirFichero:
		mov siabrio, 0d
		mWrite <'Error al abrir el archivo'>
		imprimir saltoln
	Salir:

endm 

cerrarFichero macro handler
	LOCAL Salir, ErrorCerrarFichero
	mov ah,3eh
	mov bx,handler
	int 21h
	jc ErrorCerrarFichero
	jnc Salir
	ErrorCerrarFichero:
		mWrite <'Error al cerrar el archivo'>
		imprimir saltoln
	Salir:

endm

leerFichero macro handler, buffer, numbytes
	LOCAL Salir, ErrorLeerFichero
	mov ah,3fh
	mov bx,handler
	mov cx,numbytes
	lea dx,buffer
	int 21h
	jc ErrorLeerFichero	;si ocurre error
	jnc Salir
	ErrorLeerFichero:
		mWrite <'Error al leer el archivo'>
		imprimir saltoln
	Salir:

endm

crearFichero macro buffer, handler
	LOCAL Funciono, ErrorCrearFichero, Salir
	mov ah,3ch
	mov cx,00h	
	lea dx, buffer
	int 21h
	jc ErrorCrearFichero
	jnc Funciono
	Funciono:
		mov handler,ax
		jmp Salir
	ErrorCrearFichero:
		mWrite <'Error al crear el archivo'>
	Salir:

endm

escribirFichero macro handler, buffer, numbytes
	LOCAL ErrorEscribirFichero, Salir
	mov ah,40h
	mov bx,handler
	mov cx, numbytes
	lea dx, buffer
	int 21h
	jc ErrorEscribirFichero
	jnc Salir
	ErrorEscribirFichero:
		mWrite <'Error al escribir el archivo'>
	Salir:
		
endm

;================================= TOP PUNTOS =================================

mTop10Puntos macro 
	call Top10Puntos
endm

mCalcularPuntosDescendente macro
	;PROLOGO
	push si
	push di
	push ax
	;CODIGO
	call calcularPuntosDescendente
	;EPILOGO
	pop ax
	pop di
	pop si

endm

mMostrarTopPuntos macro
	call mostrarTopPuntos
endm

mArchivoTopPuntos macro 
	call archivoTopPuntos
endm 

mEscribirFicheroUsuario macro numUser
	push ax
	mov ax,numUser
	call escribirFicheroUsuario
	pop ax

endm


;============================ TOP TIEMPO ===============================
mTop10Tiempo macro 
	call Top10Tiempo
endm

mCalularTiempoDescendente macro
	;PROLOGO
	push si
	push di
	push ax
	;CODIGO
	call calcularTiempoDescendente
	;EPILOGO
	pop ax
	pop di
	pop si
	
endm

mMostrarTopTiempo macro 
	call mostarTopTiempo
endm

mArchivoTopTiempo macro
	call archivoTopTiempo
endm

;========================= INICIAR GRAFICA DE BARRAS DE PUNTOS ======================
mIniciarBarrasPuntos macro
	call iniciarBarrasPuntos
endm

;======================== INICIAR GRAFICA DE BARRAS DE TIEMPOS ======================
mIniciarBarrasTiempo macro
	call iniciarBarrasTiempo
endm

;========================= ORDENAMIENTOS =================================
mMenuOrden macro
	call menuOrden
endm
