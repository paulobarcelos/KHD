/* This program is the Thinker1 Light Sensor Activity Two
      
    written by Thinkspace
    www.powerhousemuseum.com/thinkspace
*/
 
// We have a photocell connected to analog pin 4

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
  Serial.begin(115200);
}

void loop()
{
  //test to make sure serial port is available before trying to read it
  while(Serial.available()==0)
  {
      // read the input pin
      value = analogRead(lightPin);
      
      // print the contents of the variable to the serial monitor
      Serial.println(value);
      
      //map the values 
      value = map(value, 362, 845, 0, 1);
      
      //use conditional statement to turn LEDs on and off 
      if(value==1)
      {
         digitalWrite(led1Pin, HIGH);
      }
      else
      {
        digitalWrite(led1Pin, LOW);
      }

      //short delay before reading again
      delay(25); 
  }
}
