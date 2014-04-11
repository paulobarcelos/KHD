/* This program is the Thinker1 Buzzer Activity Two
      
    written by Thinkspace
    www.powerhousemuseum.com/thinkspace 
*/
 


//define pins
int potPin = 5; 
int buzzerPin = 3; 

//create a variable to hold the data we read in
int value = 0;

void setup()
{
  //turn the serial port on
  Serial.begin(115200);
  
  // initialize the Buzzer
  pinMode(buzzerPin, OUTPUT);  
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
      
      //map the function as PWM supports 100 to 354 not 0 to 1023
      
      
      //write the value to the buzzer
      
      
      //short delay before reading again
      delay(200); //short delay before reading again
  }
}
