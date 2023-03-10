const int blue = 5;
const int red = 19;
const int green = 18;
void setup()
{
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop(){
 
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
    delay(5000);
    
    digitalWrite(blue,LOW);
    digitalWrite(green,LOW);
    digitalWrite(red,HIGH);
    delay(5000);
    
    digitalWrite(blue,LOW);
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    delay(5000);
  
}
