#include <Servo.h>
Servo myservo;
int potposition;
int servoposition;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
potposition = analogRead(A0);
servoposition = map(potposition,0,1023,10,170);
myservo.write(servoposition);
Serial.println(potposition );

;
}
