#include<Servo.h>

Servo S1;

void setup() {
  // put your setup code here, to run once:
S1.attach(9);
S1.write(180);
}

void loop() {
  // put your main code here, to run repeatedly:

}
