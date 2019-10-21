int sensorValue=0;
void setup()
{
  Serial.begin(9600);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(12, OUTPUT);
}

void loop()
{
  sensorValue= analogRead(A0);
 Serial.println(sensorValue);
  int reading= digitalRead(8);
  delay(100);
  if(reading==HIGH && sensorValue<=480)
  { 
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
  }
  else if(reading==HIGH && sensorValue>480)
  {digitalWrite(12,HIGH);}
  else
  {digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
  }
}
