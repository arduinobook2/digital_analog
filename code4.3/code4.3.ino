
const int LED_PIN = 7;

void setup() 
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_PIN, HIGH);   
  delayMicroseconds(60);                       
  digitalWrite(LED_PIN, LOW);   
  delayMicroseconds(40);                
}
