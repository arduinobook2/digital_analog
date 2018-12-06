int ledPin = 9;
int fadeValue;

void setup()
{
}

void loop() 
{  
  for (fadeValue = 0 ; fadeValue <= 255; fadeValue += 5)
  {
    analogWrite(ledPin, fadeValue);
    delay(30);
  }

  for (fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5)
  {
    analogWrite(ledPin, fadeValue);
    delay(30);
  }
}
