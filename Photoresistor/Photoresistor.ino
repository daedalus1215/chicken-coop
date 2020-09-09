/*
* Written by Larry Adams
* 
* Copy of PHOTORESISTOR https://create.arduino.cc/projecthub/Ayeon0122/reading-a-photoresistor-1e705e
*/

// PINS
const int sensorPin = 0;
const int ledPin = 9;

// GLOBALS
int lightCal;
int lightVal;

void setup() {
  pinMode(ledPin, OUTPUT); 
  lightCal = analogRead(sensorPin); // initial input from light
}

void loop() {
  lightVal = analogRead(sensorPin);

  // If lightVal is less than our initial reading (lightCal) minus 50 is dark
  // and turn pin 9 HIGH. the (-50) part of the statement sets the sensitivity. 
  // The smaller the number the more sensitive the circuit will be to variances 
  // in light.
  if (lightVal < lightCal - 50) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

}
