;====================UTILIDADES============================
space db 32,'$'
space2 db 32,32,'$'
saltoln db 0ah,0dh,'$'
Num db 100 dup('$')
corA db 91,'$' 
corC db 93,'$'
tab db 9,'$'
tab2 db 9,9,'$'
tab3 db 9,9,9,'$'
tab4 db 9,9,9,9,'$'
;===================ENCABEZADO Y MENUS=====================
menuinicial db 10,13,9,9,9,9,'ROAD FIGHTER',10,13,'1. Ingresar al Juego',10,13,'2. Registrar Usuario',10,13,'3. Salir','$'
escoja db 10,13,'Elija una opcion: ','$'

encabezado db 10,13,'UNIVERSIDAD DE SAN CARLOS DE GUATEMALA',13,10,'FACULTAD DE INGENIERIA',13,10,'CIENCIAS Y SISTEMAS',13,10,'ARQUITECTURA DE COMPUTADORES Y ENSAMBLADORES 1',13,10,'NOMBRE: CESAR ALEJANDRO CHINCHILLA GONZALEZ',13,10,'CARNET: 201612132',10,13,'SECCION: A','$'
menuUser db 10,13,10,13,'1) Iniciar Juego',10,13,'2) Cargar Juego',10,13,'3) Salir de usuario','$'
menuAdmin db 10,13,10,13,'1) Top 10 puntos',10,13,'2) Top 10 tiempo',10,13,'3) Salir de administrador','$'
;================ MENSAJES PARA LA APLICACION =====================
msjRegUser db 'Ingrese el nombre de usuario (7 caracteres maximo): ','$' ;registrar usuario
msjRegContra db 'Ingrese una contrasena (numerica de 4 digitos): ','$'	;registrar contraseña
msjU db 'Usuario: ','$'
msjC db 'contrasena: ','$'

;=============== VARIABLES PARA GUARDAR USUARIOS ==================
entradaU db 7 dup('$'),'$'	;Entrada para el usuario
entradaC db 4 dup('$'),'$'	;Entrada para la contraseña
userAdmin db 'admin','$' 	;Nombre del usuario administrador
contraAdmin db '1234','$'	;contraseña del usuario administrador
usuario1 db 7 dup('$'),'$'	;Usuario #1
contra1 db 4 dup('$'),'$' 	
usuario2 db 7 dup('$'),'$'	;Usuario #2
contra2 db 4 dup('$'),'$' 	
usuario3 db 7 dup('$'),'$'	;Usuario #3
contra3 db 4 dup('$'),'$' 	
usuario4 db 7 dup('$'),'$'	;Usuario #4
contra4 db 4 dup('$'),'$' 	
usuario5 db 7 dup('$'),'$'	;Usuario #5
contra5 db 4 dup('$'),'$' 	
usuario6 db 7 dup('$'),'$'	;Usuario #6
contra6 db 4 dup('$'),'$' 	
usuario7 db 7 dup('$'),'$'	;Usuario #7
contra7 db 4 dup('$'),'$' 	
usuario8 db 7 dup('$'),'$'	;Usuario #8
contra8 db 4 dup('$'),'$' 	
usuario9 db 7 dup('$'),'$'	;Usuario #9
contra9 db 4 dup('$'),'$' 	
usuario10 db 7 dup('$'),'$'	;Usuario #10
contra10 db 4 dup('$'),'$' 	
usuario11 db 7 dup('$'),'$'	;Usuario #11
contra11 db 4 dup('$'),'$' 	
usuario12 db 7 dup('$'),'$'	;Usuario #12
contra12 db 4 dup('$'),'$' 	
usuario13 db 7 dup('$'),'$'	;Usuario #13
contra13 db 4 dup('$'),'$' 	
usuario14 db 7 dup('$'),'$'	;Usuario #14
contra14 db 4 dup('$'),'$' 	
usuario15 db 7 dup('$'),'$'	;Usuario #15
contra15 db 4 dup('$'),'$' 	
usuario16 db 7 dup('$'),'$'	;Usuario #16
contra16 db 4 dup('$'),'$' 	
usuario17 db 7 dup('$'),'$'	;Usuario #17
contra17 db 4 dup('$'),'$' 	
usuario18 db 7 dup('$'),'$'	;Usuario #18
contra18 db 4 dup('$'),'$' 	
usuario19 db 7 dup('$'),'$'	;Usuario #19
contra19 db 4 dup('$'),'$' 	
usuario20 db 7 dup('$'),'$'	;Usuario #20
contra20 db 4 dup('$'),'$' 

;============================ INGRESAR USUARIO ============================
usuarioLogueado db 7 dup('$'),'$'


