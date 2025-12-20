//this turns on the led when the button is pushed, and turns it off again when the button is pushed.

const int buttonPin = 2;
const int ledPin = 8;

int ledState = LOW;
int lastButtonState=HIGH;


void setup() {
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600); 
}

void loop() {

int buttonState = digitalRead(buttonPin);

if (lastButtonState == HIGH && buttonState == LOW){
  ledState = !ledState;
  digitalWrite(ledPin, ledState);
  delay(50);

    Serial.print("Button press, LED state = ");
    Serial.println(ledState);
}
lastButtonState = buttonState;
}
