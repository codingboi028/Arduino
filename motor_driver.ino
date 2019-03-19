void setup() {
  pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
analogWrite(11,50);
delay(2000);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
analogWrite(11,255);
delay(1000);
}
