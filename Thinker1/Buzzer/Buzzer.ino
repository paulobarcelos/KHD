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
  // initialize the Buzzer
  pinMode(buzzerPin, OUTPUT);  
}

void loop()
{

      // read the input pin
      value = analogRead(potPin);
      
      //map the function as PWM supports 100 to 354 not 0 to 1023
      value = map(value, 0, 1023, 100, 1000);
      
      //write the value to the buzzer
      tone(buzzerPin, value, 20);
      
      //short delay before reading again
      delay(100); //short delay before reading again
}
