;====================================== PARA PINTAR GRAFICAS DE BARRAS =====================================
PintarContorno macro color
	LOCAL Primera, Segunda, Tercera, Cuarta
	mov dl, color

	;empieza en pixel (i,j) = (20,10) = 320*20+10 = 6410
	;barra horizontal superior
	mov di,6410
	Primera:
		mov es:[di],dl ;[di] contiene el color de esa posicion de la memoria de graficos
		inc di
		cmp di,6709   ;(20,309) = 320*20+309 = 6709
		jne Primera

	;barra horizontal inferior
	;empieza en pixel (i,j) = (190,10) = 320*190+10 = 60810
	mov di,60810
	Segunda:
		mov es:[di],dl
		inc di
		cmp di, 61109  ;(190,309) = 320*190+309= 61109
		jne Segunda

	;barra vertical izquierda
	mov di, 6410 ;(20,10)
	Tercera:
		mov es:[di], dl
		add di,320
		cmp di,60810 ;(190,10)
		jne Tercera

	;barra vertical derecha
	mov di,6709  ;(20,309)
	Cuarta:
		mov es:[di], dl
		add di,320
		cmp di,61109 ;(190,309) 
		jne Cuarta
		mov es:[di],dl ;ultima pintada que es el punto que faltaba

endm

mPintarBarra macro posicion, ancho, altura, color
	;PROLOGO	
	push di
	push dx
	push cx
	push bx
	push ax
	push si

	;CODIGO
	mov di, posicion
	mov dx, color
	mov bx, ancho
	mov ax, altura
	call pintarBarra

	;EPILOGO
	pop si
	pop ax
	pop bx
	pop cx
	pop dx
	pop di

endm

mPintarNumerosBarras macro
	call pintarNumerosBarras
endm


;================ PARA EL FUNCIONAMIENTO DE LA GRAFICA DE BARRAS =======================
mSetUpBarras macro 
 	call SetUpBarras
endm

mGameBarras macro
	call GameBarras
endm

mObtenerAltura macro numero
	mov ax,numero
	call obtenerAltura
endm

mObtenerColor macro numero
	mov ax,numero
	call obtenerColor
endm

mObtenerHz macro numero
	mov ax,numero
	call obtenerHz
endm


Sound macro hz
	mov al, 86h
	out 43h, al
	mov ax, (1193180 / hz) 	;numero de hz
	out 42h, al
	mov al, ah
	out 42h, al
	in al, 61h
	or al, 00000011b
	out 61h, al
	mDelay tiemposonido 		;para que se escuche el sonido por varios segundos 
	;APAGAR BOCINA
	in al, 61h
	and al, 11111100b
	out 61h, al

endm

mReproducir macro herz
	mov ax, herz
	call reproducir
endm


mConfigurarBarras macro
	call configurarBarras
endm


mGraficarBarras macro
	call graficarBarras
endm

mGestionOrdenamiento macro
	call GestionOrdenamiento
endm

mLimpiarBarras macro
	call limpiarBarras
endm

;============================ PARA ORDENAMIENTOS ===========================
;QUICKSORT
mQuickSortAsc macro prim, ultim
	mov ax, prim
	mov primero, ax 		
	mov ax, ultim
	mov ultimo, ax 			
	call QuickSortAsc

endm

mQuickSortDesc macro prim, ultim
	mov ax, prim
	mov primero, ax 		
	mov ax, ultim
	mov ultimo, ax 			
	call QuickSortDesc
	
endm