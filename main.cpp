#include <ESP32Servo.h>

Servo injector;
const int servoPin = 18; // Sinyal kablosunun (turuncu/sarı) bağlı olduğu pin
const int sugerInput = 34;


void setup() {
  injector.attach(servoPin); // Servoyu pine bağla
}

void loop() {
  int input = map(analogRead(sugerInput),0,4095,0,180);
  injector.write(input);    // 0 dereceye git
}
