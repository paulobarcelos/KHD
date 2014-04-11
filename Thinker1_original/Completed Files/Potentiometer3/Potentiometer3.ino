/* This program is the Thinker1 Potentiometer Activity Three
      
    written by Thinkspace
    www.powerhousemuseum.com/thinkspace
*/
 
// We have a potentiometer connected to analog pin 5

//define pins
int potPin = 5; 
int led1Pin = 10;
int led2Pin = 11;

//create a variable to hold the data we read in
int value = 0;

void setup()
{
  // initialize the LED pins as digital outputs
  pinMode(led1Pin, OUTPUT); 
  pinMode(led2Pin, OUTPUT);
  
  //turn the serial port on
  Serial.begin(115200);
}

void loop()
{
  //test to make sure serial port is available before trying to read it
  while(Serial.available()==0)
  {
      // read the input pin
      value = analogRead(potPin);
      
      // print the contents of the variable to the serial monitor
      Serial.println(value);
      
      //map the values for PWM
      value = map(value, 0, 1023, 0, 1);
      
      //use if statement to turn LEDs on and off
      if(value == 1)
      {
        digitalWrite(led1Pin, HIGH);
        digitalWrite(led2Pin, LOW);
      }
      else
      {
        digitalWrite(led1Pin, LOW);
        digitalWrite(led2Pin, HIGH);
      }
      
      //short delay before reading again
      delay(25); 
  }
}
