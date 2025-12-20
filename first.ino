
void setup(){
  // put your setup code here, to run once:
int ledPin=13;
pinMode(ledPin,OUTPUT);
int ledPin2 = 12;
pinMode(ledPin2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
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
