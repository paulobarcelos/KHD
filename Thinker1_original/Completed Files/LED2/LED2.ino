/* This program is the Thinker1 LEDs Activity Two
      
    written by Thinkspace
    www.powerhousemuseum.com/thinkspace
*/
 
// Setup LED variables
int led1Pin = 13;
int led2Pin = 12;

// the setup routine runs once when the thinker1 is switched on
void setup() 
{                
  // Set LED pins as digital outputs
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);  
}

// the loop routine runs forever
void loop() 
{
  // Turn the LEDs on and off 
  digitalWrite(led1Pin, HIGH);   // turn the LED on (HIGH means on)
  digitalWrite(led2Pin, HIGH);
  delay(1000);               // wait for a 1000 milliseconds
  digitalWrite(led1Pin, LOW);    // turn the LED off (LOW means off)
  digitalWrite(led2Pin, LOW);
  delay(1000);               // wait for a second milliseconds
}
