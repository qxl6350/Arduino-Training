/*
* Button
* by DojoDave <http://www.0j0.org>
*
* Turns on and off a light emitting diode(LED) connected to digital
* pin 13, when pressing a pushbutton attached to pin 7.
* http://www.arduino.cc/en/Tutorial/Button
*/
int ledPinY = 13; // choose the pin for the LED
int ledPinR = 12;
int inputPin1 = 1; // choose the input pin (for a pushbutton)
int inputPin2 = 2;
int inputPin3 = 3;
int inputPin4 = 4;
int val1 = 0; // variable for reading the pin status
int val2 = 0;
int val3 = 0;
int val4 = 0;
int count = 0;
int password[4];
int correctpassword[] = {2, 1, 3, 4};



void setup() {
pinMode(ledPinY, OUTPUT);
pinMode(ledPinR, OUTPUT);// declare LED as output
pinMode(inputPin1, INPUT); 
pinMode(inputPin2, INPUT);
pinMode(inputPin3, INPUT);
pinMode(inputPin4, INPUT);// declare pushbutton as input
Serial.begin(9600);
}
void loop(){
digitalWrite(ledPinY, LOW);
digitalWrite(ledPinR, LOW);
val1 = digitalRead(inputPin1); 
val2 = digitalRead(inputPin2);
val3 = digitalRead(inputPin3);
val4 = digitalRead(inputPin4);// read input value

if (count > 4) {
  count == 0;
}
if(val1 == LOW){
password[count] = 1;
count = count + 1;
digitalWrite(ledPinR, HIGH);
delay(500);
}



if(val2 == LOW){
password[count] = 2;
count = count + 1;
digitalWrite(ledPinR, HIGH);
delay(500);
}


if(val3 == LOW){
password[count] = 3;
count = count + 1;
digitalWrite(ledPinR, HIGH);
delay(500);
}



if(val4 == LOW){
password[count] = 4;
count = count + 1;
digitalWrite(ledPinR, HIGH);
delay(500);
Serial.print(password[0]);
Serial.print(password[1]);
Serial.print(password[2]);
Serial.println(password[3]);

}


if (password[0] == correctpassword[0] && password[1] == correctpassword[1] && password[2] == correctpassword[2] && password[3] == correctpassword[3]  ){
  digitalWrite(ledPinR, LOW);
  digitalWrite(ledPinY, HIGH);
}
else {
  digitalWrite(ledPinR, HIGH);
}




delay(500);


}






