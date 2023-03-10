
const int touchPin = 4;

const int blue = 14;
const int green = 13;
const int red = 12;
 
//setup pins
void setup() {
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(touchPin, INPUT);
}
 
void loop(){
  //read touch sensor state
  int touchState = digitalRead(touchPin);
 
  //only interested in the HIGH signal
  if (touchState == HIGH) {
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue,HIGH);  //prende azul/ morado
  }
    digitalWrite(blue,LOW);
    digitalWrite(green, LOW);
    digitalWrite(red,HIGH); //
}

