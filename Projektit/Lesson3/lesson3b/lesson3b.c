int button = 0;
int oldbutton = 0;
int buttonPin = 2;
int ledPin = 11;
// variables to hold button and LED status
boolean newButtonState = LOW;
boolean oldButtonState = LOW;
boolean ledStatus = LOW;


// initialize pinmodes for button and LED
void setup() {
    Serial.begin(9600);
    pinMode(buttonPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    newButtonState = digitalRead(buttonPin);
 
    if (newButtonState != oldButtonState) 
    {
       // has the button button been pressed?
        if (newButtonState == HIGH) {
            if (ledStatus == LOW) { 
               digitalWrite(ledPin, HIGH);  
               ledStatus = HIGH; 
            }
            else { 
            digitalWrite(ledPin, LOW);
            ledStatus = LOW;  
            }
       }
       oldButtonState = newButtonState;
    }
}