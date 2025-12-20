//this batch of code makes two leds blink at different time intervals


void setup(){
  
int ledPin=13;
pinMode(ledPin,OUTPUT);
  
int ledPin2 = 12;
pinMode(ledPin2, OUTPUT);
}

void loop() {
  
int ledPin=13;
int ledPin2=12;

digitalWrite(ledPin, HIGH);
delay(1000);
digitalWrite(ledPin, LOW);
delay(1000);

digitalWrite(ledPin2, HIGH);
delay(500);
digitalWrite(ledPin2, LOW);
delay(500);
}
