int currentState = 0;
int lastState = 0;
int counter = 0;
int outputA = 2;        // pin numbers for rotary encoder outputs A and B
int outputB = 3;
int x = 0;

// initialize button pins for all LED colors
int buttonPinRed = 4;
int buttonPinYellow = 5;
int buttonPinGreen = 6;

// initialize LED pin numbers
int ledPinRed = 10;
int ledPinYellow = 11;
int ledPinGreen = 12;

// initialize buttonstatuses for all colors
int buttonStatusRed = 0;
int buttonStatusYellow = 0;
int buttonStatusGreen = 0;


void setup() {
    Serial.begin(9600);                             // initialize serial for counter reading and pinmodes
    pinMode(buttonPinRed, INPUT);                   // for buttons and LEDs
    pinMode(buttonPinYellow, INPUT);
    pinMode(buttonPinGreen, INPUT);
    pinMode(ledPinRed, OUTPUT);
    pinMode(ledPinYellow, OUTPUT);
    pinMode(ledPinGreen, OUTPUT);
    lastState = digitalRead(outputA);               // reset the variable used in the rotary encoder
}
void shutAllLeds(){                                 // function to shutdown all leds
    digitalWrite(ledPinRed, HIGH);
    digitalWrite(ledPinYellow, HIGH);
    digitalWrite(ledPinGreen, HIGH);
}


void loop() {

    Serial.println(counter);
    shutAllLeds();
    currentState = digitalRead(outputA);            //Code to change the value depending on which way the rotary encoder was turned
    if(currentState != lastState){
        if(digitalRead(outputB) != currentState){   //If the state has changed we raise or lower the counter variable
            counter ++;
        }
        else{
            counter --;
        }
    }

    if (counter < 0){                               //We stop the value from going into negative because that would break the code
        counter = 0;
    }

    if(digitalRead(buttonPinRed) == LOW){           // depending which button is pressed, corresponding LED will light up
        x = 1;
    }
    if(digitalRead(buttonPinYellow) == LOW){
        x = 2;
    }
    if(digitalRead(buttonPinGreen) == LOW){
        x = 3;
    }


    if(x == 1){                                     // the value of the counter corresponds with the frequency of the LEDs flicker
        if(counter > 10){
            digitalWrite(ledPinRed, LOW);           // set the LEDs brightness to max when the flickering would be visible
        }                               
        else{
            digitalWrite(ledPinRed, LOW);
            delay(counter);
            digitalWrite(ledPinRed, HIGH);
            delay(counter);
        }
        digitalWrite(ledPinYellow, HIGH);
        digitalWrite(ledPinGreen, HIGH);
    }
    if(x == 2){                                     // same as previous but for the yellow led
        if(counter > 10){
            digitalWrite(ledPinYellow, LOW);
        }
        else{
            digitalWrite(ledPinYellow, LOW);
            delay(counter);
            digitalWrite(ledPinYellow, HIGH);
            delay(counter);
        }
        digitalWrite(ledPinRed, HIGH);
        digitalWrite(ledPinGreen, HIGH);
    }
    if(x == 3){                                     // and for the green led
        if(counter > 10){
            digitalWrite(ledPinGreen, LOW);
        }
        else{
            digitalWrite(ledPinGreen, LOW);
            delay(counter);
            digitalWrite(ledPinGreen, HIGH);
            delay(counter);
        }
        digitalWrite(ledPinYellow, HIGH);
        digitalWrite(ledPinRed, HIGH);
    }
    lastState = currentState;                       // set the lastState to the currentState so that the code runs properly when the loop starts again
}
