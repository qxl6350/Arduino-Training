/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
  The circuit:
 * LED connected from digital pin 13 to ground.
  * Note: On most Arduino boards, there is already an LED on the board
 connected to pin 13, so you don't need any extra components for this example.
  
 Created 1 June 2005
 By David Cuartielles
 http://arduino.cc/en/Tutorial/Blink
 based on an orginal by H. Barragan for the Wiring i/o board
 */
 #include <Servo.h> 

Servo myservo;   // Relay connected to digital pin 2   <-----Change this to pin 2
int pos = 0;

int ledPin =  2;    // Relay connected to digital pin 2   <-----Change this to pin 2

// The setup() method runs once, when the sketch starts

void setup()   {                
  // initialize the digital pin as an output:
  pinMode(ledPin, OUTPUT);     
    myservo.attach(9); 
    
}

// the loop() method runs over and over again,
// as long as the Arduino has power

void loop()                     
{
  digitalWrite(ledPin, HIGH);   // set the LED on
  delay(1000);                  // wait for a second
  digitalWrite(ledPin, LOW);    // set the LED off
  delay(1000);                  // wait for a second
    for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}
r
