// KY-004 Button and KY-009 RGB LED module example code for ESP32 Devkit v1

const int buttonPin = 18; // define the KY-004 button pin
const int redPin = 19; // define the KY-009 red LED pin
const int greenPin = 21; // define the KY-009 green LED pin
const int bluePin = 22; // define the KY-009 blue LED pin

void setup() {
  pinMode(buttonPin, INPUT); // set the KY-004 button pin as input
  pinMode(redPin, OUTPUT); // set the KY-009 red LED pin as output
  pinMode(greenPin, OUTPUT); // set the KY-009 green LED pin as output
  pinMode(bluePin, OUTPUT); // set the KY-009 blue LED pin as output
}

void loop() {
  int buttonState = digitalRead(buttonPin); // read the KY-004 button state
  
  if (buttonState == HIGH) { // if the button is pressed
    digitalWrite(redPin, HIGH); // turn on the red LED
    digitalWrite(greenPin, LOW); // turn off the green LED
    digitalWrite(bluePin, LOW); // turn off the blue LED
  } else { // if the button is not pressed
    digitalWrite(redPin, LOW); // turn off the red LED
    digitalWrite(greenPin, LOW); // turn off the green LED
    digitalWrite(bluePin, LOW); // turn off the blue LED
  }
}
