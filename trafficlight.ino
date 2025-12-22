// this is a basic "traffic light" pattern that makes a red, yellow and green led light up for 5 seconds each


void setup() {
  int red = 13, yellow = 12, green = 11;
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int red = 13, yellow = 12, green = 11;
  //red turning on and off
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(red, LOW);
  //yellow turning on and off
  digitalWrite(yellow, HIGH);
  delay(5000);
  digitalWrite(yellow, LOW);
  //green turning on/off
  digitalWrite(green,HIGH);
  delay(5000);
  digitalWrite(green,LOW);

}
