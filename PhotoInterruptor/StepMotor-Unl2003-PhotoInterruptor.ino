#include "ESP32Servo.h"
#include <Stepper.h>

// Define step constants
#define FULLSTEP 14
int switch_pin = 34; // Definition of mercury tilt switch sensor interface
int val; // Defines a numeric variable                // create servo object to control a servo

// variables will change:
int angle = 0; // the current angle of servo motor
const int stepsPerRevolution = 2038;
Stepper myStepper = Stepper(stepsPerRevolution, 14, 27, 26, 25);


void setup() {
  Serial.begin(9600);         // initialize serial
	pinMode(switch_pin, INPUT);
}

void loop() {
	// Rotate CW slowly at 5 RPM

  val = digitalRead(switch_pin); // check mercury switch state
	if(val == HIGH)
	{
    myStepper.setSpeed(10);
    myStepper.step(-stepsPerRevolution);
    delay(1000);
	}
}