;=================== COLORES EN MEMORIA DE GRAFICOS =======================
Negro db 0d
Azul db 1d
Verde db 2d
Cyan  db 3d
Rojo db 4d
Fusia db 5d
Cafe db 6d
GrisClaro db 7d
Gris db 8d
AzulClaro db 9d
VerdeClaro db 10d
CyanClaro db 11d
Naranja db 12d
Rosado db 13d
Amarillo db 14d
Blanco db 15d

;==================== SENSORES PARA LA DETECCION DE CHOQUES DE LOS BLOQUES ================
sensor1 dw 321 	;posicion del sensor1 
sensor2 dw 4 	;posicion del sensor2
sensor3 dw 953	;posicion del sensor3
sensor4 dw 1272 ;posicion del sensor4
sensor5 dw 2229 ;posicion del sensor5
sensor6 dw 2868 ;posicion del sensor6
sensor7 dw 3829 ;posicion del sensor7
sensor8 dw 4792 ;posicion del sensor8
sensor9 dw 6076 ;posicion del sensor9
sensor10 dw 6081 ;posicion del sensor10
sensor11 dw 4805 ;posicion del sensor11
sensor12 dw 3848 ;posicion del sensor12
sensor13 dw 2889 ;posicion del sensor13
sensor14 dw 2248 ;posicion del sensor14
sensor15 dw 1285 ;posicion del sensor15
sensor16 dw 964 ;posicion del sensor16
sensor17 dw 1 ;posicion del sensor17

;============================ IMPRIMIR EN MODO VIDEO ==========================
nivelActual db 'N1','$' 		;seguira en uso
contadorPuntos db '3$$','$' 	;seguira en uso

;Tiempo del Juego
dosPuntos db ':','$' 
horaJuego db 2 dup('0'),'$'
minutoJuego db 2 dup('$'),'$' 	;cadena con los minutos del juego
segundoJuego db 2 dup('$'),'$' 	;cadena con los segundos del juego
cero db '0','$'

;=========================== PARA EL CONTADOR DE TIEMPO ====================
contadorMinutos dw 0d ;contador de minutos del juego
;Tiempo Actual
segundoActual db 0d
;Tiempo Inicial
segundoInicial db 0d
;Estado para el control de segundos
estadoSegundo db 0d  ;me indica si es mayor/menor el segundo actual al Inicial 0/1

;=========================== MEMORIA PARA EL JUEGO =========================
posCarro dw 0d 		;guarda la posicion del carro	
alturaCarro dw 40d	;establece la altura del carro
pausa db 0d 		;llevara el control de la pausa del juego  0/1 = libre/pausa
limiteDerecho dw 247d 	;El limite para el margen derecho (249d) en columnas
limiteIzquierdo dw 57d	;El limite para el margen izquierdo en columnas
terminoJuego dw 0d 	;Para el control de terminar el juego 0/1 = jugando/game over

;POSICIONES DE LOS OBSTACULOS MAPEADOS
posObs1 dw 0d 	;guarda la posicion ya mapeada (64000 bytes)
posObs2 dw 0d 
posObs3 dw 0d
posObs4 dw 0d

;POSICIONES DE LOS PREMIOS MAPEADOS
posPremio1 dw 0d
posPremio2 dw 0d
posPremio3 dw 0d
posPremio4 dw 0d

;======================= PARA LA FRECUENCIA QUE SALDRAN LOS BLOQUES POR NIVELES ======================
;Para todos los niveles
mismoTiempo db 2 dup('$'),'$' 	;vara verificar que no sea el mismo tiempo que el anterior segundoJuego
mismoTiempoBS db 2 dup('$'),'$'
numPremio db 1d 		;control de que numero de premio saldra, si llega a 6 regresa con 1, esto para parecer aleatorio
numObs db 1d 			;control de que numero de obstaculo saldra, si llega a 6 regresa con 1, esto para parecer aleatorio
premio1Listo dw 0d 		;INDICADORES PARA SABER SI EL PREMIO PUEDO SALIR EN PANTALLA. indica 0 es que esta listo para salir, 1 es que sigue en juego 
premio2Listo dw 0d 		
premio3Listo dw 0d 		
premio4Listo dw 0d
obs1Listo dw 0d 	;indica 0 es que esta listo para salir, 1 es que sigue en juego
obs2Listo dw 0d 
obs3Listo dw 0d
obs4Listo dw 0d

;======================= MEMORIA PARA EL TIEMPO SEGUN NIVELES ====================
;--------------------- PARA NIVEL 1 ------------------------------
TiempoNivel1 dw 0d 		;Determina la duracion del nivel(seg)
tiempo1Premio db 0d 	;Tiempo del nivel 1 para que salga cada premio						
tiempo1Obs db 0d	;Tiempo del nivel 1 para cada obstaculo

