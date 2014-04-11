
//define pins
int buzzerPin = 3;
int sensorPin = 4;

float sensorValue;
float freq = 0;

int led1Pin = 8;
int led2Pin = 9;
int led3Pin = 10;
int led4Pin = 11;
int led5Pin = 12;
int led6Pin = 13;
int leds = 0;
int ledPins[] = {
  8,9,10,11,12,13
};

void setup(){
  pinMode(buzzerPin, OUTPUT);
  for(int i = 0; i < 6; i++){
    pinMode(ledPins[i], OUTPUT);  
  }  
}

int count = 0;
void loop(){
  
    count++;
    if(count > 9999)count=0;
    ledOn(0);
    int value = analogRead(sensorPin);
    value = map(value, 550, 820, 0, 1024);
    if(value < 5){
      noTone(buzzerPin);
      return;
    }
    sensorValue = (float)value / 1024.f;
    sensorValue = sensorValue * sensorValue * sensorValue;
    leds = 7 * sensorValue;
    if(count % 6 == 0) ledOn(leds);
    
    
    freq = sensorValue * 5000.f;
    tone(buzzerPin, freq);
    delay(1);
 
}

void ledOn(int total){
   for(int i = 0; i < 6; i++){
      digitalWrite(ledPins[i], LOW); 
    }
    for(int i = 0; i < total ; i++){
      digitalWrite(ledPins[i], HIGH); 
    }
}
