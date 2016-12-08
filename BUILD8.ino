int sensorPin = 0; // select the input pin for the potentiometer
int ledPin[] = {2,3,4,5,6,7,8,9};
int sensorValue = 0; // variable to store the value coming from the sensor
void setup() {
  
  //Set each pin connected to an LED to output mode (pulling high (on) or low (off)
  for(int i = 0; i < 8; i++){         //this is a loop and will repeat eight times
      pinMode(ledPin[i],OUTPUT); //we use this to set each LED pin to output
                                     //the code this replaces is below
 
}
}

void loop() {
sensorValue = analogRead(sensorPin);// read the value from the sensor:

if (sensorValue < 125*1) {
  digitalWrite(ledPin[0],LOW);
  digitalWrite(ledPin[1],LOW);
  digitalWrite(ledPin[2],LOW);
  digitalWrite(ledPin[3],LOW);
  digitalWrite(ledPin[4],LOW);
  digitalWrite(ledPin[5],LOW);
  digitalWrite(ledPin[6],LOW);
  digitalWrite(ledPin[7],LOW);
}

if (sensorValue > 125*1) {
  digitalWrite(ledPin[0],HIGH);
  digitalWrite(ledPin[1],LOW);
  digitalWrite(ledPin[2],LOW);
  digitalWrite(ledPin[3],LOW);
  digitalWrite(ledPin[4],LOW);
  digitalWrite(ledPin[5],LOW);
  digitalWrite(ledPin[6],LOW);
  digitalWrite(ledPin[7],LOW);
}

if (sensorValue > 125*2) {
  digitalWrite(ledPin[0],HIGH);
  digitalWrite(ledPin[1],HIGH);
  digitalWrite(ledPin[2],LOW);
  digitalWrite(ledPin[3],LOW);
  digitalWrite(ledPin[4],LOW);
  digitalWrite(ledPin[5],LOW);
  digitalWrite(ledPin[6],LOW);
  digitalWrite(ledPin[7],LOW);
}

if (sensorValue > 125*3) {
  digitalWrite(ledPin[0],HIGH);
  digitalWrite(ledPin[1],HIGH);
  digitalWrite(ledPin[2],HIGH);
  digitalWrite(ledPin[3],LOW);
  digitalWrite(ledPin[4],LOW);
  digitalWrite(ledPin[5],LOW);
  digitalWrite(ledPin[6],LOW);
  digitalWrite(ledPin[7],LOW);
}

if (sensorValue > 125*4) {
  digitalWrite(ledPin[0],HIGH);
  digitalWrite(ledPin[1],HIGH);
  digitalWrite(ledPin[2],HIGH);
  digitalWrite(ledPin[3],HIGH);
  digitalWrite(ledPin[4],LOW);
  digitalWrite(ledPin[5],LOW);
  digitalWrite(ledPin[6],LOW);
  digitalWrite(ledPin[7],LOW);
}

if (sensorValue > 125*5) {
  digitalWrite(ledPin[0],HIGH);
  digitalWrite(ledPin[1],HIGH);
  digitalWrite(ledPin[2],HIGH);
  digitalWrite(ledPin[3],HIGH);
  digitalWrite(ledPin[4],HIGH);
  digitalWrite(ledPin[5],LOW);
  digitalWrite(ledPin[6],LOW);
  digitalWrite(ledPin[7],LOW);
}

if (sensorValue > 125*6) {
  digitalWrite(ledPin[0],HIGH);
  digitalWrite(ledPin[1],HIGH);
  digitalWrite(ledPin[2],HIGH);
  digitalWrite(ledPin[3],HIGH);
  digitalWrite(ledPin[4],HIGH);
  digitalWrite(ledPin[5],HIGH);
  digitalWrite(ledPin[6],LOW);
  digitalWrite(ledPin[7],LOW);
}

if (sensorValue > 125*7) {
  digitalWrite(ledPin[0],HIGH);
  digitalWrite(ledPin[1],HIGH);
  digitalWrite(ledPin[2],HIGH);
  digitalWrite(ledPin[3],HIGH);
  digitalWrite(ledPin[4],HIGH);
  digitalWrite(ledPin[5],HIGH);
  digitalWrite(ledPin[6],HIGH);
  digitalWrite(ledPin[7],LOW);
}

if (sensorValue > 125*8) {
  digitalWrite(ledPin[0],HIGH);
  digitalWrite(ledPin[1],HIGH);
  digitalWrite(ledPin[2],HIGH);
  digitalWrite(ledPin[3],HIGH);
  digitalWrite(ledPin[4],HIGH);
  digitalWrite(ledPin[5],HIGH);
  digitalWrite(ledPin[6],HIGH);
  digitalWrite(ledPin[7],HIGH);
}

delay(200);

}