;--------------------- PARA NIVEL 2 ------------------------------
TiempoNivel2 dw 0d
tiempo2Premio db 0d
tiempo2Obs db 0d

;--------------------- PARA NIVEL 3 ------------------------------
TiempoNivel3 dw 0d
tiempo3Premio db 0d
tiempo3Obs db 0d


;--------------------- PARA NIVEL 4 ------------------------------
TiempoNivel4 dw 0d
tiempo4Premio db 0d
tiempo4Obs db 0d

;--------------------- PARA NIVEL 5 ------------------------------
TiempoNivel5 dw 0d
tiempo5Premio db 0d
tiempo5Obs db 0d


;--------------------- PARA NIVEL 6 ------------------------------
TiempoNivel6 dw 0d
tiempo6Premio db 0d
tiempo6Obs db 0d


;==================== MEMORIA PARA EL PUNTAJE SEGUN NIVELES ======================
puntajeJuego dw 3d 	;variable que llevara el puntaje durante el juego en memoria
;Para todos los niveles
PuntosPremios dw 0d 	;punteo para sumar por colisionar con un premio NOTA: ASIGNARLE VALOR al cambiar de NIVEL. variable en aumentoPuntos y disminuyoPuntos
PuntosObs dw 0d 		;punteo para restar por colisonar con un obstaculo NOTA: ASIGNARLE VALOR al cambiar de NIVEL

;--------------------- PARA NIVEL 1 ------------------------------
puntosPremiosN1 dw 0d
puntosObsN1 dw 0d

;--------------------- PARA NIVEL 2 ------------------------------
puntosPremiosN2 dw 0d
puntosObsN2 dw 0d

;--------------------- PARA NIVEL 3 ------------------------------
puntosPremiosN3 dw 0d
puntosObsN3 dw 0d

;--------------------- PARA NIVEL 4 ------------------------------
puntosPremiosN4 dw 0d
puntosObsN4 dw 0d

;--------------------- PARA NIVEL 5 ------------------------------
puntosPremiosN5 dw 0d
puntosObsN5 dw 0d

;--------------------- PARA NIVEL 6 ------------------------------
puntosPremiosN6 dw 0d
puntosObsN6 dw 0d

;=================== MEMORIA PARA EL COLOR DEL CARRO SEGUN NIVELES ======================
colorCarro db 4d  	;guarda el color del Carro
;--------------------- PARA NIVEL 1 ------------------------------
carrocl1 db 4d 		;por defecto tendran el color Rojo 	
;--------------------- PARA NIVEL 2 ------------------------------
carrocl2 db 4d
;--------------------- PARA NIVEL 3 ------------------------------
carrocl3 db 4d
;--------------------- PARA NIVEL 4 ------------------------------
carrocl4 db 4d
;--------------------- PARA NIVEL 5 ------------------------------
carrocl5 db 4d
;--------------------- PARA NIVEL 6 ------------------------------
carrocl6 db 4d
;================================PARA CARGAR EL JUEGO =========================
juegoCargado db 0d; indica si hay un juego cargado en la aplicacion 0/1 = no/si

;==================== PARA EL ARCHIVO DE ENTRADA =============================
handlerentrada dw ? ;no se le asigna un valor todavia
bufferentrada db 50 dup('$') ;cadena para guardar la ruta del archivo de entrada
bufferInformacion db 220 dup('$') ;variable para guardar la informacion que leeremos del archivo de entrada
bufferaux db 10 dup('$') ;cadena auxiliar para guardar la informacion de entrada temporalmente
cadrojo db 'rojo','$'
cadazul db 'azul','$'
cadverde db 'verde','$'
cadblanco db 'blanco','$'

siabrio db 0d 	;indica si abrio correctamente el archivo o no 1/0

;====================================== PARA ALMACENAR INFORMACION DE LA PARTIDA JUGADA DEL USUARIO =====================
numUsuario dw 20 dup(0d) 			;para identificar el usuario# 1-20
punteoU dw 20 dup(0d)				;punteo que llego el usuario# 1-20
tiempoU dw 20 dup(0d)				;tiempo que llego el usuario# 1-20
nivelU dw 20 dup(0d) 				;nivel que llego el usuario# 1-20

;========================== PARA TOP 10 PUNTOS =========================
;PARA LA IMPRESION
toptituloP db 9,9,9,9,'Top 10 Puntos','$'
top1 db 0ah,0dh,'1.','$'
top2 db 0ah,0dh,'2.','$'
top3 db 0ah,0dh,'3.','$'
top4 db 0ah,0dh,'4.','$'
top5 db 0ah,0dh,'5.','$'
top6 db 0ah,0dh,'6.','$'
top7 db 0ah,0dh,'7.','$'
top8 db 0ah,0dh,'8.','$'
top9 db 0ah,0dh,'9.','$'
top10 db 0ah,0dh,'10.','$'
numeroaux db 7 dup('$'),'$'

