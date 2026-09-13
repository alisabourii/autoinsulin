#include <ESP32Servo.h>

const int servoPin = 18;

Servo servo;

void setup() {
  Serial.begin(115200);
  servo.attach(servoPin, 500, 2400);
}

int pos = 0;
int insulinCC = 12;


void loop() {
  int sugerSens = map(analogRead(34),0,4095,0,500);

  if(sugerSens >= 140 && sugerSens < 200){
    Serial.print("Sug0: ");
    Serial.println(sugerSens);
  }

  else if(sugerSens >= 200 && sugerSens < 300){
    Serial.print("Sug1: ");
    Serial.println(sugerSens);
  }

  else if(sugerSens >= 300 && sugerSens < 400){
    Serial.print("Sug2: ");
    Serial.println(sugerSens);
  }

  else if(sugerSens >= 400){
    Serial.print("Sug3: ");
    Serial.println(sugerSens);
  }
  


}

