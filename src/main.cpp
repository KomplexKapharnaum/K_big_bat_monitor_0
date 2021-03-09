#include <Arduino.h>


void setup() {
  Serial.begin(9600);
}

void loop(){
  int milivolt = map(analogRead(PA3),0,1023,0,3300);
  Serial.print("pin read = ");
  Serial.print(milivolt);
  Serial.println(" mVolt");
}