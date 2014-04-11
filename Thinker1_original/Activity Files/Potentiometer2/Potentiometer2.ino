/* This program is the Thinker1 Potentiometer Activity Two
 
    written by Thinkspace
    www.powerhousemuseum.com/thinkspace
*/

// We have a potentiometer connected to analog pin 5
// Pins that support PWM are 3,5,6,9,10,11

//define pins
int potPin = 5; 
int ledPin = 11; 

//create a variable to hold the data we read in
int value = 0;

void setup()
{
  //turn the serial port on
  Serial.begin(115200);
  
  // initialize the LED pins as digital outputs
  pinMode(ledPin, OUTPUT);  
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
   
    
    //write the value to the LED
    
    
    //short delay before reading again
    delay(25); 
  }
}

