int co_sensor = A0;


void setup()

{
  pinMode(13,OUTPUT);
  pinMode(co_sensor,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int reading;
  
  reading = analogRead(co_sensor);
  Serial.println(reading);
  if(reading  >= 1000)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
}
