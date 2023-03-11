/*********
  Rui Santos
  Complete project details at https://randomnerdtutorials.com  
*********/

// Motor A
int motor1Pin1 = 13; 
int motor1Pin2 = 25; 
int enable1Pin = 4; 
#define SENSOR_PIN 2


// Setting PWM properties
const int freq = 30000;
const int pwmChannel = 0;
const int resolution = 8;
int dutyCycle = 200;

void setup() {
  // sets the pins as outputs:
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(enable1Pin, OUTPUT);
  pinMode(SENSOR_PIN, INPUT_PULLUP);
  
  // configure LED PWM functionalitites
  ledcSetup(pwmChannel, freq, resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(enable1Pin, pwmChannel);

  Serial.begin(115200);

  // testing
  Serial.print("Testing DC Motor...");
}

void loop() {
  // Move the DC motor forward at maximum speed
  
  if(digitalRead(SENSOR_PIN) == LOW){
    dutyCycle = 250;
    Serial.println("Moving Forward");
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, HIGH); 
    ledcWrite(pwmChannel, dutyCycle);   

  }else{
    dutyCycle = 0;
    Serial.println("Motor stopped");
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW);
    
  }

  
}