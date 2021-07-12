# RoadFighter
Un proyecto que se basa en el juego clásico "Road Fighter" el cual trata de un carro que gana o pierde puntos dependiendo si choca contra premios o obstáculos respectivamente.
Los usuarios puede registrarse para llevar un registro del punteo y tiempo que se han hecho en la partida, esto nos permitirá generar un top 10 de puntos y otro de tiempos como competencia entre los usuarios.

* **Usuario Jugador:** 
   Es el usuario que se registra y juega las partidas que desee.

![principal](https://user-images.githubusercontent.com/65095924/125208233-90d2e980-e24e-11eb-82ea-39e3cfb091ad.png)

* **Usuario Administrador:** 
* Este usuario esta por defecto en el juego, como admin y contraseña: 1234, al acceder a el nos permite ver los top 10 de puntos y tiempo, además si logras acceder a la puerta trasera nos permitirá ordenarlos de forma ascendente o descendente con cualquiera de los 3 algoritmos: BubbleSort, QuickSort o ShellShort. 

![barras](https://user-images.githubusercontent.com/65095924/125208243-a1835f80-e24e-11eb-85ad-a62eeb41dc4e.png)

Por ultimo, en el archivo reglas.ply nos permite especificar las configuraciones del juego por nivel:

Estructura:
**NIVEL;nivel;TiempoNivel;TiempoObstaculos;TiempoPremio;PuntosObstaculos;PuntosPremios;color**

Ejemplo:
*Nivel;1;30;2;4;rojo*

___
Aplicaciones utilizadas:
* **DOSBox 0.74-3 - emulador**
* **MASM - Ensamblador**
