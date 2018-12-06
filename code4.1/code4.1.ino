
const int LED9 = 9;

void setup() 
{
  //There is no need to setup pinmode() while working
  //With analogWrite();

}

void loop()
{
  analogWrite(LED9, 127);
}
