;========================= CONFIGURACION - GRAFICA DE BARRAS ==============================
SetUpBarras proc
	;ESTABLECER VELOCIDAD PARA EL SONIDO
	mov tiemposonido, 500d
	;Iniciar Video
	ModoVideo

	;PINTAR ENCABEZADO
	mSetCursor 0,12 		;Coloca el cursor en la (fila,columna) puesta
	printVideo titulografica

	;PINTAR CONTORNO
	PintarContorno Blanco

	;ESTABLECER VALORES PARA LAS BARRAS
	mConfigurarBarras

	;PINTAR NUMEROS DE LAS BARRAS
	mPintarNumerosBarras

	;PINTAR GRAFICA DE BARRAS
	mGraficarBarras

	;MANTENER ACTIVO EL MODO VIDEO
	delayModoVideo
	ret

SetUpBarras endp


configurarBarras proc
	cmp numBarras, 1d
	je BARRAS1
	cmp numBarras, 2d
	je BARRAS2
	cmp numBarras, 3d
	je BARRAS3
	cmp numBarras, 4d
	je BARRAS4
	cmp numBarras, 5d
	je BARRAS5
	cmp numBarras, 6d
	je BARRAS6
	cmp numBarras, 7d
	je BARRAS7
	cmp numBarras, 8d
	je BARRAS8
	cmp numBarras, 9d
	je BARRAS9
	cmp numBarras, 10d
	je BARRAS10
	cmp numBarras, 11d
	je BARRAS11
	cmp numBarras, 12d
	je BARRAS12
	cmp numBarras, 13d
	je BARRAS13
	cmp numBarras, 14d
	je BARRAS14
	cmp numBarras, 15d
	je BARRAS15
	cmp numBarras, 16d
	je BARRAS16
	cmp numBarras, 17d
	je BARRAS17
	cmp numBarras, 18d
	je BARRAS18
	cmp numBarras, 19d
	je BARRAS19
	cmp numBarras, 20d
	je BARRAS20
	jmp FIN
	BARRAS1:
		mov anchuraBarra, 280d
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax 
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		jmp FIN
	BARRAS2:
		mov limiteBarra, 2d
		mov anchuraBarra, 135d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,160
		mov posBarra[2], ax
		jmp FIN
	BARRAS3:
		mov limiteBarra, 4d
		mov anchuraBarra, 88d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,113
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,206
		mov posBarra[4], ax
		jmp FIN
	BARRAS4:
		mov limiteBarra, 6d
		mov anchuraBarra, 65d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,90
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,160
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,230
		mov posBarra[6], ax
		jmp FIN
	BARRAS5:
		mov limiteBarra, 8d
		mov anchuraBarra, 51d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,76
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,132
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,188
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,244
		mov posBarra[8], ax
		jmp FIN
	BARRAS6:
		mov limiteBarra, 10d
		mov anchuraBarra, 41d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,66
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,112
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,158
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,204
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,250
		mov posBarra[10], ax
		jmp FIN
	BARRAS7:
		mov limiteBarra, 12d
		mov anchuraBarra, 35d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,60
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,100
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,140
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,180
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,220
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,260
		mov posBarra[12], ax
		jmp FIN
	BARRAS8:
		mov limiteBarra, 14d
		mov anchuraBarra, 30d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,55
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,90
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,125
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,160
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,195
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,230
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,265
		mov posBarra[14], ax
		jmp FIN
	BARRAS9:
		mov limiteBarra, 16d
		mov anchuraBarra, 26d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,51
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,82
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,113
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,144
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,175
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,206
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,237
		mov posBarra[14], ax
		;NUEVE
		mObtenerColor tamBarra[16] 	;color en ax
		mov colorBarra[16],ax
		mObtenerHz tamBarra[16] 		;hz en ax
		mov hzBarra[16],ax
		mObtenerAltura tamBarra[16]
		mov alturaBarra[16], ax
		mtolineal 170,268
		mov posBarra[16], ax
		jmp FIN
	BARRAS10:
		mov limiteBarra, 18d
		mov anchuraBarra, 23d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,48
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,76
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,104
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,132
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,160
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,188
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,216
		mov posBarra[14], ax
		;NUEVE
		mObtenerColor tamBarra[16] 	;color en ax
		mov colorBarra[16],ax
		mObtenerHz tamBarra[16] 		;hz en ax
		mov hzBarra[16],ax
		mObtenerAltura tamBarra[16]
		mov alturaBarra[16], ax
		mtolineal 170,244
		mov posBarra[16], ax
		;DIEZ
		mObtenerColor tamBarra[18] 	;color en ax
		mov colorBarra[18],ax
		mObtenerHz tamBarra[18] 		;hz en ax
		mov hzBarra[18],ax
		mObtenerAltura tamBarra[18]
		mov alturaBarra[18], ax
		mtolineal 170,272
		mov posBarra[18], ax
		jmp FIN
	BARRAS11:
		mov limiteBarra, 20d
		mov anchuraBarra, 20d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,45
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,70
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,95
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,120
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,145
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,170
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,195
		mov posBarra[14], ax
		;NUEVE
		mObtenerColor tamBarra[16] 	;color en ax
		mov colorBarra[16],ax
		mObtenerHz tamBarra[16] 		;hz en ax
		mov hzBarra[16],ax
		mObtenerAltura tamBarra[16]
		mov alturaBarra[16], ax
		mtolineal 170,220
		mov posBarra[16], ax
		;DIEZ
		mObtenerColor tamBarra[18] 	;color en ax
		mov colorBarra[18],ax
		mObtenerHz tamBarra[18] 		;hz en ax
		mov hzBarra[18],ax
		mObtenerAltura tamBarra[18]
		mov alturaBarra[18], ax
		mtolineal 170,245
		mov posBarra[18], ax
		;ONCE
		mObtenerColor tamBarra[20] 	;color en ax
		mov colorBarra[20],ax
		mObtenerHz tamBarra[20] 		;hz en ax
		mov hzBarra[20],ax
		mObtenerAltura tamBarra[20]
		mov alturaBarra[20], ax
		mtolineal 170,270
		mov posBarra[20], ax
		jmp FIN
	BARRAS12:
		mov limiteBarra, 22d
		mov anchuraBarra, 18d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,43
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,66
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,89
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,112
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,135
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,158
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,181
		mov posBarra[14], ax
		;NUEVE
		mObtenerColor tamBarra[16] 	;color en ax
		mov colorBarra[16],ax
		mObtenerHz tamBarra[16] 		;hz en ax
		mov hzBarra[16],ax
		mObtenerAltura tamBarra[16]
		mov alturaBarra[16], ax
		mtolineal 170,204
		mov posBarra[16], ax
		;DIEZ
		mObtenerColor tamBarra[18] 	;color en ax
		mov colorBarra[18],ax
		mObtenerHz tamBarra[18] 		;hz en ax
		mov hzBarra[18],ax
		mObtenerAltura tamBarra[18]
		mov alturaBarra[18], ax
		mtolineal 170,227
		mov posBarra[18], ax
		;ONCE
		mObtenerColor tamBarra[20] 	;color en ax
		mov colorBarra[20],ax
		mObtenerHz tamBarra[20] 		;hz en ax
		mov hzBarra[20],ax
		mObtenerAltura tamBarra[20]
		mov alturaBarra[20], ax
		mtolineal 170,250
		mov posBarra[20], ax
		;DOCE
		mObtenerColor tamBarra[22] 	;color en ax
		mov colorBarra[22],ax
		mObtenerHz tamBarra[22] 		;hz en ax
		mov hzBarra[22],ax
		mObtenerAltura tamBarra[22]
		mov alturaBarra[22], ax
		mtolineal 170,273
		mov posBarra[22], ax
		jmp FIN
	BARRAS13:
		mov limiteBarra, 24d
		mov anchuraBarra, 16d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,41
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,62
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,83
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,104
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,125
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,146
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,167
		mov posBarra[14], ax
		;NUEVE
		mObtenerColor tamBarra[16] 	;color en ax
		mov colorBarra[16],ax
		mObtenerHz tamBarra[16] 		;hz en ax
		mov hzBarra[16],ax
		mObtenerAltura tamBarra[16]
		mov alturaBarra[16], ax
		mtolineal 170,188
		mov posBarra[16], ax
		;DIEZ
		mObtenerColor tamBarra[18] 	;color en ax
		mov colorBarra[18],ax
		mObtenerHz tamBarra[18] 		;hz en ax
		mov hzBarra[18],ax
		mObtenerAltura tamBarra[18]
		mov alturaBarra[18], ax
		mtolineal 170,209
		mov posBarra[18], ax
		;ONCE
		mObtenerColor tamBarra[20] 	;color en ax
		mov colorBarra[20],ax
		mObtenerHz tamBarra[20] 		;hz en ax
		mov hzBarra[20],ax
		mObtenerAltura tamBarra[20]
		mov alturaBarra[20], ax
		mtolineal 170,230
		mov posBarra[20], ax
		;DOCE
		mObtenerColor tamBarra[22] 	;color en ax
		mov colorBarra[22],ax
		mObtenerHz tamBarra[22] 		;hz en ax
		mov hzBarra[22],ax
		mObtenerAltura tamBarra[22]
		mov alturaBarra[22], ax
		mtolineal 170,251
		mov posBarra[22], ax
		;TRECE
		mObtenerColor tamBarra[24] 	;color en ax
		mov colorBarra[24],ax
		mObtenerHz tamBarra[24] 		;hz en ax
		mov hzBarra[24],ax
		mObtenerAltura tamBarra[24]
		mov alturaBarra[24], ax
		mtolineal 170,272
		mov posBarra[24], ax
		jmp FIN
	BARRAS14:
		mov limiteBarra, 26d
		mov anchuraBarra, 15d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,40
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,60
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,80
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,100
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,120
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,140
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,160
		mov posBarra[14], ax
		;NUEVE
		mObtenerColor tamBarra[16] 	;color en ax
		mov colorBarra[16],ax
		mObtenerHz tamBarra[16] 		;hz en ax
		mov hzBarra[16],ax
		mObtenerAltura tamBarra[16]
		mov alturaBarra[16], ax
		mtolineal 170,180
		mov posBarra[16], ax
		;DIEZ
		mObtenerColor tamBarra[18] 	;color en ax
		mov colorBarra[18],ax
		mObtenerHz tamBarra[18] 		;hz en ax
		mov hzBarra[18],ax
		mObtenerAltura tamBarra[18]
		mov alturaBarra[18], ax
		mtolineal 170,200
		mov posBarra[18], ax
		;ONCE
		mObtenerColor tamBarra[20] 	;color en ax
		mov colorBarra[20],ax
		mObtenerHz tamBarra[20] 		;hz en ax
		mov hzBarra[20],ax
		mObtenerAltura tamBarra[20]
		mov alturaBarra[20], ax
		mtolineal 170,220
		mov posBarra[20], ax
		;DOCE
		mObtenerColor tamBarra[22] 	;color en ax
		mov colorBarra[22],ax
		mObtenerHz tamBarra[22] 		;hz en ax
		mov hzBarra[22],ax
		mObtenerAltura tamBarra[22]
		mov alturaBarra[22], ax
		mtolineal 170,240
		mov posBarra[22], ax
		;TRECE
		mObtenerColor tamBarra[24] 	;color en ax
		mov colorBarra[24],ax
		mObtenerHz tamBarra[24] 		;hz en ax
		mov hzBarra[24],ax
		mObtenerAltura tamBarra[24]
		mov alturaBarra[24], ax
		mtolineal 170,260
		mov posBarra[24], ax
		;CATORCE
		mObtenerColor tamBarra[26] 	;color en ax
		mov colorBarra[26],ax
		mObtenerHz tamBarra[26] 		;hz en ax
		mov hzBarra[26],ax
		mObtenerAltura tamBarra[26]
		mov alturaBarra[26], ax
		mtolineal 170,280
		mov posBarra[26], ax
		jmp FIN
	BARRAS15:
		mov limiteBarra, 28d
		mov anchuraBarra, 13d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,38
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,56
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,74
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,92
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,110
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,128
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,146
		mov posBarra[14], ax
		;NUEVE
		mObtenerColor tamBarra[16] 	;color en ax
		mov colorBarra[16],ax
		mObtenerHz tamBarra[16] 		;hz en ax
		mov hzBarra[16],ax
		mObtenerAltura tamBarra[16]
		mov alturaBarra[16], ax
		mtolineal 170,164
		mov posBarra[16], ax
		;DIEZ
		mObtenerColor tamBarra[18] 	;color en ax
		mov colorBarra[18],ax
		mObtenerHz tamBarra[18] 		;hz en ax
		mov hzBarra[18],ax
		mObtenerAltura tamBarra[18]
		mov alturaBarra[18], ax
		mtolineal 170,182
		mov posBarra[18], ax
		;ONCE
		mObtenerColor tamBarra[20] 	;color en ax
		mov colorBarra[20],ax
		mObtenerHz tamBarra[20] 		;hz en ax
		mov hzBarra[20],ax
		mObtenerAltura tamBarra[20]
		mov alturaBarra[20], ax
		mtolineal 170,200
		mov posBarra[20], ax
		;DOCE
		mObtenerColor tamBarra[22] 	;color en ax
		mov colorBarra[22],ax
		mObtenerHz tamBarra[22] 		;hz en ax
		mov hzBarra[22],ax
		mObtenerAltura tamBarra[22]
		mov alturaBarra[22], ax
		mtolineal 170,218
		mov posBarra[22], ax
		;TRECE
		mObtenerColor tamBarra[24] 	;color en ax
		mov colorBarra[24],ax
		mObtenerHz tamBarra[24] 		;hz en ax
		mov hzBarra[24],ax
		mObtenerAltura tamBarra[24]
		mov alturaBarra[24], ax
		mtolineal 170,236
		mov posBarra[24], ax
		;CATORCE
		mObtenerColor tamBarra[26] 	;color en ax
		mov colorBarra[26],ax
		mObtenerHz tamBarra[26] 		;hz en ax
		mov hzBarra[26],ax
		mObtenerAltura tamBarra[26]
		mov alturaBarra[26], ax
		mtolineal 170,254
		mov posBarra[26], ax
		;QUINCE
		mObtenerColor tamBarra[28] 	;color en ax
		mov colorBarra[28],ax
		mObtenerHz tamBarra[28] 		;hz en ax
		mov hzBarra[28],ax
		mObtenerAltura tamBarra[28]
		mov alturaBarra[28], ax
		mtolineal 170,272
		mov posBarra[28], ax
		jmp FIN
	BARRAS16:
		mov limiteBarra, 30d
		mov anchuraBarra, 12d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,37
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,54
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,71
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,88
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,105
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,122
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,139
		mov posBarra[14], ax
		;NUEVE
		mObtenerColor tamBarra[16] 	;color en ax
		mov colorBarra[16],ax
		mObtenerHz tamBarra[16] 		;hz en ax
		mov hzBarra[16],ax
		mObtenerAltura tamBarra[16]
		mov alturaBarra[16], ax
		mtolineal 170,156
		mov posBarra[16], ax
		;DIEZ
		mObtenerColor tamBarra[18] 	;color en ax
		mov colorBarra[18],ax
		mObtenerHz tamBarra[18] 		;hz en ax
		mov hzBarra[18],ax
		mObtenerAltura tamBarra[18]
		mov alturaBarra[18], ax
		mtolineal 170,173
		mov posBarra[18], ax
		;ONCE
		mObtenerColor tamBarra[20] 	;color en ax
		mov colorBarra[20],ax
		mObtenerHz tamBarra[20] 		;hz en ax
		mov hzBarra[20],ax
		mObtenerAltura tamBarra[20]
		mov alturaBarra[20], ax
		mtolineal 170,190
		mov posBarra[20], ax
		;DOCE
		mObtenerColor tamBarra[22] 	;color en ax
		mov colorBarra[22],ax
		mObtenerHz tamBarra[22] 		;hz en ax
		mov hzBarra[22],ax
		mObtenerAltura tamBarra[22]
		mov alturaBarra[22], ax
		mtolineal 170,207
		mov posBarra[22], ax
		;TRECE
		mObtenerColor tamBarra[24] 	;color en ax
		mov colorBarra[24],ax
		mObtenerHz tamBarra[24] 		;hz en ax
		mov hzBarra[24],ax
		mObtenerAltura tamBarra[24]
		mov alturaBarra[24], ax
		mtolineal 170,224
		mov posBarra[24], ax
		;CATORCE
		mObtenerColor tamBarra[26] 	;color en ax
		mov colorBarra[26],ax
		mObtenerHz tamBarra[26] 		;hz en ax
		mov hzBarra[26],ax
		mObtenerAltura tamBarra[26]
		mov alturaBarra[26], ax
		mtolineal 170,241
		mov posBarra[26], ax
		;QUINCE
		mObtenerColor tamBarra[28] 	;color en ax
		mov colorBarra[28],ax
		mObtenerHz tamBarra[28] 		;hz en ax
		mov hzBarra[28],ax
		mObtenerAltura tamBarra[28]
		mov alturaBarra[28], ax
		mtolineal 170,258
		mov posBarra[28], ax
		;DIECISEIS
		mObtenerColor tamBarra[30] 	;color en ax
		mov colorBarra[30],ax
		mObtenerHz tamBarra[30] 		;hz en ax
		mov hzBarra[30],ax
		mObtenerAltura tamBarra[30]
		mov alturaBarra[30], ax
		mtolineal 170,275
		mov posBarra[30], ax
		jmp FIN
	BARRAS17:
		mov limiteBarra, 32d
		mov anchuraBarra, 11d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,36
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,52
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,68
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,84
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,100
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,116
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,132
		mov posBarra[14], ax
		;NUEVE
		mObtenerColor tamBarra[16] 	;color en ax
		mov colorBarra[16],ax
		mObtenerHz tamBarra[16] 		;hz en ax
		mov hzBarra[16],ax
		mObtenerAltura tamBarra[16]
		mov alturaBarra[16], ax
		mtolineal 170,148
		mov posBarra[16], ax
		;DIEZ
		mObtenerColor tamBarra[18] 	;color en ax
		mov colorBarra[18],ax
		mObtenerHz tamBarra[18] 		;hz en ax
		mov hzBarra[18],ax
		mObtenerAltura tamBarra[18]
		mov alturaBarra[18], ax
		mtolineal 170,164
		mov posBarra[18], ax
		;ONCE
		mObtenerColor tamBarra[20] 	;color en ax
		mov colorBarra[20],ax
		mObtenerHz tamBarra[20] 		;hz en ax
		mov hzBarra[20],ax
		mObtenerAltura tamBarra[20]
		mov alturaBarra[20], ax
		mtolineal 170,180
		mov posBarra[20], ax
		;DOCE
		mObtenerColor tamBarra[22] 	;color en ax
		mov colorBarra[22],ax
		mObtenerHz tamBarra[22] 		;hz en ax
		mov hzBarra[22],ax
		mObtenerAltura tamBarra[22]
		mov alturaBarra[22], ax
		mtolineal 170,196
		mov posBarra[22], ax
		;TRECE
		mObtenerColor tamBarra[24] 	;color en ax
		mov colorBarra[24],ax
		mObtenerHz tamBarra[24] 		;hz en ax
		mov hzBarra[24],ax
		mObtenerAltura tamBarra[24]
		mov alturaBarra[24], ax
		mtolineal 170,212
		mov posBarra[24], ax
		;CATORCE
		mObtenerColor tamBarra[26] 	;color en ax
		mov colorBarra[26],ax
		mObtenerHz tamBarra[26] 		;hz en ax
		mov hzBarra[26],ax
		mObtenerAltura tamBarra[26]
		mov alturaBarra[26], ax
		mtolineal 170,228
		mov posBarra[26], ax
		;QUINCE
		mObtenerColor tamBarra[28] 	;color en ax
		mov colorBarra[28],ax
		mObtenerHz tamBarra[28] 		;hz en ax
		mov hzBarra[28],ax
		mObtenerAltura tamBarra[28]
		mov alturaBarra[28], ax
		mtolineal 170,244
		mov posBarra[28], ax
		;DIECISEIS
		mObtenerColor tamBarra[30] 	;color en ax
		mov colorBarra[30],ax
		mObtenerHz tamBarra[30] 		;hz en ax
		mov hzBarra[30],ax
		mObtenerAltura tamBarra[30]
		mov alturaBarra[30], ax
		mtolineal 170,260
		mov posBarra[30], ax
		;DIECISIETE
		mObtenerColor tamBarra[32] 	;color en ax
		mov colorBarra[32],ax
		mObtenerHz tamBarra[32] 		;hz en ax
		mov hzBarra[32],ax
		mObtenerAltura tamBarra[32]
		mov alturaBarra[32], ax
		mtolineal 170,276
		mov posBarra[32], ax
		jmp FIN
	BARRAS18:
		mov limiteBarra, 34d
		mov anchuraBarra, 10d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,35
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,50
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,65
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,80
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,95
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,110
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,125
		mov posBarra[14], ax
		;NUEVE
		mObtenerColor tamBarra[16] 	;color en ax
		mov colorBarra[16],ax
		mObtenerHz tamBarra[16] 		;hz en ax
		mov hzBarra[16],ax
		mObtenerAltura tamBarra[16]
		mov alturaBarra[16], ax
		mtolineal 170,140
		mov posBarra[16], ax
		;DIEZ
		mObtenerColor tamBarra[18] 	;color en ax
		mov colorBarra[18],ax
		mObtenerHz tamBarra[18] 		;hz en ax
		mov hzBarra[18],ax
		mObtenerAltura tamBarra[18]
		mov alturaBarra[18], ax
		mtolineal 170,155
		mov posBarra[18], ax
		;ONCE
		mObtenerColor tamBarra[20] 	;color en ax
		mov colorBarra[20],ax
		mObtenerHz tamBarra[20] 		;hz en ax
		mov hzBarra[20],ax
		mObtenerAltura tamBarra[20]
		mov alturaBarra[20], ax
		mtolineal 170,170
		mov posBarra[20], ax
		;DOCE
		mObtenerColor tamBarra[22] 	;color en ax
		mov colorBarra[22],ax
		mObtenerHz tamBarra[22] 		;hz en ax
		mov hzBarra[22],ax
		mObtenerAltura tamBarra[22]
		mov alturaBarra[22], ax
		mtolineal 170,185
		mov posBarra[22], ax
		;TRECE
		mObtenerColor tamBarra[24] 	;color en ax
		mov colorBarra[24],ax
		mObtenerHz tamBarra[24] 		;hz en ax
		mov hzBarra[24],ax
		mObtenerAltura tamBarra[24]
		mov alturaBarra[24], ax
		mtolineal 170,200
		mov posBarra[24], ax
		;CATORCE
		mObtenerColor tamBarra[26] 	;color en ax
		mov colorBarra[26],ax
		mObtenerHz tamBarra[26] 		;hz en ax
		mov hzBarra[26],ax
		mObtenerAltura tamBarra[26]
		mov alturaBarra[26], ax
		mtolineal 170,215
		mov posBarra[26], ax
		;QUINCE
		mObtenerColor tamBarra[28] 	;color en ax
		mov colorBarra[28],ax
		mObtenerHz tamBarra[28] 		;hz en ax
		mov hzBarra[28],ax
		mObtenerAltura tamBarra[28]
		mov alturaBarra[28], ax
		mtolineal 170,230
		mov posBarra[28], ax
		;DIECISEIS
		mObtenerColor tamBarra[30] 	;color en ax
		mov colorBarra[30],ax
		mObtenerHz tamBarra[30] 		;hz en ax
		mov hzBarra[30],ax
		mObtenerAltura tamBarra[30]
		mov alturaBarra[30], ax
		mtolineal 170,245
		mov posBarra[30], ax
		;DIECISIETE
		mObtenerColor tamBarra[32] 	;color en ax
		mov colorBarra[32],ax
		mObtenerHz tamBarra[32] 		;hz en ax
		mov hzBarra[32],ax
		mObtenerAltura tamBarra[32]
		mov alturaBarra[32], ax
		mtolineal 170,260
		mov posBarra[32], ax
		;DIECIOCHO
		mObtenerColor tamBarra[34] 	;color en ax
		mov colorBarra[34],ax
		mObtenerHz tamBarra[34] 		;hz en ax
		mov hzBarra[34],ax
		mObtenerAltura tamBarra[34]
		mov alturaBarra[34], ax
		mtolineal 170,275
		mov posBarra[34], ax
		jmp FIN
	BARRAS19:
		mov limiteBarra, 36d
		mov anchuraBarra,9d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,34
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,48
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,62
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,76
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,90
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,104
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,118
		mov posBarra[14], ax
		;NUEVE
		mObtenerColor tamBarra[16] 	;color en ax
		mov colorBarra[16],ax
		mObtenerHz tamBarra[16] 		;hz en ax
		mov hzBarra[16],ax
		mObtenerAltura tamBarra[16]
		mov alturaBarra[16], ax
		mtolineal 170,132
		mov posBarra[16], ax
		;DIEZ
		mObtenerColor tamBarra[18] 	;color en ax
		mov colorBarra[18],ax
		mObtenerHz tamBarra[18] 		;hz en ax
		mov hzBarra[18],ax
		mObtenerAltura tamBarra[18]
		mov alturaBarra[18], ax
		mtolineal 170,146
		mov posBarra[18], ax
		;ONCE
		mObtenerColor tamBarra[20] 	;color en ax
		mov colorBarra[20],ax
		mObtenerHz tamBarra[20] 		;hz en ax
		mov hzBarra[20],ax
		mObtenerAltura tamBarra[20]
		mov alturaBarra[20], ax
		mtolineal 170,160
		mov posBarra[20], ax
		;DOCE
		mObtenerColor tamBarra[22] 	;color en ax
		mov colorBarra[22],ax
		mObtenerHz tamBarra[22] 		;hz en ax
		mov hzBarra[22],ax
		mObtenerAltura tamBarra[22]
		mov alturaBarra[22], ax
		mtolineal 170,174
		mov posBarra[22], ax
		;TRECE
		mObtenerColor tamBarra[24] 	;color en ax
		mov colorBarra[24],ax
		mObtenerHz tamBarra[24] 		;hz en ax
		mov hzBarra[24],ax
		mObtenerAltura tamBarra[24]
		mov alturaBarra[24], ax
		mtolineal 170,188
		mov posBarra[24], ax
		;CATORCE
		mObtenerColor tamBarra[26] 	;color en ax
		mov colorBarra[26],ax
		mObtenerHz tamBarra[26] 		;hz en ax
		mov hzBarra[26],ax
		mObtenerAltura tamBarra[26]
		mov alturaBarra[26], ax
		mtolineal 170,202
		mov posBarra[26], ax
		;QUINCE
		mObtenerColor tamBarra[28] 	;color en ax
		mov colorBarra[28],ax
		mObtenerHz tamBarra[28] 		;hz en ax
		mov hzBarra[28],ax
		mObtenerAltura tamBarra[28]
		mov alturaBarra[28], ax
		mtolineal 170,216
		mov posBarra[28], ax
		;DIECISEIS
		mObtenerColor tamBarra[30] 	;color en ax
		mov colorBarra[30],ax
		mObtenerHz tamBarra[30] 		;hz en ax
		mov hzBarra[30],ax
		mObtenerAltura tamBarra[30]
		mov alturaBarra[30], ax
		mtolineal 170,230
		mov posBarra[30], ax
		;DIECISIETE
		mObtenerColor tamBarra[32] 	;color en ax
		mov colorBarra[32],ax
		mObtenerHz tamBarra[32] 		;hz en ax
		mov hzBarra[32],ax
		mObtenerAltura tamBarra[32]
		mov alturaBarra[32], ax
		mtolineal 170,244
		mov posBarra[32], ax
		;DIECIOCHO
		mObtenerColor tamBarra[34] 	;color en ax
		mov colorBarra[34],ax
		mObtenerHz tamBarra[34] 		;hz en ax
		mov hzBarra[34],ax
		mObtenerAltura tamBarra[34]
		mov alturaBarra[34], ax
		mtolineal 170,258
		mov posBarra[34], ax
		;DIECINUEVE
		mObtenerColor tamBarra[36] 	;color en ax
		mov colorBarra[36],ax
		mObtenerHz tamBarra[36] 		;hz en ax
		mov hzBarra[36],ax
		mObtenerAltura tamBarra[36]
		mov alturaBarra[36], ax
		mtolineal 170,272
		mov posBarra[36], ax
		jmp FIN
	BARRAS20:
		mov limiteBarra, 38d
		mov anchuraBarra, 9d
		;UNO
		mObtenerColor tamBarra[0] 	;color en ax
		mov colorBarra[0],ax
		mObtenerHz tamBarra[0] 		;hz en ax
		mov hzBarra[0],ax
		mObtenerAltura tamBarra[0] 	;altura en AX
		mov alturaBarra[0], ax
		mtolineal 170,20 			;coordenada mapeada en AX
		mov posBarra[0], ax
		;DOS
		mObtenerColor tamBarra[2] 	;color en ax
		mov colorBarra[2],ax
		mObtenerHz tamBarra[2] 		;hz en ax
		mov hzBarra[2],ax
		mObtenerAltura tamBarra[2]
		mov alturaBarra[2], ax
		mtolineal 170,34
		mov posBarra[2], ax
		;TRES
		mObtenerColor tamBarra[4] 	;color en ax
		mov colorBarra[4],ax
		mObtenerHz tamBarra[4] 		;hz en ax
		mov hzBarra[4],ax
		mObtenerAltura tamBarra[4]
		mov alturaBarra[4], ax
		mtolineal 170,48
		mov posBarra[4], ax
		;CUATRO
		mObtenerColor tamBarra[6] 	;color en ax
		mov colorBarra[6],ax
		mObtenerHz tamBarra[6] 		;hz en ax
		mov hzBarra[6],ax
		mObtenerAltura tamBarra[6]
		mov alturaBarra[6], ax
		mtolineal 170,62
		mov posBarra[6], ax
		;CINCO
		mObtenerColor tamBarra[8] 	;color en ax
		mov colorBarra[8],ax
		mObtenerHz tamBarra[8] 		;hz en ax
		mov hzBarra[8],ax
		mObtenerAltura tamBarra[8]
		mov alturaBarra[8], ax
		mtolineal 170,76
		mov posBarra[8], ax
		;SEIS
		mObtenerColor tamBarra[10] 	;color en ax
		mov colorBarra[10],ax
		mObtenerHz tamBarra[10] 		;hz en ax
		mov hzBarra[10],ax
		mObtenerAltura tamBarra[10]
		mov alturaBarra[10], ax
		mtolineal 170,90
		mov posBarra[10], ax
		;SIETE
		mObtenerColor tamBarra[12] 	;color en ax
		mov colorBarra[12],ax
		mObtenerHz tamBarra[12] 		;hz en ax
		mov hzBarra[12],ax
		mObtenerAltura tamBarra[12]
		mov alturaBarra[12], ax
		mtolineal 170,104
		mov posBarra[12], ax
		;OCHO
		mObtenerColor tamBarra[14] 	;color en ax
		mov colorBarra[14],ax
		mObtenerHz tamBarra[14] 		;hz en ax
		mov hzBarra[14],ax
		mObtenerAltura tamBarra[14]
		mov alturaBarra[14], ax
		mtolineal 170,118
		mov posBarra[14], ax
		;NUEVE
		mObtenerColor tamBarra[16] 	;color en ax
		mov colorBarra[16],ax
		mObtenerHz tamBarra[16] 		;hz en ax
		mov hzBarra[16],ax
		mObtenerAltura tamBarra[16]
		mov alturaBarra[16], ax
		mtolineal 170,132
		mov posBarra[16], ax
		;DIEZ
		mObtenerColor tamBarra[18] 	;color en ax
		mov colorBarra[18],ax
		mObtenerHz tamBarra[18] 		;hz en ax
		mov hzBarra[18],ax
		mObtenerAltura tamBarra[18]
		mov alturaBarra[18], ax
		mtolineal 170,146
		mov posBarra[18], ax
		;ONCE
		mObtenerColor tamBarra[20] 	;color en ax
		mov colorBarra[20],ax
		mObtenerHz tamBarra[20] 		;hz en ax
		mov hzBarra[20],ax
		mObtenerAltura tamBarra[20]
		mov alturaBarra[20], ax
		mtolineal 170,160
		mov posBarra[20], ax
		;DOCE
		mObtenerColor tamBarra[22] 	;color en ax
		mov colorBarra[22],ax
		mObtenerHz tamBarra[22] 		;hz en ax
		mov hzBarra[22],ax
		mObtenerAltura tamBarra[22]
		mov alturaBarra[22], ax
		mtolineal 170,174
		mov posBarra[22], ax
		;TRECE
		mObtenerColor tamBarra[24] 	;color en ax
		mov colorBarra[24],ax
		mObtenerHz tamBarra[24] 		;hz en ax
		mov hzBarra[24],ax
		mObtenerAltura tamBarra[24]
		mov alturaBarra[24], ax
		mtolineal 170,188
		mov posBarra[24], ax
		;CATORCE
		mObtenerColor tamBarra[26] 	;color en ax
		mov colorBarra[26],ax
		mObtenerHz tamBarra[26] 		;hz en ax
		mov hzBarra[26],ax
		mObtenerAltura tamBarra[26]
		mov alturaBarra[26], ax
		mtolineal 170,202
		mov posBarra[26], ax
		;QUINCE
		mObtenerColor tamBarra[28] 	;color en ax
		mov colorBarra[28],ax
		mObtenerHz tamBarra[28] 		;hz en ax
		mov hzBarra[28],ax
		mObtenerAltura tamBarra[28]
		mov alturaBarra[28], ax
		mtolineal 170,216
		mov posBarra[28], ax
		;DIECISEIS
		mObtenerColor tamBarra[30] 	;color en ax
		mov colorBarra[30],ax
		mObtenerHz tamBarra[30] 		;hz en ax
		mov hzBarra[30],ax
		mObtenerAltura tamBarra[30]
		mov alturaBarra[30], ax
		mtolineal 170,230
		mov posBarra[30], ax
		;DIECISIETE
		mObtenerColor tamBarra[32] 	;color en ax
		mov colorBarra[32],ax
		mObtenerHz tamBarra[32] 		;hz en ax
		mov hzBarra[32],ax
		mObtenerAltura tamBarra[32]
		mov alturaBarra[32], ax
		mtolineal 170,244
		mov posBarra[32], ax
		;DIECIOCHO
		mObtenerColor tamBarra[34] 	;color en ax
		mov colorBarra[34],ax
		mObtenerHz tamBarra[34] 		;hz en ax
		mov hzBarra[34],ax
		mObtenerAltura tamBarra[34]
		mov alturaBarra[34], ax
		mtolineal 170,258
		mov posBarra[34], ax
		;DIECINUEVE
		mObtenerColor tamBarra[36] 	;color en ax
		mov colorBarra[36],ax
		mObtenerHz tamBarra[36] 		;hz en ax
		mov hzBarra[36],ax
		mObtenerAltura tamBarra[36]
		mov alturaBarra[36], ax
		mtolineal 170,272
		mov posBarra[36], ax
		;VEINTE
		mObtenerColor tamBarra[38] 	;color en ax
		mov colorBarra[38],ax
		mObtenerHz tamBarra[38] 		;hz en ax
		mov hzBarra[38],ax
		mObtenerAltura tamBarra[38]
		mov alturaBarra[38], ax
		mtolineal 170,286
		mov posBarra[38], ax
	FIN:
		ret

