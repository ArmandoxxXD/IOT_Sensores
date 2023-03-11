#include <FastLED.h>

const int REED_PIN = 2; // Pin del sensor mini reed
const int LED_PIN = 13; // Pin de datos de la matriz de LED
const int LED_COUNT = 256; // Número total de LED en la matriz (8x32)

CRGB leds[LED_COUNT];

void setup() {
  Serial.begin(9600); // Iniciar comunicación serial a 9600 baudios
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, LED_COUNT); // Configurar la matriz de LED
  FastLED.setBrightness(64); // Configurar la intensidad de brillo
  FastLED.clear(); // Limpiar la matriz de LED
  FastLED.show(); // Mostrar los cambios en la matriz de LED
  pinMode(REED_PIN, INPUT_PULLUP); // Configurar el pin del sensor mini reed como entrada con pull-up
}

void loop() {
  if (digitalRead(REED_PIN) == LOW) {
    for (int i = 0; i < LED_COUNT; i++) {
      leds[i] = CRGB::Blue; // Establecer el color azul en cada LED de la matriz si el sensor está en estado LOW
    }
  } else {
    for (int i = 0; i < LED_COUNT; i++) {
      leds[i] = CRGB::Green; // Establecer el color verde en cada LED de la matriz si el sensor está en estado HIGH
    }
  }

  FastLED.show(); // Mostrar los cambios en la matriz de LED
}