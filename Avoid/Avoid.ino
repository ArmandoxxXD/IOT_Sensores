int relay = 2;
int delayTime = 5;
void setup(){
  pinMode(relay, OUTPUT);
}

void loop(){
  digitalWrite(relay,HIGH);
  delay(delayTime * 1000);
}