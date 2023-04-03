/* Copyright(c) 2023 Evgeny Vovk All rights reserved.
   Created by : Evgeny Vovk
   Created on : Fabruary 2023
   TEJ3M-Unit2-05.ino File.
 */

#include <Servo.h>

Servo servo;

void setup() {

  servo.attach(13);
  servo.write(0);
  delay(2000);

}



void loop() {

  servo.write(90);
  delay(1000);
  servo.write(0);
  delay(1000);

}