configurarBarras endp


graficarBarras proc
	cmp numBarras, 1d
	je BARRAS1
	cmp numBarras, 2d
	je BARRAS2
	cmp numBarras, 3d
	je BARRAS3
	cmp numBarras, 4d
	je BARRAS4
	cmp numBarras, 5d
	je BARRAS5
	cmp numBarras, 6d
	je BARRAS6
	cmp numBarras, 7d
	je BARRAS7
	cmp numBarras, 8d
	je BARRAS8
	cmp numBarras, 9d
	je BARRAS9
	cmp numBarras, 10d
	je BARRAS10
	cmp numBarras, 11d
	je BARRAS11
	cmp numBarras, 12d
	je BARRAS12
	cmp numBarras, 13d
	je BARRAS13
	cmp numBarras, 14d
	je BARRAS14
	cmp numBarras, 15d
	je BARRAS15
	cmp numBarras, 16d
	je BARRAS16
	cmp numBarras, 17d
	je BARRAS17
	cmp numBarras, 18d
	je BARRAS18
	cmp numBarras, 19d
	je BARRAS19
	cmp numBarras, 20d
	je BARRAS20
	jmp FIN
	BARRAS1:
		;PINTAR BARRA
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		jmp FIN
	BARRAS2:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2] 
		mReproducir hzBarra[2]		
		jmp FIN
	BARRAS3:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		jmp FIN
	BARRAS4:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		jmp FIN
	BARRAS5:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		jmp FIN
	BARRAS6:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		jmp FIN
	BARRAS7:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		jmp FIN
	BARRAS8:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		jmp FIN
	BARRAS9:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		mPintarBarra posBarra[16],anchuraBarra,alturaBarra[16],colorBarra[16]
		mReproducir hzBarra[16]
		jmp FIN
	BARRAS10:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		mPintarBarra posBarra[16],anchuraBarra,alturaBarra[16],colorBarra[16]
		mReproducir hzBarra[16]
		mPintarBarra posBarra[18],anchuraBarra,alturaBarra[18],colorBarra[18]
		mReproducir hzBarra[18]
		jmp FIN
	BARRAS11:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		mPintarBarra posBarra[16],anchuraBarra,alturaBarra[16],colorBarra[16]
		mReproducir hzBarra[16]
		mPintarBarra posBarra[18],anchuraBarra,alturaBarra[18],colorBarra[18]
		mReproducir hzBarra[18]
		mPintarBarra posBarra[20],anchuraBarra,alturaBarra[20],colorBarra[20]
		mReproducir hzBarra[20]
		jmp FIN
	BARRAS12:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		mPintarBarra posBarra[16],anchuraBarra,alturaBarra[16],colorBarra[16]
		mReproducir hzBarra[16]
		mPintarBarra posBarra[18],anchuraBarra,alturaBarra[18],colorBarra[18]
		mReproducir hzBarra[18]
		mPintarBarra posBarra[20],anchuraBarra,alturaBarra[20],colorBarra[20]
		mReproducir hzBarra[20]
		mPintarBarra posBarra[22],anchuraBarra,alturaBarra[22],colorBarra[22]
		mReproducir hzBarra[22]
		jmp FIN
	BARRAS13:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		mPintarBarra posBarra[16],anchuraBarra,alturaBarra[16],colorBarra[16]
		mReproducir hzBarra[16]
		mPintarBarra posBarra[18],anchuraBarra,alturaBarra[18],colorBarra[18]
		mReproducir hzBarra[18]
		mPintarBarra posBarra[20],anchuraBarra,alturaBarra[20],colorBarra[20]
		mReproducir hzBarra[20]
		mPintarBarra posBarra[22],anchuraBarra,alturaBarra[22],colorBarra[22]
		mReproducir hzBarra[22]
		mPintarBarra posBarra[24],anchuraBarra,alturaBarra[24],colorBarra[24]
		mReproducir hzBarra[24]
		jmp FIN
	BARRAS14:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		mPintarBarra posBarra[16],anchuraBarra,alturaBarra[16],colorBarra[16]
		mReproducir hzBarra[16]
		mPintarBarra posBarra[18],anchuraBarra,alturaBarra[18],colorBarra[18]
		mReproducir hzBarra[18]
		mPintarBarra posBarra[20],anchuraBarra,alturaBarra[20],colorBarra[20]
		mReproducir hzBarra[20]
		mPintarBarra posBarra[22],anchuraBarra,alturaBarra[22],colorBarra[22]
		mReproducir hzBarra[22]
		mPintarBarra posBarra[24],anchuraBarra,alturaBarra[24],colorBarra[24]
		mReproducir hzBarra[24]
		mPintarBarra posBarra[26],anchuraBarra,alturaBarra[26],colorBarra[26]
		mReproducir hzBarra[26]
		jmp FIN
	BARRAS15:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		mPintarBarra posBarra[16],anchuraBarra,alturaBarra[16],colorBarra[16]
		mReproducir hzBarra[16]
		mPintarBarra posBarra[18],anchuraBarra,alturaBarra[18],colorBarra[18]
		mReproducir hzBarra[18]
		mPintarBarra posBarra[20],anchuraBarra,alturaBarra[20],colorBarra[20]
		mReproducir hzBarra[20]
		mPintarBarra posBarra[22],anchuraBarra,alturaBarra[22],colorBarra[22]
		mReproducir hzBarra[22]
		mPintarBarra posBarra[24],anchuraBarra,alturaBarra[24],colorBarra[24]
		mReproducir hzBarra[24]
		mPintarBarra posBarra[26],anchuraBarra,alturaBarra[26],colorBarra[26]
		mReproducir hzBarra[26]
		mPintarBarra posBarra[28],anchuraBarra,alturaBarra[28],colorBarra[28]
		mReproducir hzBarra[28]
		jmp FIN
	BARRAS16:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		mPintarBarra posBarra[16],anchuraBarra,alturaBarra[16],colorBarra[16]
		mReproducir hzBarra[16]
		mPintarBarra posBarra[18],anchuraBarra,alturaBarra[18],colorBarra[18]
		mReproducir hzBarra[18]
		mPintarBarra posBarra[20],anchuraBarra,alturaBarra[20],colorBarra[20]
		mReproducir hzBarra[20]
		mPintarBarra posBarra[22],anchuraBarra,alturaBarra[22],colorBarra[22]
		mReproducir hzBarra[22]
		mPintarBarra posBarra[24],anchuraBarra,alturaBarra[24],colorBarra[24]
		mReproducir hzBarra[24]
		mPintarBarra posBarra[26],anchuraBarra,alturaBarra[26],colorBarra[26]
		mReproducir hzBarra[26]
		mPintarBarra posBarra[28],anchuraBarra,alturaBarra[28],colorBarra[28]
		mReproducir hzBarra[28]
		mPintarBarra posBarra[30],anchuraBarra,alturaBarra[30],colorBarra[30]
		mReproducir hzBarra[30]
		jmp FIN
	BARRAS17:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		mPintarBarra posBarra[16],anchuraBarra,alturaBarra[16],colorBarra[16]
		mReproducir hzBarra[16]
		mPintarBarra posBarra[18],anchuraBarra,alturaBarra[18],colorBarra[18]
		mReproducir hzBarra[18]
		mPintarBarra posBarra[20],anchuraBarra,alturaBarra[20],colorBarra[20]
		mReproducir hzBarra[20]
		mPintarBarra posBarra[22],anchuraBarra,alturaBarra[22],colorBarra[22]
		mReproducir hzBarra[22]
		mPintarBarra posBarra[24],anchuraBarra,alturaBarra[24],colorBarra[24]
		mReproducir hzBarra[24]
		mPintarBarra posBarra[26],anchuraBarra,alturaBarra[26],colorBarra[26]
		mReproducir hzBarra[26]
		mPintarBarra posBarra[28],anchuraBarra,alturaBarra[28],colorBarra[28]
		mReproducir hzBarra[28]
		mPintarBarra posBarra[30],anchuraBarra,alturaBarra[30],colorBarra[30]
		mReproducir hzBarra[30]
		mPintarBarra posBarra[32],anchuraBarra,alturaBarra[32],colorBarra[32]
		mReproducir hzBarra[32]
		jmp FIN
	BARRAS18:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		mPintarBarra posBarra[16],anchuraBarra,alturaBarra[16],colorBarra[16]
		mReproducir hzBarra[16]
		mPintarBarra posBarra[18],anchuraBarra,alturaBarra[18],colorBarra[18]
		mReproducir hzBarra[18]
		mPintarBarra posBarra[20],anchuraBarra,alturaBarra[20],colorBarra[20]
		mReproducir hzBarra[20]
		mPintarBarra posBarra[22],anchuraBarra,alturaBarra[22],colorBarra[22]
		mReproducir hzBarra[22]
		mPintarBarra posBarra[24],anchuraBarra,alturaBarra[24],colorBarra[24]
		mReproducir hzBarra[24]
		mPintarBarra posBarra[26],anchuraBarra,alturaBarra[26],colorBarra[26]
		mReproducir hzBarra[26]
		mPintarBarra posBarra[28],anchuraBarra,alturaBarra[28],colorBarra[28]
		mReproducir hzBarra[28]
		mPintarBarra posBarra[30],anchuraBarra,alturaBarra[30],colorBarra[30]
		mReproducir hzBarra[30]
		mPintarBarra posBarra[32],anchuraBarra,alturaBarra[32],colorBarra[32]
		mReproducir hzBarra[32]
		mPintarBarra posBarra[34],anchuraBarra,alturaBarra[34],colorBarra[34]
		mReproducir hzBarra[34]
		jmp FIN
	BARRAS19:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		mPintarBarra posBarra[16],anchuraBarra,alturaBarra[16],colorBarra[16]
		mReproducir hzBarra[16]
		mPintarBarra posBarra[18],anchuraBarra,alturaBarra[18],colorBarra[18]
		mReproducir hzBarra[18]
		mPintarBarra posBarra[20],anchuraBarra,alturaBarra[20],colorBarra[20]
		mReproducir hzBarra[20]
		mPintarBarra posBarra[22],anchuraBarra,alturaBarra[22],colorBarra[22]
		mReproducir hzBarra[22]
		mPintarBarra posBarra[24],anchuraBarra,alturaBarra[24],colorBarra[24]
		mReproducir hzBarra[24]
		mPintarBarra posBarra[26],anchuraBarra,alturaBarra[26],colorBarra[26]
		mReproducir hzBarra[26]
		mPintarBarra posBarra[28],anchuraBarra,alturaBarra[28],colorBarra[28]
		mReproducir hzBarra[28]
		mPintarBarra posBarra[30],anchuraBarra,alturaBarra[30],colorBarra[30]
		mReproducir hzBarra[30]
		mPintarBarra posBarra[32],anchuraBarra,alturaBarra[32],colorBarra[32]
		mReproducir hzBarra[32]
		mPintarBarra posBarra[34],anchuraBarra,alturaBarra[34],colorBarra[34]
		mReproducir hzBarra[34]
		mPintarBarra posBarra[36],anchuraBarra,alturaBarra[36],colorBarra[36]
		mReproducir hzBarra[36]
		jmp FIN
	BARRAS20:
		mPintarBarra posBarra[0],anchuraBarra,alturaBarra[0],colorBarra[0] 	;posicion, ancho, altura, color
		mReproducir hzBarra[0]
		mPintarBarra posBarra[2],anchuraBarra,alturaBarra[2],colorBarra[2]
		mReproducir hzBarra[2]
		mPintarBarra posBarra[4],anchuraBarra,alturaBarra[4],colorBarra[4]
		mReproducir hzBarra[4]
		mPintarBarra posBarra[6],anchuraBarra,alturaBarra[6],colorBarra[6]
		mReproducir hzBarra[6]
		mPintarBarra posBarra[8],anchuraBarra,alturaBarra[8],colorBarra[8]
		mReproducir hzBarra[8]
		mPintarBarra posBarra[10],anchuraBarra,alturaBarra[10],colorBarra[10]
		mReproducir hzBarra[10]
		mPintarBarra posBarra[12],anchuraBarra,alturaBarra[12],colorBarra[12]
		mReproducir hzBarra[12]
		mPintarBarra posBarra[14],anchuraBarra,alturaBarra[14],colorBarra[14]
		mReproducir hzBarra[14]
		mPintarBarra posBarra[16],anchuraBarra,alturaBarra[16],colorBarra[16]
		mReproducir hzBarra[16]
		mPintarBarra posBarra[18],anchuraBarra,alturaBarra[18],colorBarra[18]
		mReproducir hzBarra[18]
		mPintarBarra posBarra[20],anchuraBarra,alturaBarra[20],colorBarra[20]
		mReproducir hzBarra[20]
		mPintarBarra posBarra[22],anchuraBarra,alturaBarra[22],colorBarra[22]
		mReproducir hzBarra[22]
		mPintarBarra posBarra[24],anchuraBarra,alturaBarra[24],colorBarra[24]
		mReproducir hzBarra[24]
		mPintarBarra posBarra[26],anchuraBarra,alturaBarra[26],colorBarra[26]
		mReproducir hzBarra[26]
		mPintarBarra posBarra[28],anchuraBarra,alturaBarra[28],colorBarra[28]
		mReproducir hzBarra[28]
		mPintarBarra posBarra[30],anchuraBarra,alturaBarra[30],colorBarra[30]
		mReproducir hzBarra[30]
		mPintarBarra posBarra[32],anchuraBarra,alturaBarra[32],colorBarra[32]
		mReproducir hzBarra[32]
		mPintarBarra posBarra[34],anchuraBarra,alturaBarra[34],colorBarra[34]
		mReproducir hzBarra[34]
		mPintarBarra posBarra[36],anchuraBarra,alturaBarra[36],colorBarra[36]
		mReproducir hzBarra[36]
		mPintarBarra posBarra[38],anchuraBarra,alturaBarra[38],colorBarra[38]
		mReproducir hzBarra[38]
	FIN:
		ret

