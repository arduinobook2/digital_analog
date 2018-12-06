
void setup()
{
}

void loop()
{
  int potentiometerValue = analogRead(A0);
  analogWrite(9, potentiometerValue);    
}
