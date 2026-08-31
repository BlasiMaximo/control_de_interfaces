#**TRABAJO DE CONTROL DE INTERFACES**
##INVESTIGACIÓN

###Puente "H":
*¿Qué es y cómo funcionan?* 
El puente H es un circuito electrónico que permite a un motor eléctrico DC (un motor con un movimiento de rotación) girar en ambos sentidos (avanzar y retroceder), pero también se puede usar para frenarlo de manera brusca, al hacer un corto entre los bornes del motor, o incluso puede usarse para permitir que el motor frene bajo su propia inercia. 
Los puentes H se construyen con 4 interruptores (mécanicos o mediante transistores). Cuandos los interruptores S1 y S4 están cerrados ( S2 y S3 abiertos ) se aplica una tensión haciendo girar el motor en un sentido. En cambio, al abrir los interrumtpores S1 y S4 (con S2 y S3 cerrados), el voltaje se invierte, permitiendo el giro inverso del motor. 

*Control mediante puente H*
PUENTE EN H CON INTERRUPTORES

En los motores de corriente continua, la dirección de giro de los mismos depende de la polaridad de la alimentación. Para poder cambiar dicha polaridad, sin necesidad de invertir la batería, se pueden usar 4 interruptores conectados como indicado en la figura.
!(https://angelmicelti.github.io/4ESO/CYR/image002.png)

*Conexión externa*
ENTRADAS: En el positivo de la fuente del motor, se conecta a VCC/VM; en cambio, en el negativo se cpencta a GND
SALIDAS: Un cable del motor se conecta a OUT1 y OUT4 , y el otro a OUT2 y OUT3.

###GPIO
*InPut/OutPut:* pin configurable del microcontrolador que funciona por software como entrada para leer sensores o salida para controlar dispositivos. 