graficarBarras endp


obtenerAltura proc
	;------------------------------------------------------------------------
        ;   Recibe:      ax = numero de la barra
        ;                                                 
        ;   Devuelve:    ax = altura de la barra	                               
        ;                                                                    
        ;   Comentarios: Calcula la altura de la barra.				                 
        ;-------------------------------------------------------------------------
    mov dx,0d
    mul alturaMaxima
    div valorMaximo
    ret

obtenerAltura endp


obtenerColor proc
	;------------------------------------------------------------------------
        ;   Recibe:      ax = numero de la barra
        ;                                                 
        ;   Devuelve:    ax = color de la barra	                               
        ;                                                                    
        ;   Comentarios: Calcula el color de la barra.				                 
        ;--------------------------------------------------------------------
    cmp ax, 0d
    je FIN
    cmp ax, 20
    jbe CROJO
    cmp ax, 40
    jbe CAZUL
    cmp ax, 60
    jbe CAMARILLO
    cmp ax, 80
    jbe CVERDE
    jmp CBLANCO
    CROJO:
    	mov ax, 4d
    	jmp FIN
    CAZUL:
    	mov ax, 1d
    	jmp FIN
    CAMARILLO:
    	mov ax, 14d
    	jmp FIN
    CVERDE:
    	mov ax, 2d
    	jmp FIN
    CBLANCO:
    	mov ax, 15d
    FIN:
    	ret

