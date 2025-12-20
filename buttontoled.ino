//this makes an led turn on when you push the button

const int buttonPin = 4;
const int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int state = digitalRead(buttonPin);
  
  if (state == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
