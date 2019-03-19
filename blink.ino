

int sensorPin = A0;
int led=5;

void setup(){ 
  Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(5,OUTPUT);
  
}

void loop() {int sensorValue,y;
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);    
  Serial.println(sensorValue);
  y=(sensorValue/4);
  //y=map(y,100,1000,0,255);
  Serial.println(y);
  analogWrite(led,y);                 
}
