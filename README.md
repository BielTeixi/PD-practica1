1 **_Practica1_**
- **_Codigo Base_**
```
//Este es el codigo sobre el que se basa esta practica y sobre el que trabajaremos.
#include <Arduino.h> //incluye la biblioteca Arduino que permite trabajar con sus funciones propias.
#define LED_BUILTIN 2 //define el led de la placa
#define DELAY 500 //define un retardo de 500 ms

void setup() { //aqui se define la salida del programa de la placa, en este caso el led
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() { //describe las ordenes basicas que debe hacer la placa, como establecer la intensidad del led en alto(higt) o bajo(low) dejando el retardo entre orden i orden. Esta función es un bucle.
digitalWrite(LED_BUILTIN, HIGH);
delay(DELAY);
digitalWrite(LED_BUILTIN, LOW);
delay(DELAY);
}
//Como para un led el termino intensidad se trata en idioma binario, al aumentar la intensidad el led se encenderá i al disminuirla se apagará.
```

- **Codigo del punto 1.1: Modificaciñon del código para imprimir ON-OFF**
```
#include <Arduino.h>

#define LED_BUILTIN 23 //Cambiamos la definición del led de 2 a 23 de la placa
#define DELAY 1000 //Aumentamos el Delay a 1 s


void setup() {
Serial.begin(115200); //define la velocidad de comunicación serial a 115200 bits/s, para que la información se transmita correctamente a la placa
pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
    
digitalWrite(LED_BUILTIN, HIGH);
Serial.println("ON"); //Al aumentar la intensidad del led escribe en pantalla ON
delay(DELAY);
digitalWrite(LED_BUILTIN, LOW);
Serial.println("OFF"); //Al disminuir la intensidad del led escribe en pantalla OFF
delay(DELAY);
}
```

- **Punto 1.5**
  Importante: los puntos 1.3 y 1.4 no son necesarios!!!
---
title: Node with text
---
flowchart LR
    id(["Diagrama de Flujos"])

|ON||OFF||ON|







    
