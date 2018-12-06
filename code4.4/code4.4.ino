
void setup() 
{
  // initialize serial communication at 9600 bits per second:
  
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() 
{
   // read the input on analog pin 0:
  int potentiometerValue = analogRead(A0);
  
  // print out the value on serial monitor:
  Serial.println(potentiometerValue);
  delay(1);    
}