obtenerColor endp


obtenerHz proc
	;------------------------------------------------------------------------
        ;   Recibe:      ax = numero de la barra
        ;                                                 
        ;   Devuelve:    ax = color de la barra	                               
        ;                                                                    
        ;   Comentarios: Calcula el color de la barra.				                 
        ;--------------------------------------------------------------------
    cmp ax, 0d
    je FIN
    cmp ax, 20
    jbe CIEN
    cmp ax, 40
    jbe TRECIENTOS
    cmp ax, 60
    jbe QUINIENTOS
    cmp ax, 80
    jbe SETECIENTOS
    jmp NOVECIENTOS
    CIEN:
    	mov ax, 100d
    	jmp FIN
    TRECIENTOS:
    	mov ax, 300d
    	jmp FIN
    QUINIENTOS:
    	mov ax, 500d
    	jmp FIN
    SETECIENTOS:
    	mov ax, 700d
    	jmp FIN
    NOVECIENTOS:
    	mov ax, 900d
    FIN:
    	ret

obtenerHz endp


reproducir proc
	;------------------------------------------------------------------------
        ;   Recibe:      ax = herz 
        ;                                                 
        ;   Devuelve:    nada                               
        ;                                                                    
        ;   Comentarios: Reproduce un sonido con los herz respectivos.				                 
        ;--------------------------------------------------------------------
   	cmp ax, 100d
   	je CIEN
   	cmp ax, 300d
   	je TRECIENTOS
   	cmp ax, 500d
   	je QUINIENTOS
   	cmp ax, 700d
   	je SETECIENTOS
   	cmp ax, 900d
   	je NOVECIENTOS
   	jmp FIN
   	CIEN:
   		Sound 100d
   		jmp FIN
   	TRECIENTOS:
   		Sound 300d
   		jmp FIN
   	QUINIENTOS:
   		Sound 500d
   		jmp FIN
   	SETECIENTOS:
   		Sound 700d
   		jmp FIN
   	NOVECIENTOS:
   		Sound 900d
   	FIN:
   		ret

