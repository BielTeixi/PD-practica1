#**_Practica1_**
##**_Codigo Base_**
```
#include <Arduino.h>
#define LED_BUILTIN 2
#define DELAY 500
practica_1V2.MD 2024-02-15
3 / 4
void setup() {
pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
digitalWrite(LED_BUILTIN, HIGH);
delay(DELAY);
digitalWrite(LED_BUILTIN, LOW);
delay(DELAY);
}
```

