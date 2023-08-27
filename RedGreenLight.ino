

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  #ifdef RGB_BUILTIN

  //digitalWrite(RGB_BUILTIN, LOW);    // Turn the RGB LED off
  //delay(50);
  neopixelWrite(RGB_BUILTIN,0,RGB_BRIGHTNESS,0); // Green
  delay(10000);
  neopixelWrite(RGB_BUILTIN,RGB_BRIGHTNESS,0,0); // Red
  delay(10000);


  neopixelWrite(RGB_BUILTIN,0,0,0); // Off / black
  delay(1000);
#endif

}