reproducir endp



;============================= GAME BARRAS - GESTION ORDENAMIENTOS ==================================

GameBarras proc
	;INICIALIZACION
	;Iniciar Video
	ModoVideo
	;PINTAR ENCABEZADO
	call pintarEncabezadoBarras
	;PINTAR CONTORNO
	PintarContorno Blanco
	;PINTAR NUMEROS DE LAS BARRAS
	mPintarNumerosBarras
	;PINTAR GRAFICA DE BARRAS
	mGraficarBarras
	ESPERAORDEN:
		call listening 	;se matiene a la escucha del teclado hasta presionar la barra espaciadora
		cmp al,20h		;barra espaciadora
    	je EJECUTARORDEN  	 		
    jmp ESPERAORDEN
    EJECUTARORDEN:
    	mGestionOrdenamiento
    ESPERAFINAL:
    	call listening 
    	cmp al, 20h 	;barra espaciadora
    	je FIN
    jmp ESPERAFINAL
    FIN:
		ret

GameBarras endp


GestionOrdenamiento proc 
	;AJUSTAR VELOCIDAD
	call ajustarVelocidad

	;INICIALIZAR EL TIEMPO
	call ObtenerTiempoInicialB

	;SELECCIONAR EL ORDENAMIENTO
	cmp tipoOrden, 1d
	je BSORT
	cmp tipoOrden, 2d
	je QSORT
	cmp tipoOrden, 3d
	je SSORT
	BSORT:
		cmp formaOrden, 1d
		je BDESC
		BASC:
			call BubbleAsc
			jmp FIN
		BDESC:
			call BubbleDesc
			jmp FIN
	QSORT:
		cmp formaOrden, 1d
		je QDESC
		QASC:
			mov bx, numBarras
			dec bx
			mQuickSortAsc 0, bx
			jmp FIN
		QDESC:
			mov bx, numBarras
			dec bx
			mQuickSortDesc 0, bx
			jmp FIN
	SSORT:
		cmp formaOrden, 1d
		je SDESC
		SASC:
			call ShellSortAsc
			jmp FIN
		SDESC:
			call ShellSortDesc
	FIN:
		ret

GestionOrdenamiento endp


