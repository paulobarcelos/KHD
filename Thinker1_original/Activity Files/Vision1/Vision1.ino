/* This program is the Thinker1 Persistence of Vision Activities One and Two
      
    written by Thinkspace
    www.powerhousemuseum.com/thinkspace
*/

#define NUM_ELEM(x) (sizeof (x) / sizeof (*(x)))
    
// Variables for pins

int led1Pin = 8;
int led2Pin = 9;
int led3Pin = 10;
int led4Pin = 11;
int led5Pin = 12;
int led6Pin = 13;

//The word to display
int phrase[] = 
{
  0,0,0,0,0,0,
  
  0,0,0,0,0,0, //T
  0,0,0,0,0,1,
  1,1,1,1,1,1,
  0,0,0,0,0,1,
  0,0,0,0,0,0,
  
  0,0,0,0,0,0,//H
  1,1,1,1,1,1,
  0,0,1,1,0,0,
  0,0,1,1,0,0,
  1,1,1,1,1,1,
  0,0,0,0,0,0,
  
  0,0,0,0,0,0,
  1,0,0,0,0,1, //I
  1,1,1,1,1,1,
  1,0,0,0,0,1,
  0,0,0,0,0,0,
  
  0,0,0,0,0,0, //N
  1,1,1,1,1,1,
  0,0,0,1,1,0,
  0,0,1,1,0,0,
  1,1,1,1,1,1,
  0,0,0,0,0,0,
  
  0,0,0,0,0,0, //K
  1,1,1,1,1,1,
  0,0,1,1,0,0,
  0,1,0,0,1,0,
  1,0,0,0,0,1,
  0,0,0,0,0,0,

  0,0,0,0,0,0,

};

int ledPinArray[6] = {led1Pin,led2Pin,led3Pin,led4Pin,led5Pin,led6Pin};
// The setup() method runs once, when the sketch starts

int columnDelay;
int sizeWord = 0;

// setup pins for use
void setup()
{
  pinMode(led1Pin, OUTPUT); 
  pinMode(led2Pin, OUTPUT); 
  pinMode(led3Pin, OUTPUT); 
  pinMode(led4Pin, OUTPUT); 
  pinMode(led5Pin, OUTPUT);  
  pinMode(led6Pin, OUTPUT);  

  columnDelay = 2.5;
  sizeWord = NUM_ELEM(phrase);
}


// main loop which runs infinitly 
void loop()
{
  //display the word using the printword function.
  printWord(phrase);
  delay(8);
}


void printWord(int wordVar[]) 
{
  int numRows = sizeWord/6;
  for(int j = 0; j < numRows; j++) 
  {
    for(int i = 0; i<6; i++) 
    {
      digitalWrite(ledPinArray[i], wordVar[i+j*6]);
    }
    delay(columnDelay);
  }
} 

