int const trigPin = 13;
int const echoPin = 12;
void setup()
{
  Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}
void loop()
{

int duration, distance;
digitalWrite(trigPin, HIGH);
delay(1);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration*0.0343)/2;
Serial.print(distance);
Serial.print("\n");
if (distance<=30){
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  analogWrite(11,255);
  Serial.print("MAX SPEED");
}
else{
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  analogWrite(11,100);
  Serial.print("LOW SPEED");
  
  }
if (distance>300){
  Serial.print("Out Of Range");
  }
delay(2000);
}
