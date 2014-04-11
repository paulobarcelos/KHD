/* This program is the Thinker1 Potentiometer Activity One
      
    written by Thinkspace
    www.powerhousemuseum.com/thinkspace
*/
 
// We have a potentiometer connected to analog pin 5

//define pins
int potPin = 5; 

//create a variable to hold the data we read in
int value = 0;

void setup()
{
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
