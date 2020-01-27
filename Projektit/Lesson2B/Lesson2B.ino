 // set pin numbers:
int buttonPin = 2;     // the number of the pushbutton pin
int led =  10    ;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(led, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(650);                // wait for 650ms
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(150);                // wait for 150ms
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(650);                // wait for 650ms
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(150);                // wait for 150ms
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(650);                // wait for a second
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(150);                // wait for 150ms


    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1200);               // wait for 1,2 seconds
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(150);                // wait for 150ms
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1200);               // wait for 1,2 seconds
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(150);                // wait for 150ms
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1200);               // wait for 1,2 seconds
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(150);                // wait for 150ms

    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(650);                // wait for 650ms
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(150);                // wait for 150ms
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(650);                // wait for 650ms
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(150);                // wait for 150ms
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(650);                // wait for 650ms
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
                               // wait for 2 secconds before starting the loop again
    
 } else {
    digitalWrite(led, LOW);    // turn LED off
  }
}
