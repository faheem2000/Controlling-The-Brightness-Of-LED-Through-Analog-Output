const int ledPin = 6; // PWM pin

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Increase brightness
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledPin, brightness);
    delay(10); // Adjust the delay for desired speed of change
  }
  
  // Decrease brightness
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(ledPin, brightness);
    delay(10); // Adjust the delay for desired speed of change
  }
}
