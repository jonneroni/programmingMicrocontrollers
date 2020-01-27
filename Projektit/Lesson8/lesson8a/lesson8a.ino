int motorPin = 3;
int speed = 0;


void setup() { 
    pinMode(motorPin, OUTPUT);
    Serial.begin(9600);
} 

void loop() { 

    Serial.print("Current speed is ");
    Serial.println(speed);
    Serial.println("Set speed (0-255)");
   
    speed = Serial.parseInt();
    while(!Serial.available()){
        speed = Serial.parseInt();
    }
    if (speed >= 0 && speed <= 255){
        analogWrite(motorPin, speed);
    }
} 
