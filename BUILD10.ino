/*     ---------------------------------------------------------
 *     |  Arduino Experimentation Kit Example Code             |
 *     |  CIRC-10 .: Temperature :. (TMP36 Temperature Sensor) |
 *     ---------------------------------------------------------
 *   
 *  A simple program to output the current temperature to the IDE's debug window 
 * 
 *  For more details on this circuit: http://tinyurl.com/c89tvd 
 */

//TMP36 Pin Variables
int temperatureMode = 0;
int temperaturePin = 0; 
int inputPin1 = 1;
int inputPin2 = 2;
int inputPin3 = 3;
int ledPinY = 9;
int ledPinR = 10;
int val1 = 0;
int val2 = 0;
int val3 = 0;
int settemp = 75;
float temperature = 75;
int unitMode = 1;
/*
 * setup() - this function runs once when you turn your Arduino on
 * We initialize the serial connection with the computer
 */
void setup()
{
  pinMode(ledPinY, OUTPUT); // declare LED as output
  pinMode(ledPinR, OUTPUT);
  pinMode(inputPin1, INPUT); // declare pushbutton as input
  pinMode(inputPin2, INPUT);
  pinMode(inputPin3, INPUT);
  Serial.begin(9600);  //Start the serial connection with the copmuter
                       //to view the result open the serial monitor 
                       //last button beneath the file bar (looks like a box with an antenae)
}
 
void loop()  {                  // run over and over again
val1 = digitalRead(inputPin1);
val2 = digitalRead(inputPin2);
val3 = digitalRead(inputPin3);

if (temperatureMode = 1)
{
 temperature = getVoltage(temperaturePin);  //getting the voltage reading from the temperature sensor
 temperature = (((temperature - .5) * 100)*1.8) + 32;          //converting from 10 mv per degree wit 500 mV offset
                                                  //to degrees ((volatge - 500mV) times 100)
 Serial.print(temperature);  
 Serial.print(" ");
 Serial.print(settemp);
 Serial.print(" ");
 Serial.println(unitMode);//printing the result
 delay(300);                                     //waiting a second
}


if(val1 == LOW){
  settemp = settemp + 1;
  delay(100);
}

if(val2 == LOW){
  settemp = settemp - 1;
  delay(100);
}

if(val3 == LOW && unitMode == 1){
  unitMode = unitMode + 1 ;
  delay(500);
  digitalWrite(ledPinY, HIGH);
  delay(500);
  digitalWrite(ledPinY, LOW);
 }


else if (val3 == LOW && unitMode == 2){
  unitMode = unitMode - 1  ;
  delay(500);
  digitalWrite(ledPinR, HIGH);
  delay(500);
  digitalWrite(ledPinR, LOW);
  }


if(temperature - 3 > settemp && unitMode == 1){
  digitalWrite(ledPinY, HIGH);
  digitalWrite(ledPinR, LOW);
}

else if(temperature + 3 < settemp && unitMode == 2){
  digitalWrite(ledPinR, HIGH);
  digitalWrite(ledPinY, LOW);
}
else {
  digitalWrite(ledPinR, LOW);
  digitalWrite(ledPinY, LOW);
}
}



/*
 * getVoltage() - returns the voltage on the analog input defined by
 * pin
 */
float getVoltage(int pin){
 return (analogRead(pin) * .004882814); //converting from a 0 to 1023 digital range
                                        // to 0 to 5 volts (each 1 reading equals ~ 5 millivolts
}

