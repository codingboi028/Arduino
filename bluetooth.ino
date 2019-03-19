#include<SoftwareSerial.h>
SoftwareSerial mySerial(10,11);
int ledpin=13;
int data;
void setup() {
  mySerial.begin(9600);
  pinMode(ledpin,OUTPUT);

}

void loop() {
  if(mySerial.available()){
    data=mySerial.read();
    if (data=='1'){
      digitalWrite(ledpin,HIGH);
      mySerial.println("led on");
      
      }
      else if (data=='0'){
        digitalWrite(ledpin,LOW);
      mySerial.println("led off");
        }
    }

}
