/* This program is the Thinker1 Push Button Activity One
      
    written by Thinkspace
    www.powerhousemuseum.com/thinkspace
*/
 
// We have a button connected to digital pin 7

//define pins
int buttonPin = 7;
int led1Pin = 10;

//variables
int buttonState = 0;


void setup()
{
  //initialise LED pin
  pinMode(led1Pin, OUTPUT);
  
  //initialise button pin
  pinMode(buttonPin, INPUT); 
  digitalWrite(buttonPin, HIGH);
}


void loop()
{
  //read in button value
  buttonState = digitalRead(buttonPin);
  
  //turn the LED on and off
  if (buttonState)
  {
    digitaWrite(led1Pin, HIGH);
  }
  else
  {
    digitaWrite(led1Pin, LOW);
  }
}



