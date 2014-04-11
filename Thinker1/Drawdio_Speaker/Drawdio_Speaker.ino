
//define pins
int buzzerPin = 2;
int sensorPin = 2;

float smoothValue = 0;
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
  for(int i = 0; i <                  6; i++){
    pinMode(ledPins[i], OUTPUT);  
  }  
}

void loop(){
    float value = analogRead(sensorPin);
    smoothValue = smoothValue * 0.8 + value * 0.2;
    
    if(smoothValue > 1024) smoothValue = 800;
    if(smoothValue < 0) smoothValue = 0;
    
    if(smoothValue < 30){
      noTone(buzzerPin);
      ledOn(0);
      delay(5);
      return;
    }
    sensorValue = (float)smoothValue / 800.f;
    
    leds = 7 * sensorValue;
    ledOn(leds);
    
    sensorValue *= sensorValue;
    freq = sensorValue * 5000.f;
    tone(buzzerPin, freq);
    
    delay(5);
}

void ledOn(int total){
   for(int i = 0; i < 6; i++){
      digitalWrite(ledPins[i], LOW); 
    }
    for(int i = 0; i < total ; i++){
      digitalWrite(ledPins[i], HIGH); 
    }
}
