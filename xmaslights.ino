//introducting led pins, button pin and mode
int red = 13, green = 11, white = 8;
int button = 2;
int mode = 0;
//timers and states for random twinkling
unsigned long redTimer = 0, greenTimer = 0, whiteTimer = 0;
int redState = LOW, greenState = LOW, whiteState = LOW;


void setup() {
  pinMode(red, OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  randomSeed(analogRead(0));
}

void loop() {
  int button = digitalRead(2);
  static int lastButton = HIGH;
  if (button==LOW && lastButton == HIGH) {
    mode = (mode+1) % 3; //cycles from 0 to 1 to 2
  }
  lastButton = button;

  switch(mode) {
    
    case 0: //all leds are on
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(white, HIGH);
    delay(500);
    break;

    case 1: //leds change sequentially
    digitalWrite(red, HIGH);
    delay(500);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(500);
    digitalWrite(green, LOW);
    digitalWrite(white,HIGH);
    delay(500);
    digitalWrite(white,LOW);
    break;

    case 2: //all lights flicker randomly and independently  
    unsigned long now = millis();
    if (now - redTimer > random(200,800)) {
      redState = !redState;
      digitalWrite(red, redState);
      redTimer = now;}  
    if (now - greenTimer > random(200,800)) {
      greenState = !greenState;
      digitalWrite(green, greenState);
      greenTimer = now;}    
    if (now - whiteTimer > random(200,800)) {
      whiteState = !whiteState;
      digitalWrite(white,whiteState);
      whiteTimer = now;}
      break;
  }
}
