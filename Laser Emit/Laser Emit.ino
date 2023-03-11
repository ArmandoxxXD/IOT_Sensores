int pin = 2;

void setup() {
  pinMode(pin, OUTPUT);  //definir pin como salida
}
 
void loop(){
  digitalWrite(pin, HIGH);   
  delay(3000);               
  digitalWrite(pin, LOW);  
  delay(2000);               
}