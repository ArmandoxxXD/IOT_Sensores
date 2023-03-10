#define SENSOR_PIN 2 //Sensor de inclinación SW-520D
const int blue = 19;
const int red = 5;
const int green = 18;
void setup()
{
  pinMode(SENSOR_PIN, INPUT_PULLUP);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop(){
  if(digitalRead(SENSOR_PIN) == LOW) //apagada
  {
    digitalWrite(red, LOW);
    digitalWrite(blue,HIGH);
  }else{
    digitalWrite(blue,LOW);
   digitalWrite(red, HIGH);
  }
  
}
