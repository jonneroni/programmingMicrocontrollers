/* Task 1
Jonne Kaajalahti, Anton Leinonen
*/

int motorPin = 3;
int speed = 0;
int currentState = 0;
int lastState = 0;
// int counter = 0;
int outputA = 5;        // pin numbers for rotary encoder outputs A and B
int outputB = 6;


void setup() { 
    pinMode(motorPin, OUTPUT);
    Serial.begin(9600);
    lastState = digitalRead(outputA);
} 

void loop() { 

    Serial.println("Speed 0 to 255");
    speed = Serial.parseInt();
    while(!Serial.available()){
        speed = Serial.parseInt();
    }
    if (speed >= 0 && speed <= 255){
        analogWrite(motorPin, speed);
    }


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
} 