;PARA EL ORDENAMIENTO TOP
usuarioaux dw 0d				;usuario auxiliar
nivelaux dw 0d 					;nivel auxiliar
punteoaux dw 0d 				;punteo auxiliar


;==================== PARA GENERAR ARCHIVO PUNTOS.REP ==================
rutapuntos db 'Road/Puntos.rep',00h


;======================= PARA TOP 10 TIEMPO ============================
;PARA LA IMPRESION
toptituloT db 9,9,9,9,'Top 10 Tiempo (Seg)','$'

;PARA EL ORDENAMIENTO TOP
tiempoaux dw 0d 		;tiempo en segundos auxiliar

;=================== PARA GENERAR ARCHIVO TIEMPOS.REP ==================
rutatiempos db 'Road/Tiempos.rep',00h


;======================================================= PARA LA GRAFICA DE BARRAS ===========================================================
numBarras dw 0d 							;para saber el numero de barras que tengo que mostrar
titulografica db 'Grafica de Barras','$' 	;titulo al iniciar la grafica
anchuraBarra dw 0d 							;guarda la anchura que tendran las barras
alturaMaxima dw 140 						;altura maxima que tendra la barra mayor
valorMaximo dw 0d 							;guarda el numero mas grande de las puntuaciones/tiempos (barra mas grande)
tiemposonido dw 0d 							;tiempo que tendra el delay del sonido

;MEMORIA DE LAS BARRAS
tamBarra dw 20 dup(0d)				;arreglo que guarda los puntos/tiempos de los usuarios para saber el tamaño de las barras
posBarra dw 20 dup(0d)				;arreglo que guarda las posiciones que tendra cada barra
alturaBarra dw 20 dup(0d) 			;arreglo que guarda la altura que tendra cada barra
colorBarra dw 20 dup(0d)			;arreglo que guarda el color de cada barra
hzBarra dw 20 dup(0d)				;arreglo que guarda los hz de cada barra

;================================ MENU ORDENAMIENTOS ==========================
msjMenuOrden db 9,9,'ORDENAMIENTOS',10,13,'1) Ordenamiento BubbleSort',10,13,'2) Ordenamiento QuickSort',10,13,'3) Ordenamiento ShellSort',10,13,'4) Salir de ordenamientos','$'
msjvelocidad db 10,13,'INGRESE UNA VELOCIDAD (0-9): ','$'
msjASDEC db 10,13,'Forma:',10,13,'1) Descendente',10,13,'2) Ascendente','$'
;Memoria del menu
tipoOrden db 0d 		;guarda el indicador del tipo de ordenamiento
velocidad db '$','$' 	;guarda el nivel de velocidad de las graficas
formaOrden db 0d 		;guarda la forma del ordenamiento

;MODO VIDEO
titulobubble db 'BUBBLESORT','$'
tituloquick db 'QUICKSORT','$'
tituloshell db 'SHELLSORT','$'
titulotiempo db 'TIEMPO:','$'
titulovelocidad db 'VELOCIDAD:','$'

;CADENAS PARA IMPRIMIR EL TIEMPO DEL ORDENAMIENTO
cadtiempo db '00:00','$' 		;tiempo al inicio, solo para simular
minutoBarra db 2 dup('$'),'$' 	;cadena con los minutos de la grafica 
segundoBarra db 2 dup('$'),'$' 	;cadena con los segundos de la grafica

;PARA EL CONTADOR DEL TIEMPO DE LAS BARRAS
contadorMinutosB dw 0d ;contador de minutos del juego
segundoActualB db 0d 	;Tiempo Actual
segundoInicialB db 0d 	;Tiempo Inicial
estadoSegundoB db 0d  	;me indica si es mayor/menor el segundo actual al Inicial 0/1

;============================== PARA ORDENAMIENTOS ======================================
;PARA TODOS
limiteBarra dw 0d 	;guarda el numero hasta donde vamos a realizar el ordenamiento
tamBarraAux dw 0d 	;guarda el vlaor de tamBarra auxiliarmente
auxsi dw 0d 	;guarda el valor de si
auxdi dw 0d 	;guarda el valor de di
;BUBBLESORT

;QUICKSORT
iquick dw 0d
jquick dw 0d
pivote dw 0d
primero dw 0d
ultimo dw 0d

;SHELLSORT
saltoshell dw 0d
iforshell dw 0d
jshell dw 0d
kshell dw 0d