ajustarVelocidad proc
	cmp velocidad[0],'0'
	je VEL0
	cmp velocidad[0],'1'
	je VEL1
	cmp velocidad[0],'2'
	je VEL2
	cmp velocidad[0],'3'
	je VEL3
	cmp velocidad[0],'4'
	je VEL4
	cmp velocidad[0],'5'
	je VEL5
	cmp velocidad[0],'6'
	je VEL6
	cmp velocidad[0],'7'
	je VEL7
	cmp velocidad[0],'8'
	je VEL8
	cmp velocidad[0],'9'
	je VEL9
	VEL0:
		mov tiemposonido, 1000d
		jmp FIN
	VEL1:
		mov tiemposonido, 900d
		jmp FIN
	VEL2:
		mov tiemposonido, 800d
		jmp FIN
	VEL3:
		mov tiemposonido, 700d
		jmp FIN
	VEL4:
		mov tiemposonido, 600d
		jmp FIN
	VEL5:
		mov tiemposonido, 500d
		jmp FIN
	VEL6:
		mov tiemposonido, 400d
		jmp FIN
	VEL7:
		mov tiemposonido, 300d
		jmp FIN
	VEL8:
		mov tiemposonido, 200d
		jmp FIN
	VEL9:
		mov tiemposonido, 100d
	FIN:
		ret

ajustarVelocidad endp


;==================================== ORDENAMIENTOS ====================================
;BUBBLESORT
BubbleAsc proc
	;--------------------------------------------------------------------------------
        ;   Recibe:      si = para recorrer en i  
		;				 di = para recorrer en j                                     
        ;                ax = auxiliar                                                    
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Ordena Bubble Ascendentemente las barras y graica nuevamente.				                 
        ;-----------------------------------------------------------------------------
	cmp limiteBarra,0d 	;solo hay una barra
	je FIN
	xor si,si
	mov di,si
	inc di
	inc di
	CONDICION:
		mov ax, tamBarra[si]
		cmp ax, tamBarra[di]
		jbe SIGJ
		mov auxsi,si
		mov auxdi,di
		ModoVideo
		call pintarEncabezadoBarras
		PintarContorno Blanco
		mov si,auxsi
		mov di,auxdi
		;AUX = VALOR1
		mov ax, tamBarra[si]
		mov tamBarraAux, ax
		;VALOR1 = VALOR2
		mov ax, tamBarra[di]
		mov tamBarra[si],ax
		;VALOR2 = AUX
		mov ax, tamBarraAux
		mov tamBarra[di],ax
		;ACTUALIZAR GRAFICA
		mov auxsi,si
		mov auxdi,di
		call ActualizarTiempoJuegoB
		mConfigurarBarras
		mPintarNumerosBarras
		mGraficarBarras
		mov si, auxsi
		mov di, auxdi
		SIGJ:
			cmp di, limiteBarra
			je SIGI
			inc di
			inc di
			jmp CONDICION
		SIGI:
			mov ax, limiteBarra
			sub ax,2d
			cmp si,ax
			je FIN
			inc si
			inc si
			mov di, si
			inc di
			inc di
			jmp CONDICION
	FIN:
		ret

BubbleAsc endp


BubbleDesc proc
	;--------------------------------------------------------------------------------
        ;   Recibe:      si = para recorrer en i  
		;				 di = para recorrer en j                                     
        ;                ax = auxiliar                                                    
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Ordena Bubble Ascendentemente las barras y graica nuevamente.				                 
        ;-----------------------------------------------------------------------------
	cmp limiteBarra,0d 	;solo hay una barra
	je FIN
	xor si,si
	mov di,si
	inc di
	inc di
	CONDICION:
		mov ax, tamBarra[si]
		cmp ax, tamBarra[di]
		jae SIGJ
		mov auxsi,si
		mov auxdi,di
		ModoVideo
		call pintarEncabezadoBarras
		PintarContorno Blanco
		mov si,auxsi
		mov di,auxdi
		;AUX = VALOR1
		mov ax, tamBarra[si]
		mov tamBarraAux, ax
		;VALOR1 = VALOR2
		mov ax, tamBarra[di]
		mov tamBarra[si],ax
		;VALOR2 = AUX
		mov ax, tamBarraAux
		mov tamBarra[di],ax
		;ACTUALIZAR GRAFICA
		mov auxsi,si
		mov auxdi,di
		call ActualizarTiempoJuegoB
		mConfigurarBarras
		mPintarNumerosBarras
		mGraficarBarras
		mov si, auxsi
		mov di, auxdi
		SIGJ:
			cmp di, limiteBarra
			je SIGI
			inc di
			inc di
			jmp CONDICION
		SIGI:
			mov ax, limiteBarra
			sub ax,2d
			cmp si,ax
			je FIN
			inc si
			inc si
			mov di, si
			inc di
			inc di
			jmp CONDICION
	FIN:
		ret

BubbleDesc endp


;QUICKSORT
QuickSortAsc proc
	;--------------------------------------------------------------------------------
        ;   Recibe:      primero = prim  
		;				 ultimo = ultim
		;				 si = auxiliar
		;				 di = auxiliar                                   
        ;                ax = auxiliar
        ;				 bx = auxiliar                                             
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Ordena Quick Ascendentemente las barras y grafica nuevamente.				                 
        ;-----------------------------------------------------------------------------
    mov ax, primero
    mov iquick, ax 						;i = primero
    mov ax, ultimo
    mov jquick, ax 						;j = ultimo
    mov ax, primero
    add ax, ultimo
    mov bl, 2d
    div bl 								;al = (primero + ultimo) / 2
    mov ah,0d
    mov bx,2d
    mul bx 								;ax = "(primero + ultimo) / 2" ajustado al arreglo
    mov si,ax
    mov ax, tamBarra[si]
    mov pivote, ax 						;pivote = arreglo[(primero+ultimo)/2]; 
    DO: 								;do{
    	WHILE1:
    		mov ax, iquick
    		mov bx, 2d
    		mul bx
    		mov si,ax
    		mov ax, pivote
    		cmp tamBarra[si],ax 	
    		jge WHILE2 					;while(arreglo[i]<pivote){
    		inc iquick 					;i++
    	jmp WHILE1 						;}
    	WHILE2:
    		mov ax,jquick
    		mul bx
    		mov di,ax
    		mov ax, pivote
    		cmp tamBarra[di],ax 	
    		jle ETIF					;while(arreglo[j]>pivote){
    		dec jquick 					;j--
    	jmp WHILE2 						;}
    	ETIF:
    		mov ax, jquick
    		cmp iquick,ax
    		jg WHILEG 					;if(i<=j){
    		mov ax,tamBarra[si]
    		mov tamBarraAux,ax 	 		;auxiliar = arreglo[i]
    		mov ax, tamBarra[di] 		
    		mov tamBarra[si],ax 		;arreglo[i] = arreglo[j]
    		mov ax, tamBarraAux
    		mov tamBarra[di],ax 		;arreglo[j] = auxiliar
    		;ACTUALIZAR GRAFICA
   			ModoVideo
			call pintarEncabezadoBarras
			PintarContorno Blanco
			call ActualizarTiempoJuegoB
			mConfigurarBarras
			mPintarNumerosBarras
			mGraficarBarras
    		inc iquick 					;i++
    		dec jquick 					;j-- }
    	WHILEG:	
    		mov ax, jquick
    		cmp iquick,ax
    jle DO 						 		;} while(i<=j) 
    ETIF1:
    	mov ax, jquick
    	cmp primero,ax
    	jge ETIF2 						;if(primero<j){
    	mQuickSortAsc primero, jquick 	;quick(arreglo, primero, j) }
    ETIF2:
    	mov ax, ultimo
    	cmp iquick,ax 				
    	jge FIN 						;if(i<ultimo){
    	mQuickSortAsc iquick, ultimo 	;quick(arreglo, i, ultimo) }
    FIN:
    	ret

QuickSortAsc endp


QuickSortDesc proc
	;--------------------------------------------------------------------------------
        ;   Recibe:      primero = prim  
		;				 ultimo = ultim
		;				 si = auxiliar
		;				 di = auxiliar                                   
        ;                ax = auxiliar
        ;				 bx = auxiliar                                             
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Ordena Quick Ascendentemente las barras y grafica nuevamente.				                 
        ;-----------------------------------------------------------------------------
    mov ax, primero
    mov iquick, ax 						;i = primero
    mov ax, ultimo
    mov jquick, ax 						;j = ultimo
    mov ax, primero
    add ax, ultimo
    mov bl, 2d
    div bl 								;al = (primero + ultimo) / 2
    mov ah,0d
    mov bx,2d
    mul bx 								;ax = "(primero + ultimo) / 2" ajustado al arreglo
    mov si,ax
    mov ax, tamBarra[si]
    mov pivote, ax 						;pivote = arreglo[(primero+ultimo)/2]; 
    DO: 								;do{
    	WHILE1:
    		mov ax, iquick
    		mov bx, 2d
    		mul bx
    		mov si,ax
    		mov ax, pivote
    		cmp tamBarra[si],ax 	
    		jle WHILE2 					;while(arreglo[i]>pivote){
    		inc iquick 					;i++
    	jmp WHILE1 						;}
    	WHILE2:
    		mov ax,jquick
    		mul bx
    		mov di,ax
    		mov ax, pivote
    		cmp tamBarra[di],ax 	
    		jge ETIF					;while(arreglo[j]<pivote){
    		dec jquick 					;j--
    	jmp WHILE2 						;}
    	ETIF:
    		mov ax, jquick
    		cmp iquick,ax
    		jg WHILEG 					;if(i<=j){
    		mov ax,tamBarra[si]
    		mov tamBarraAux,ax 	 		;auxiliar = arreglo[i]
    		mov ax, tamBarra[di] 		
    		mov tamBarra[si],ax 		;arreglo[i] = arreglo[j]
    		mov ax, tamBarraAux
    		mov tamBarra[di],ax 		;arreglo[j] = auxiliar
    		;ACTUALIZAR GRAFICA
   			ModoVideo
			call pintarEncabezadoBarras
			PintarContorno Blanco
			call ActualizarTiempoJuegoB
			mConfigurarBarras
			mPintarNumerosBarras
			mGraficarBarras
    		inc iquick 					;i++
    		dec jquick 					;j-- }
    	WHILEG:	
    		mov ax, jquick
    		cmp iquick,ax
    jle DO 						 		;} while(i<=j) 
    ETIF1:
    	mov ax, jquick
    	cmp primero,ax
    	jge ETIF2 						;if(primero<j){
    	mQuickSortDesc primero, jquick 	;quick(arreglo, primero, j) }
    ETIF2:
    	mov ax, ultimo
    	cmp iquick,ax 				
    	jge FIN 						;if(i<ultimo){
    	mQuickSortDesc iquick, ultimo 	;quick(arreglo, i, ultimo) }
    FIN:
    	ret

QuickSortDesc endp



