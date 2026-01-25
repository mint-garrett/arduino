void setup() {
  // int pin vars and set them as outputs
  int pin_3 = 3;
  int pin_6 = 6;
  int pin_9 = 9;
  pinMode(pin_3, OUTPUT);
  pinMode(pin_6, OUTPUT);
  pinMode(pin_9, OUTPUT);
}

void loop() {
  // reintroduce pin vars
  int pin_3  = 3;
  int pin_6 = 6;
  int pin_9 = 9;

  //start pin 3 led brightening
  analogWrite(pin_3, 10);
  delay(100);
  analogWrite(pin_3, 50);
  delay(100);
  analogWrite(pin_3,100);
  delay(100);
  analogWrite(pin_3, 150);
  delay(100);
  analogWrite(pin_3, 200);
  delay(300);

  //pin 6 brightening
  delay(50);
  analogWrite(pin_6, 10);
  delay(100);
  analogWrite(pin_6, 50);
  delay(100);
  analogWrite(pin_6,100);
  delay(100);
  analogWrite(pin_6, 150);
  delay(100);
  analogWrite(pin_6, 200);
  delay(300);

  // pin 9 brightening

  delay(100);
  analogWrite(pin_9, 10);
  delay(100);
  analogWrite(pin_9, 50);
  delay(100);
  analogWrite(pin_9,100);
  delay(100);
  analogWrite(pin_9, 150);
  delay(100);
  analogWrite(pin_9, 200);
  delay(300);
} 
