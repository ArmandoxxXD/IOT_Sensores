#include <Arduino.h>

// Definir los pines de entrada y salida para los módulos ky-018 y ky-009
const int KY_018_PIN = 32;
const int KY_009_RED_PIN = 5;
const int KY_009_GREEN_PIN = 18;
const int KY_009_BLUE_PIN = 19;

void setup() {
  // Configurar los pines de entrada y salida
  pinMode(KY_018_PIN, INPUT);
  pinMode(KY_009_RED_PIN, OUTPUT);
  pinMode(KY_009_GREEN_PIN, OUTPUT);
  pinMode(KY_009_BLUE_PIN, OUTPUT);
}

void loop() {
  // Leer el valor del sensor ky-018
  int lightLevel = analogRead(KY_018_PIN);

  // Determinar el color del módulo ky-009 en función del nivel de luz
  if (lightLevel > 500) {
    // Si la luz es demasiado brillante, encender el módulo ky-009 en amarillo
    digitalWrite(KY_009_RED_PIN, 255);
    digitalWrite(KY_009_GREEN_PIN, 255);
    digitalWrite(KY_009_BLUE_PIN, 0);
  } else {
    // Si la luz es demasiado tenue, encender el módulo ky-009 en azul
    digitalWrite(KY_009_RED_PIN, 0);
    digitalWrite(KY_009_GREEN_PIN, 0);
    digitalWrite(KY_009_BLUE_PIN, 255);
  }

  // Esperar un breve periodo de tiempo antes de volver a leer el sensor ky-018
  delay(100);
}
