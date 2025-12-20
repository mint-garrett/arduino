const int buttonPin = 4;
const int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // use internal pull-up
}

void loop() {
  int state = digitalRead(buttonPin);

  if (state == LOW) {        // pressed (connected to GND)
    digitalWrite(ledPin, HIGH);
  } else {                   // not pressed
    digitalWrite(ledPin, LOW);
  }
}
