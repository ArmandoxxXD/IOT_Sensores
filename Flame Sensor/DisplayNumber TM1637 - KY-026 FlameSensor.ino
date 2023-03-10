// Importar las bibliotecas necesarias
#include <TM1637Display.h>

// Definir los pines del ESP32 para el display TM1637 y el sensor de llama KY-026
#define CLK 21
#define DIO 22
#define FLAME_SENSOR 34

// Crear objetos TM1637Display con los pines adecuados
TM1637Display display(CLK, DIO);

void setup() {
  // Inicializar el display
  display.setBrightness(0x0f);

  // Imprimir un valor inicial en el display
  display.showNumberDec(0, false);
}

void loop() {
  // Leer el valor del sensor de llama
  int flameValue = analogRead(FLAME_SENSOR);

  // Calcular el valor a mostrar en el display
  int displayValue = map(flameValue, 0, 1023, 0, 9999);

  // Mostrar el valor en el display
  display.showNumberDec(displayValue, false);

  // Esperar un breve período de tiempo antes de volver a leer el valor del sensor
  delay(100);
}