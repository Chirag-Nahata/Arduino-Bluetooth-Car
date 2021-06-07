  
#include <AFMotor.h>
#include <SoftwareSerial.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
char t,i;
SoftwareSerial S_Serial(2, 3);
void setup() {
  Serial.begin(9600);
  S_Serial.begin(9600);
  pinMode(9,OUTPUT);   
  pinMode(8,OUTPUT);
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
}

void loop() {
  if (Serial.available()) {
    t = Serial.read();
  }
   if (S_Serial.available()) {
    i = S_Serial.read();
  }

  if (t == 'F' | i=='F') 
  {
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(FORWARD);
    motor4.run(FORWARD);

  }

  else if (t == 'B'|i == 'B') {    //move reverse (all motors rotate in reverse direction)
    motor1.run(BACKWARD);
    motor2.run(BACKWARD);
    motor3.run(BACKWARD);
    motor4.run(BACKWARD);

  }

  else if (t == 'R'|i == 'R') {    //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    motor3.run(RELEASE);
    motor4.run(RELEASE);

  }

  else if (t == 'L'|i == 'L') {    //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(FORWARD);
    motor4.run(FORWARD);
  }

  else if (t == 'W'|i == 'W') {  //turn led on or off)
    digitalWrite(9, HIGH);
  }
  else if (t == 'w'|i == 'w') {
    digitalWrite(9, LOW);
  }

  else if (t == 'S'|i == 'S') {    //STOP (all motors stop)
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
 }
 else if (t == '0' | i == '0') {    //STOP (all motors stop)
    motor1.setSpeed(0);
    motor2.setSpeed(0);
    motor3.setSpeed(0);
    motor4.setSpeed(0);
 }
 else if (t == '1' | i=='1') {    //STOP (all motors stop)
    motor1.setSpeed(25);
    motor2.setSpeed(25);
    motor3.setSpeed(25);
    motor4.setSpeed(25);
 }
 else if (t == '2'| i=='2') {    //STOP (all motors stop)
    motor1.setSpeed(51);
    motor2.setSpeed(51);
    motor3.setSpeed(51);
    motor4.setSpeed(51);
 }
 else if (t == '3'| i=='3') {    //STOP (all motors stop)
    motor1.setSpeed(77);
    motor2.setSpeed(77);
    motor3.setSpeed(77);
    motor4.setSpeed(77);
 }
 else if (t == '4'| i=='4') {    //STOP (all motors stop)
    motor1.setSpeed(102);
    motor2.setSpeed(102);
    motor3.setSpeed(102);
    motor4.setSpeed(102);
 }
 else if (t == '5'| i=='5') {    //STOP (all motors stop)
    motor1.setSpeed(128);
    motor2.setSpeed(128);
    motor3.setSpeed(128);
    motor4.setSpeed(128);
 }
 else if (t == '6' | i=='6') {    //STOP (all motors stop)
    motor1.setSpeed(153);
    motor2.setSpeed(153);
    motor3.setSpeed(153);
    motor4.setSpeed(153);
 }
 
 else if (t == '7'| i=='7') {    //STOP (all motors stop)
    motor1.setSpeed(178);
    motor2.setSpeed(178);
    motor3.setSpeed(178);
    motor4.setSpeed(178);
 }
 else if (t == '8'| i=='8') {    //STOP (all motors stop)
    motor1.setSpeed(204);
    motor2.setSpeed(204);
    motor3.setSpeed(204);
    motor4.setSpeed(204);
 }
  else if (t == '9'| i=='9') {    //STOP (all motors stop)
    motor1.setSpeed(230);
    motor2.setSpeed(230);
    motor3.setSpeed(230);
    motor4.setSpeed(230);
 }
  else if (t == 'q'| i=='q') {    //STOP (all motors stop)
    motor1.setSpeed(255);
    motor2.setSpeed(255);
    motor3.setSpeed(255);
    motor4.setSpeed(255);
 }
 
  
  delay(10);
  
 }
