#include <ESP32Servo.h>

Servo injector;
const int servoPin = 18; // Sinyal kablosunun (turuncu/sarı) bağlı olduğu pin
const int sugerInput = 34;

int insulinMM = 10;

void setup() {
  injector.attach(servoPin); // Servoyu pine bağla
}

void loop() {
  int sugerSens = map(analogRead(sugerInput),0,4095,0,500);

  if(sugerSens >= 140 && sugerSens < 200){
    injector.write(45);
  }

  else if(sugerSens >= 200 && sugerSens < 300){
    injector.write(90);
  }

  else if(sugerSens >= 300 && sugerSens < 400){
    injector.write(135);
  }

  else if(sugerSens >= 400){
    injector.write(180);
  }
}