;SHELLSORT
ShellSortAsc proc
	;--------------------------------------------------------------------------------
        ;   Recibe:      si = k  
		;				 di = j                                     
        ;                ax = auxiliar para calculos
        ;				 bx = auxiliar para calculos                                                  
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Ordena Shell Ascendentemente las barras y grafica nuevamente.				                 
        ;-----------------------------------------------------------------------------
   	mov ax, numBarras
   	mov bl, 2d
   	div bl 										;divido dentro de 2, al = cociente, ah = residuo
   	mov ah, 0d
   	mov saltoshell,ax 							;salto = arreglo.length/2
   	WHILEG:										;while(salto>0){
   		cmp saltoshell, 0d
   		jle FIN
   		mov ax, saltoshell
   		mov iforshell,ax
   		CICLOFOR:								;for(i=salto;i<arreglo.length;i++){
   			mov ax, numBarras
   			cmp iforshell, ax 
   			jge ACTSALTO 
   			mov ax, iforshell
   			sub ax, saltoshell 					
   			mov jshell, ax 						;j = i - salto
   			WHILE1: 							;while(j>=0){
   				cmp jshell, 0d
   				jl INCREFOR
   				mov ax, jshell
   				add ax, saltoshell			
   				mov kshell, ax					;k = j + salto
   				ETIF: 							;if(arreglo[j] <= arreglo[k]){
   				mov ax, kshell
   				mov bx, 2d
   				mul bx 							;ajusto k en terminos del arreglo
   				mov si, ax 						;si = k ajustado
   				mov ax, jshell
   				mul bx 							;ajusto j en terminos del arreglo
   				mov di, ax 						;di = j ajustado
   				mov ax, tamBarra[si]
   				cmp tamBarra[di], ax 			
   				jg ETELSE 						
   				mov ax, 1d
   				neg ax 
   				mov jshell, ax 					;j = -1
   				jmp WHILE1
   				ETELSE: 						;} else { 
   					mov ax, tamBarra[di]
   					mov tamBarraAux, ax 		;auxiliar = arreglo[j]
   					mov ax, tamBarra[si]
   					mov tamBarra[di], ax 		;arreglo[j] = arreglo[k]
   					mov ax, tamBarraAux
   					mov tamBarra[si],ax 		;arreglo[k] = auxiliar
   					mov ax, jshell
   					sub ax,saltoshell 			
   					mov jshell,ax 				;j = j-salto }
   					;ACTUALIZAR GRAFICA
   					ModoVideo
					call pintarEncabezadoBarras
					PintarContorno Blanco
					call ActualizarTiempoJuegoB
					mConfigurarBarras
					mPintarNumerosBarras
					mGraficarBarras
   			jmp WHILE1 							;}
   			INCREFOR:
   				inc iforshell
   		jmp CICLOFOR 							;}
   		ACTSALTO:
   			mov ax, saltoshell
   			mov bl, 2d
   			div bl
   			mov ah,0d
   			mov saltoshell, ax  				;salto = salto/2
   	jmp WHILEG									;}
   	FIN:
   		ret

ShellSortAsc endp


ShellSortDesc proc
	;--------------------------------------------------------------------------------
        ;   Recibe:      si = k  
		;				 di = j                                     
        ;                ax = auxiliar para calculos
        ;				 bx = auxiliar para calculos                                                  
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Ordena Shell Ascendentemente las barras y grafica nuevamente.				                 
        ;-----------------------------------------------------------------------------
   	mov ax, numBarras
   	mov bl, 2d
   	div bl 										;divido dentro de 2, al = cociente, ah = residuo
   	mov ah, 0d
   	mov saltoshell,ax 							;salto = arreglo.length/2
   	WHILEG:										;while(salto>0){
   		cmp saltoshell, 0d
   		jle FIN
   		mov ax, saltoshell
   		mov iforshell,ax
   		CICLOFOR:								;for(i=salto;i<arreglo.length;i++){
   			mov ax, numBarras
   			cmp iforshell, ax 
   			jge ACTSALTO 
   			mov ax, iforshell
   			sub ax, saltoshell 					
   			mov jshell, ax 						;j = i - salto
   			WHILE1: 							;while(j>=0){
   				cmp jshell, 0d
   				jl INCREFOR
   				mov ax, jshell
   				add ax, saltoshell			
   				mov kshell, ax					;k = j + salto
   				ETIF: 							;if(arreglo[j] >= arreglo[k]){
   				mov ax, kshell
   				mov bx, 2d
   				mul bx 							;ajusto k en terminos del arreglo
   				mov si, ax 						;si = k ajustado
   				mov ax, jshell
   				mul bx 							;ajusto j en terminos del arreglo
   				mov di, ax 						;di = j ajustado
   				mov ax, tamBarra[si]
   				cmp tamBarra[di], ax 			
   				jl ETELSE 						
   				mov ax, 1d
   				neg ax 
   				mov jshell, ax 					;j = -1
   				jmp WHILE1
   				ETELSE: 						;} else { 
   					mov ax, tamBarra[di]
   					mov tamBarraAux, ax 		;auxiliar = arreglo[j]
   					mov ax, tamBarra[si]
   					mov tamBarra[di], ax 		;arreglo[j] = arreglo[k]
   					mov ax, tamBarraAux
   					mov tamBarra[si],ax 		;arreglo[k] = auxiliar
   					mov ax, jshell
   					sub ax,saltoshell 			
   					mov jshell,ax 				;j = j-salto }
   					;ACTUALIZAR GRAFICA
   					ModoVideo
					call pintarEncabezadoBarras
					PintarContorno Blanco
					call ActualizarTiempoJuegoB
					mConfigurarBarras
					mPintarNumerosBarras
					mGraficarBarras
   			jmp WHILE1 							;}
   			INCREFOR:
   				inc iforshell
   		jmp CICLOFOR 							;}
   		ACTSALTO:
   			mov ax, saltoshell
   			mov bl, 2d
   			div bl
   			mov ah,0d
   			mov saltoshell, ax  				;salto = salto/2
   	jmp WHILEG									;}
   	FIN:
   		ret

ShellSortDesc endp


;============================== PARA EL TIEMPO DEL ORDENAMIENTO =============================

ActualizarTiempoJuegoB proc
	call ObtenerTiempoActualB
    ;TENGO AMBOS SEGUNDOS EN MEMORIA ASI QUE PREGUNTO:
    mov bl, segundoInicialB
    cmp segundoActualB, bl   
    jge VERESTADO   
    jl ACTUALMENOR
    VERESTADO:
        cmp estadoSegundoB, 0d
        je ACTUALMAYOR
    MINUTO: 	;estadoSegundo = 1d quiere decir que paso de menor a mayor osea que ya paso un minuto
        inc contadorMinutosB
        mov ax, contadorMinutosB
        ConvertirStringTiempo minutoBarra
        mov estadoSegundoB, 0d
    ACTUALMAYOR:
        mov al, segundoActualB
        sub al, segundoInicialB
        mov ah, 00d  ;para tener en ax el numero de segundos, siempre pasar numero positivos
        ConvertirStringTiempo segundoBarra    ;numero en ax
        jmp IMPRESION
    ACTUALMENOR:
        mov estadoSegundoB, 1d
        mov bl, segundoInicialB
        sub bl, segundoActualB
        mov al, 60d ;60-bl = resultado en seg
        sub al, bl  ;resultado en AL
        mov ah, 00d
        ConvertirStringTiempo segundoBarra    ;numero en ax
    IMPRESION:
        ;IMPRIMIR EL TIEMPO DEL JUEGO ACTUALIZADO
        mSetCursor 0,21
        String_size minutoBarra ;tamaño de la cadena en ax
        cmp ax, 1d
        je DIGITO1
        jne DIGITO2
        DIGITO1:
            printVideo cero
            printVideo minutoBarra
            jmp CONTINUAR
        DIGITO2:
            printVideo minutoBarra
        CONTINUAR:
        	mSetCursor 0,24
            String_size segundoBarra   ;tamaño de la cadena en ax
            cmp ax, 1d
            je DIGITO1S
            jne DIGITO2S
            DIGITO1S:
                printVideo cero
                printVideo segundoBarra
                jmp FIN
            DIGITO2S:
                printVideo segundoBarra
    FIN:
        ret

ActualizarTiempoJuegoB endp


ObtenerTiempoInicialB proc
	ObtenerHora     ;hora=ch, minutos=cl, segundos = dh, milisegundos = dl
    mov segundoInicialB, dh
    ret

ObtenerTiempoInicialB endp 


ObtenerTiempoActualB proc
	ObtenerHora 	;hora=ch, minutos=cl, segundos = dh, milisegundos = dl
    mov segundoActualB, dh
    ret

ObtenerTiempoActualB endp


;============================== PARA PINTAR PARTES DE LA GRAFICA ============================
pintarBarra proc 
	;------------------------------------------------------------------------
        ;   Recibe:       di = posicion   
		;				  dl = color   
        ;                 bx = ancho 
        ;                 ax = altura                                 
        ;                 cx = auxiliar para la posicion de las columnas
        ;				  si = auxiliar para la posicion de la fila                                                  
        ;   Devuelve:    nada	                               
        ;                                                                    
        ;   Comentarios: Pinta una barra en la grafica.				                 
        ;--------------------------------------------------------------------
    SIGFILA:
    	mov si, di
    	mov cx, bx 	;cx = ancho
    	PINTAR:
    		mov es:[si], dl
    		inc si
    	Loop PINTAR
    	sub di,320 	;di  = una linea arriba
    	dec ax
    	cmp ax, 0d
    	jle FIN
    	jmp SIGFILA
    FIN:
    	ret

pintarBarra endp


