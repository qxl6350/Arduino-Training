/* Blink
* Turns on an LED on for one second, then off for one second,
* repeatedly.
* Created 1 June 2005 By David Cuartielles
* http://arduino.cc/en/Tutorial/Blink
* based on an orginal by H. Barragan for the Wiring i/o board
*/
int ledPin = 9; // LED connected to digital pin 13
// The setup() method runs once, when the sketch starts
void setup() { // initialize the digital pin as an output:
pinMode(ledPin, OUTPUT); }
// the loop() method runs over and over again,
// as long as the Arduino has power
void loop() {
analogWrite(ledPin, 50);; // set the LED on
delay(500); // wait for a second
analogWrite(ledPin, 0);; // set the LED off
delay(500); // wait for a second
}
