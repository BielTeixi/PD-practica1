#include <Arduino.h>

#define LED_BUILTIN 23
#define DELAY 1000

// Dirección base del registro de salida GPIO (ajusta esto según la documentación de tu placa)
#define GPIO_OUT_REG 0x3FF4400C

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Obtener el puntero al registro de salida GPIO
  volatile uint32_t *gpio_out = (volatile uint32_t *)GPIO_OUT_REG;

  // Activar el bit correspondiente al pin 23 (HIGH)
  *gpio_out |= (1 << LED_BUILTIN);
  digitalWrite(LED_BUILTIN, HIGH);

  Serial.println("ON");
  
  // Esperar el tiempo especificado
  delay(DELAY);

  // Alternar el estado del bit correspondiente al pin 23 (LOW)
  *gpio_out ^= (1 << LED_BUILTIN);
  digitalWrite(LED_BUILTIN, LOW);

  Serial.println("OFF");

  // Esperar el tiempo especificado
  delay(DELAY);
