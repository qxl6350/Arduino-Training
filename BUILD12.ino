/*
  RGB_LED_Color_Fade_Cycle.pde
  
  Cycles through the colors of a RGB LED
  Written for SparkFun Arduino Inventor's Kit CIRC-RGB
*/


// LED leads connected to PWM pins
const int RED_LED_PIN = 9;
const int GREEN_LED_PIN = 10;
const int BLUE_LED_PIN = 11;


int ledDigitalOne[] = {9, 10, 11};


int sensorPin = A0;

const int DISPLAY_TIME = 100;

// Used to store the current intensity level of the individual LEDs
int redIntensity = 0;
int greenIntensity = 0;
int blueIntensity = 0;

int setColor = (redIntensity, greenIntensity, blueIntensity);

int sensorValue = 0;

// Length of time we spend showing each color


void setup() {
  // No setup required.
    for(int i = 0; i < 3; i++){
   pinMode(ledDigitalOne[i], OUTPUT);   //Set the three LED pins as outputs
  }
  Serial.begin(9600);
}

void loop() {
    sensorValue = analogRead(sensorPin);
    Serial.println(sensorValue);
    /*
  // Cycle color from red through to green
  // (In this loop we move from 100% red, 0% green to 0% red, 100% green)
  for (greenIntensity = 0; greenIntensity <= 255; greenIntensity+=5) {
        redIntensity = 255-greenIntensity;
        analogWrite(GREEN_LED_PIN, greenIntensity);
        analogWrite(RED_LED_PIN, redIntensity);
        delay(DISPLAY_TIME);
  }
  // Cycle color from green through to blue
  // (In this loop we move from 100% green, 0% blue to 0% green, 100% blue)  
  for (blueIntensity = 0; blueIntensity <= 255; blueIntensity+=5) {
        greenIntensity = 255-blueIntensity;
        analogWrite(BLUE_LED_PIN, blueIntensity);
        analogWrite(GREEN_LED_PIN, greenIntensity);
        delay(DISPLAY_TIME);
  }
  // Cycle cycle from blue through to red
  // (In this loop we move from 100% blue, 0% red to 0% blue, 100% red)    
  for (redIntensity = 0; redIntensity <= 255; redIntensity+=5) {
        blueIntensity = 255-redIntensity;
        analogWrite(RED_LED_PIN, redIntensity);
        analogWrite(BLUE_LED_PIN, blueIntensity);
        delay(DISPLAY_TIME);
  }
  */
  


  if(sensorValue <= 255) {
    redIntensity = 255; 
    greenIntensity = sensorValue;
    blueIntensity= 0;
        analogWrite(GREEN_LED_PIN, greenIntensity);
        analogWrite(RED_LED_PIN, redIntensity);
        delay(DISPLAY_TIME);
  }
  if(255 <= sensorValue <= 510) {
    redIntensity = 255-(sensorValue-255); 
    greenIntensity = 255;
    blueIntensity= sensorValue-255;
        analogWrite(BLUE_LED_PIN, blueIntensity);
        analogWrite(GREEN_LED_PIN, greenIntensity);
        delay(DISPLAY_TIME);
  }
  if(510 <= sensorValue <= 765) {
    redIntensity = 0; 
    greenIntensity = 255-(sensorValue-510);
    blueIntensity= sensorValue-510;
        analogWrite(RED_LED_PIN, redIntensity);
        analogWrite(BLUE_LED_PIN, blueIntensity);
        delay(DISPLAY_TIME);
  }


  
}

