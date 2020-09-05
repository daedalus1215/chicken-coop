// Example 01: Blinking IDE

#define FIVE_SECONDS 5000
#define port13 13

void setup() {
  pinMode(port13, OUTPUT);
}

void loop() {
    turnLightOn();
    stopForFiveSeconds();
    turnLightOff();
    stopForFiveSeconds();
}

void turnLightOn() {
  digitalWrite(port13, HIGH);
}

void turnLightOff() {
      digitalWrite(port13, LOW);
}

void stopForFiveSeconds() {
      delay(FIVE_SECONDS);
}
