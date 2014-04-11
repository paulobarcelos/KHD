/* This program is the Thinker1 Buzzer Activity One
      
    written by Thinkspace
    www.powerhousemuseum.com/thinkspace
*/
 

//define pins
int buzzerPin = 3;

void setup()
{
  // initialize the buzzer pin as digital outputs
  pinMode(buzzerPin, OUTPUT); 

}

void loop()
{
  //play a tone with the buzzer
  tone(buzzerPin, 659, 20);
  
  //wait before playing again
  delay(200);
}
