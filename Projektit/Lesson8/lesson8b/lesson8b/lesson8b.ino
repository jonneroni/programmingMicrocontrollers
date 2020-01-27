#include <LiquidCrystal.h>

//                BS E  D4 D5  D6  D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); 

int motorPin = 3;
int speed = 0;
float speedPercentage = 0;
int currentState = 0;
int lastState = 0;
int counter = 0;
int outputA = 5;        // pin numbers for rotary encoder outputs A and B
int outputB = 6;


void setup() { 
    pinMode(motorPin, OUTPUT);
    Serial.begin(9600);
    lastState = digitalRead(outputA);
    lcd.begin(16,2);
} 

void loop() { 
    speedPercentage = (speed / 255.0) * 100.0;
    // Display speed (%)
    lcd.setCursor(0,0);
    lcd.print("Power         %");
    lcd.setCursor(9,0);
    lcd.print(speedPercentage, 1);
    delay(50);
    

    if (speed >= 0 && speed <= 255){
        analogWrite(motorPin, speed);
    }

    Serial.println(speed);    // print the counter value to serial console
    currentState = digitalRead(outputA);
    if(currentState > lastState){
        // if the rotary encoders position has changed increase or decrease the counter variable
        if(digitalRead(outputB) != currentState){   
            counter --;
        }
        else{
            counter ++;
        }
        speed = counter * 10;
    }

    if (counter < 0){                               // stop the counter from going negative in order for the code to run properly
        counter = 0;
    }

    if (speed >= 255) {
      speed = 255;
    }

    // set the lastState to currentState so that the code runs properly when the loop starts again

    lastState = currentState;
} 
