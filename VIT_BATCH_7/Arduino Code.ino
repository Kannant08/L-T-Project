#include <Arduino.h>

int digitalsensor=2;
int analogsensor=A0;
int BUZZER=9;

void setup() {  
  pinMode(9,OUTPUT);
  pinMode(digitalsensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool digital=digitalRead(digitalsensor);
  int analog=analogRead(analogsensor);
  if (analog>=400){
    digitalWrite(BUZZER, HIGH);
    Serial.print("Analog Value = ");
    Serial.print(analog);
    Serial.println(" | ALCOHOL DETECTED");
  }
  else{  
    digitalWrite(BUZZER, LOW);
    Serial.println("Sensor Values: ");
    Serial.println(analog);
    Serial.print("\n");
  }
  delay(1000);

}
