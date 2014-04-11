/* This program is the Thinker1 Push Button Activity Two
      
    written by Thinkspace
    www.powerhousemuseum.com/thinkspace
*/
 
// We have a button connected to digital pin 7

//define pins
int buttonPin = 7;
int ledPin = 10;

//variables
//boolean (or true/false) variables
boolean lastButton = LOW;
boolean ledOn = false;

void setup()
{
  //initialise LED pin
  pinMode(ledPin, OUTPUT);
  
  //initialise button pin
  pinMode(buttonPin, INPUT); 
  digitalWrite(buttonPin, HIGH);  
  
}

void loop()
{
  //read button value
  if (digitalRead(buttonPin) == HIGH && lastButton == LOW)
  {
    //This inverts (switches) value
    ledOn = !ledOn;
    //This stores the last button state
    lastButton = HIGH;
  }
  else
  {
    //reread the last button
    lastButton = digitalRead(buttonPin);
  }
  
  //This is the code that turns the LED on and off, it's not covered in our activity but still important
  if(ledOn)
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW);
}



