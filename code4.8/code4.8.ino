//It's a good practice to set unchangable value constant.
const int RED = 9;
const int GREEN = 10;
const int BLUE = 11;
const int MINRANDOM = 50;
const int MAXRANDOM = 255; 

int redBrightness;
int blueBrightness;
int greenBrightness;


void setup()
{
}

void loop() 
{
  //pass parameter to random() and set the value to variables.
  
  redBrightness = random(MINRANDOM, MAXRANDOM);
  greenBrightness = random(MINRANDOM, MAXRANDOM);
  blueBrightness = random(MINRANDOM, MAXRANDOM);

  analogWrite(RED, redBrightness);
  analogWrite(GREEN, greenBrightness);
  analogWrite(BLUE, blueBrightness);

  delay(1000);
}
