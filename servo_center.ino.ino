#include <Servo.h>

Servo servo11;
int position = 0;
void setup() {
  // put your setup code here, to run once:
  servo11.attach(11);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo11.write(0);
  delay(1000);
  for (position = 0; position <= 180; position +=1 )
  {
    servo11.write(position);
    delay(100);
  }
}
