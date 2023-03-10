int Led_Red = 4;
int Led_Green = 2;


void setup() {
  pinMode(Led_Red, OUTPUT); 
  pinMode(Led_Green, OUTPUT); 
}
void loop() {
   for (int val = 255; val > 0; val--) {
      digitalWrite(Led_Green, val);
      digitalWrite(Led_Red, 255-val);
      delay(15);
   }
   for (int val = 0; val < 255; val++) {
      digitalWrite(Led_Green, val);
      digitalWrite(Led_Red, 255-val);
      delay(15);
   }
}