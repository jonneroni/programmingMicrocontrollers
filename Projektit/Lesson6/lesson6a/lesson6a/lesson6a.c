#include <LiquidCrystal.h>

int tempPin = A0;
int lightPin = A2;
int buttonPin = 13;

int buttonStatus = 0;

//                BS E  D4 D5  D6  D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); 


void displayC() {
    // fucntions to calculate temeprature in Celsius
    int tempReading = analogRead(tempPin);
    float tempVolts = tempReading * 5.0 / 1024.0;
    float tempC = (tempVolts - 0.5) * 10;
    
    // Display temperature in Celsius
    lcd.setCursor(0,0);
    lcd.print("Temp         C  ");
    lcd.setCursor(6, 0);
    lcd.print(tempC);
}

void displayF() {
    // fucntions to calculate temeprature in Fahrenheit
    int tempReading = analogRead(tempPin);
    float tempVolts = tempReading * 5.0 / 1024.0;
    float tempC = (tempVolts - 0.5) * 10;
    float tempF = tempC * 9.0 / 5.0 + 32.0;

    // Display temperature in Fahrenheit
    lcd.setCursor(0,0);
    lcd.print("Temp         F  ");
    lcd.setCursor(6, 0);
    lcd.print(tempF);
}

// initialize serial, lcd screen, and the button pin input
void setup() {
    Serial.begin(9600);
    lcd.begin(16, 2);
    pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
    
    // create a buttonstatus check
    if (digitalRead(buttonPin) == 1) {
        if (buttonStatus == 0) {
            buttonStatus = 1;
        }
        else if (buttonStatus == 1) {
            buttonStatus = 0;
        }
    }

    if (buttonStatus == 1) {
        displayC();     // display temperature as Celsius
    }
    else if(buttonStatus == 0) {
        displayF();     // display temeprature as Fahrenheit
    }
  
    // Display Light on the second row
    int lightReading = analogRead(lightPin);
    lcd.setCursor(0, 1);
    lcd.print("Light           ");  
    lcd.setCursor(6, 1);
    lcd.print(lightReading);
    delay(500);
}