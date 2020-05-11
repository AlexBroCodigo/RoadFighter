;===========================MACROS=================================
include macros.asm
include mJuego.asm
include mBarras.asm
;====================DECLARACION DEL PROCESADOR====================
.model small, stdcall
.286
;=====================SEGMENTO DE PILA=============================
.stack 
	include proce.inc
;=====================SEGMENTO DE DATO=============================
.data
	include data.asm
;=====================SEGMENTO DE CODIGO===========================
.code
	include Road.asm
	include Fighter.inc
	include Juego.inc
	include Barras.inc
end main