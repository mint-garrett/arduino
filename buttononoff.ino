const int buttonPin = 2;
const int ledPin = 8;

int ledState = LOW;
int lastButtonState=HIGH;


void setup() {
 // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
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
