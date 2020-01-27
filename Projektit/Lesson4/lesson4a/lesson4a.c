 // set pin numbers:
const int ldrPin = A0;       // value of ldr sensor Pin
const int ledPin = 13;      // the number of the LED pin
int ldrReading;              // raw reading from the ldr sensor


void setup() {
  pinMode(ledPin, OUTPUT);    // initialize the LED pin as an output
  pinMode(ldrPin, INPUT);     // initialize the ldr sensor pin as an input
  Serial.begin(9600);         // initialize serial port
}

void loop() {
    ldrReading = analogRead(ldrPin);  // set raw reading from the sensor to a variable
    Serial.println(ldrReading);       // print the raw values to serial console

/*
 * if the sensors reading is under 20; keep the led off
 * if it's over 65; turn the led on
*/
 
  if (ldrReading < 20)               
  {
      digitalWrite(ledPin, LOW);
  }
  else if (ldrReading > 65)
  {
      digitalWrite(ledPin, HIGH);
  }
}