pintarNumerosBarras proc
	cmp numBarras, 1d
	je BARRAS1
	cmp numBarras, 2d
	je BARRAS2
	cmp numBarras, 3d
	je BARRAS3
	cmp numBarras, 4d
	je BARRAS4
	cmp numBarras, 5d
	je BARRAS5
	cmp numBarras, 6d
	je BARRAS6
	cmp numBarras, 7d
	je BARRAS7
	cmp numBarras, 8d
	je BARRAS8
	cmp numBarras, 9d
	je BARRAS9
	cmp numBarras, 10d
	je BARRAS10
	cmp numBarras, 11d
	je BARRAS11
	cmp numBarras, 12d
	je BARRAS12
	cmp numBarras, 13d
	je BARRAS13
	cmp numBarras, 14d
	je BARRAS14
	cmp numBarras, 15d
	je BARRAS15
	cmp numBarras, 16d
	je BARRAS16
	cmp numBarras, 17d
	je BARRAS17
	cmp numBarras, 18d
	je BARRAS18
	cmp numBarras, 19d
	je BARRAS19
	cmp numBarras, 20d
	je BARRAS20
	jmp FIN
	BARRAS1:
		mSetCursor 22,19
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS2:
		;UNO
		mSetCursor 22,10
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,28
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS3:
		;UNO
		mSetCursor 22,7
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,19
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,30
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS4:
		;UNO
		mSetCursor 22,5
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,15
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,23
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,32
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS5:
		;UNO
		mSetCursor 22,5
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,12
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,19
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,26
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,34
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS6:
		;UNO
		mSetCursor 22,4
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,10
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,16
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,21
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,27
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,33
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS7:
		;UNO
		mSetCursor 22,4
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,9
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,14
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,19
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,24
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,29
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,34
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS8:
		;UNO
		mSetCursor 22,3
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,8
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,12
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,17
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,21
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,25
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,30
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,34
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS9:
		;UNO
		mSetCursor 22,3
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,7
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,11
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,15
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,19
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,23
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,27
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,31
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		;NUEVE
		mSetCursor 22,35
		mov ax, tamBarra[16]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS10:
		;UNO
		mSetCursor 22,2
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,6
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,10
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,13
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,17
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,20
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,24
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,27
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		;NUEVE
		mSetCursor 22,31
		mov ax, tamBarra[16]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIEZ
		mSetCursor 22,35
		mov ax, tamBarra[18]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS11:
		;UNO
		mSetCursor 22,3
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,6
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,9
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,12
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,16
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,19
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,22
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,25
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		;NUEVE
		mSetCursor 22,28
		mov ax, tamBarra[16]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIEZ
		mSetCursor 22,31
		mov ax, tamBarra[18]
		ConvertirString numeroaux
		printVideo numeroaux
		;ONCE
		mSetCursor 22,34
		mov ax, tamBarra[20]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS12:
		;UNO
		mSetCursor 22,2
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,5
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,8
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,11
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,14
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,17
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,20
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,23
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		;NUEVE
		mSetCursor 22,26
		mov ax, tamBarra[16]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIEZ
		mSetCursor 22,29
		mov ax, tamBarra[18]
		ConvertirString numeroaux
		printVideo numeroaux
		;ONCE
		mSetCursor 22,32
		mov ax, tamBarra[20]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOCE
		mSetCursor 22,35
		mov ax, tamBarra[22]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS13:
		;UNO
		mSetCursor 22,2
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,5
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,8
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,11
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,14
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,17
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,20
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,23
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		;NUEVE
		mSetCursor 22,26
		mov ax, tamBarra[16]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIEZ
		mSetCursor 22,29
		mov ax, tamBarra[18]
		ConvertirString numeroaux
		printVideo numeroaux
		;ONCE
		mSetCursor 22,32
		mov ax, tamBarra[20]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOCE
		mSetCursor 22,35
		mov ax, tamBarra[22]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRECE
		mSetCursor 24,3
		mov ax, tamBarra[24]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS14:
		;UNO
		mSetCursor 22,2
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,5
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,8
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,11
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,14
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,17
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,20
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,23
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		;NUEVE
		mSetCursor 22,26
		mov ax, tamBarra[16]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIEZ
		mSetCursor 22,29
		mov ax, tamBarra[18]
		ConvertirString numeroaux
		printVideo numeroaux
		;ONCE
		mSetCursor 22,32
		mov ax, tamBarra[20]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOCE
		mSetCursor 22,35
		mov ax, tamBarra[22]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRECE
		mSetCursor 24,3
		mov ax, tamBarra[24]
		ConvertirString numeroaux
		printVideo numeroaux
		;CATORCE
		mSetCursor 24,6
		mov ax, tamBarra[26]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS15:
		;UNO
		mSetCursor 22,2
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,5
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,8
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,11
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,14
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,17
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,20
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,23
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		;NUEVE
		mSetCursor 22,26
		mov ax, tamBarra[16]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIEZ
		mSetCursor 22,29
		mov ax, tamBarra[18]
		ConvertirString numeroaux
		printVideo numeroaux
		;ONCE
		mSetCursor 22,32
		mov ax, tamBarra[20]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOCE
		mSetCursor 22,35
		mov ax, tamBarra[22]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRECE
		mSetCursor 24,3
		mov ax, tamBarra[24]
		ConvertirString numeroaux
		printVideo numeroaux
		;CATORCE
		mSetCursor 24,6
		mov ax, tamBarra[26]
		ConvertirString numeroaux
		printVideo numeroaux
		;QUINCE
		mSetCursor 24,9
		mov ax, tamBarra[28]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS16:
		;UNO
		mSetCursor 22,2
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,5
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,8
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,11
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,14
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,17
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,20
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,23
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		;NUEVE
		mSetCursor 22,26
		mov ax, tamBarra[16]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIEZ
		mSetCursor 22,29
		mov ax, tamBarra[18]
		ConvertirString numeroaux
		printVideo numeroaux
		;ONCE
		mSetCursor 22,32
		mov ax, tamBarra[20]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOCE
		mSetCursor 22,35
		mov ax, tamBarra[22]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRECE
		mSetCursor 24,3
		mov ax, tamBarra[24]
		ConvertirString numeroaux
		printVideo numeroaux
		;CATORCE
		mSetCursor 24,6
		mov ax, tamBarra[26]
		ConvertirString numeroaux
		printVideo numeroaux
		;QUINCE
		mSetCursor 24,9
		mov ax, tamBarra[28]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECISEIS
		mSetCursor 24,12
		mov ax, tamBarra[30]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS17:
		;UNO
		mSetCursor 22,2
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,5
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,8
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,11
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,14
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,17
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,20
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,23
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		;NUEVE
		mSetCursor 22,26
		mov ax, tamBarra[16]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIEZ
		mSetCursor 22,29
		mov ax, tamBarra[18]
		ConvertirString numeroaux
		printVideo numeroaux
		;ONCE
		mSetCursor 22,32
		mov ax, tamBarra[20]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOCE
		mSetCursor 22,35
		mov ax, tamBarra[22]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRECE
		mSetCursor 24,3
		mov ax, tamBarra[24]
		ConvertirString numeroaux
		printVideo numeroaux
		;CATORCE
		mSetCursor 24,6
		mov ax, tamBarra[26]
		ConvertirString numeroaux
		printVideo numeroaux
		;QUINCE
		mSetCursor 24,9
		mov ax, tamBarra[28]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECISEIS
		mSetCursor 24,12
		mov ax, tamBarra[30]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECISIETE
		mSetCursor 24,15
		mov ax, tamBarra[32]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS18:
		;UNO
		mSetCursor 22,2
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,5
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,8
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,11
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,14
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,17
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,20
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,23
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		;NUEVE
		mSetCursor 22,26
		mov ax, tamBarra[16]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIEZ
		mSetCursor 22,29
		mov ax, tamBarra[18]
		ConvertirString numeroaux
		printVideo numeroaux
		;ONCE
		mSetCursor 22,32
		mov ax, tamBarra[20]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOCE
		mSetCursor 22,35
		mov ax, tamBarra[22]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRECE
		mSetCursor 24,3
		mov ax, tamBarra[24]
		ConvertirString numeroaux
		printVideo numeroaux
		;CATORCE
		mSetCursor 24,6
		mov ax, tamBarra[26]
		ConvertirString numeroaux
		printVideo numeroaux
		;QUINCE
		mSetCursor 24,9
		mov ax, tamBarra[28]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECISEIS
		mSetCursor 24,12
		mov ax, tamBarra[30]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECISIETE
		mSetCursor 24,15
		mov ax, tamBarra[32]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECIOCHO
		mSetCursor 24,18
		mov ax, tamBarra[34]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS19:
		;UNO
		mSetCursor 22,2
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,5
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,8
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,11
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,14
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,17
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,20
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,23
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		;NUEVE
		mSetCursor 22,26
		mov ax, tamBarra[16]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIEZ
		mSetCursor 22,29
		mov ax, tamBarra[18]
		ConvertirString numeroaux
		printVideo numeroaux
		;ONCE
		mSetCursor 22,32
		mov ax, tamBarra[20]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOCE
		mSetCursor 22,35
		mov ax, tamBarra[22]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRECE
		mSetCursor 24,3
		mov ax, tamBarra[24]
		ConvertirString numeroaux
		printVideo numeroaux
		;CATORCE
		mSetCursor 24,6
		mov ax, tamBarra[26]
		ConvertirString numeroaux
		printVideo numeroaux
		;QUINCE
		mSetCursor 24,9
		mov ax, tamBarra[28]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECISEIS
		mSetCursor 24,12
		mov ax, tamBarra[30]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECISIETE
		mSetCursor 24,15
		mov ax, tamBarra[32]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECIOCHO
		mSetCursor 24,18
		mov ax, tamBarra[34]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECINUEVE
		mSetCursor 24,21
		mov ax, tamBarra[36]
		ConvertirString numeroaux
		printVideo numeroaux
		jmp FIN
	BARRAS20:
		;UNO
		mSetCursor 22,2
		mov ax, tamBarra[0]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOS
		mSetCursor 22,5
		mov ax, tamBarra[2]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRES
		mSetCursor 22,8
		mov ax, tamBarra[4]
		ConvertirString numeroaux
		printVideo numeroaux
		;CUATRO
		mSetCursor 22,11
		mov ax, tamBarra[6]
		ConvertirString numeroaux
		printVideo numeroaux
		;CINCO
		mSetCursor 22,14
		mov ax, tamBarra[8]
		ConvertirString numeroaux
		printVideo numeroaux
		;SEIS
		mSetCursor 22,17
		mov ax, tamBarra[10]
		ConvertirString numeroaux
		printVideo numeroaux
		;SIETE
		mSetCursor 22,20
		mov ax, tamBarra[12]
		ConvertirString numeroaux
		printVideo numeroaux
		;OCHO
		mSetCursor 22,23
		mov ax, tamBarra[14]
		ConvertirString numeroaux
		printVideo numeroaux
		;NUEVE
		mSetCursor 22,26
		mov ax, tamBarra[16]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIEZ
		mSetCursor 22,29
		mov ax, tamBarra[18]
		ConvertirString numeroaux
		printVideo numeroaux
		;ONCE
		mSetCursor 22,32
		mov ax, tamBarra[20]
		ConvertirString numeroaux
		printVideo numeroaux
		;DOCE
		mSetCursor 22,35
		mov ax, tamBarra[22]
		ConvertirString numeroaux
		printVideo numeroaux
		;TRECE
		mSetCursor 24,3
		mov ax, tamBarra[24]
		ConvertirString numeroaux
		printVideo numeroaux
		;CATORCE
		mSetCursor 24,6
		mov ax, tamBarra[26]
		ConvertirString numeroaux
		printVideo numeroaux
		;QUINCE
		mSetCursor 24,9
		mov ax, tamBarra[28]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECISEIS
		mSetCursor 24,12
		mov ax, tamBarra[30]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECISIETE
		mSetCursor 24,15
		mov ax, tamBarra[32]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECIOCHO
		mSetCursor 24,18
		mov ax, tamBarra[34]
		ConvertirString numeroaux
		printVideo numeroaux
		;DIECINUEVE
		mSetCursor 24,21
		mov ax, tamBarra[36]
		ConvertirString numeroaux
		printVideo numeroaux
		;VEINTE
		mSetCursor 24,24
		mov ax, tamBarra[38]
		ConvertirString numeroaux
		printVideo numeroaux
	FIN:
		ret

pintarNumerosBarras endp


pintarEncabezadoBarras proc
	mSetCursor 0,1
	cmp tipoOrden, 1d
	je 	BSORT
	cmp tipoOrden, 2d
	je 	QSORT
	cmp tipoOrden, 3d
	je 	SSORT
	BSORT:
		printVideo titulobubble
		jmp TIEMPO
	QSORT:
		printVideo tituloquick
		jmp TIEMPO
	SSORT:
		printVideo tituloshell
	TIEMPO:
		mSetCursor 0,13
		printVideo titulotiempo
		mSetCursor 0,21
		printVideo cadtiempo ;simulando el tiempo al inicio 00:00
	VELOCY:
		mSetCursor 0,28
		printVideo titulovelocidad
		printVideo velocidad ;38 cursor
	FIN:
		ret

pintarEncabezadoBarras endp