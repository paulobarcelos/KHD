/* This program is the Thinker1 Light Sensor Activity One
      
    written by Thinkspace
    www.powerhousemuseum.com/thinkspace
*/
 

//define pins
int lightPin = 4; 
int led1Pin = 10;


//create a variable to hold the data we read in
int value = 0;

void setup()
{
  // initialize the LED pins as digital outputs
  pinMode(led1Pin, OUTPUT); 
  
  //turn the serial port on
  
}

void loop()
{
  //test to make sure serial port is available before trying to read it
  while(Serial.available()==0)
  {
      // read the input pin
     
     
      // print the contents of the variable to the serial monitor
      

      //short delay before reading again
      delay(25); 
  }
}
