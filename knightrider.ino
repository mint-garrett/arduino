//knight rider
int leds[] = {2,3,4,5,6,7};

void setup() {
    for(int i=0; i<6; i++) 
    {
        pinMode(leds[i], OUTPUT);
    }
}

void loop() {
  ///leds transitioning forward
  for (int i=0; i<6; i++)
    {
        digitalWrite(leds[i], HIGH);
        delay(150);
        digitalWrite(leds[i],LOW);
    }
  //leds transitioning backward
  for (int i=5; i>=0; i--)
  {
     digitalWrite(leds[1],HIGH);
    delay(150);
    digitalWrite(leds[i],LOW);
    }  
}
