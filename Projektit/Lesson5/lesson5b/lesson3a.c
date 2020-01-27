int ledPin = A2; // initialize the ledpin to be 7
float timeInput = 0.0; // how long it takes for the led to be bright
float freq = 0.0; // initialize the frequency to 500ms
float freqChanger = 0.0;

void setup() {

Serial.begin(9600);
pinMode(ledPin, OUTPUT);

Serial.println("Input the time period between 1s and 5s.");
    while (!Serial.available()) {
        timeInput = Serial.parseFloat();
        Serial.println(timeInput);
    }
}

void loop() {

    
    while (freq < timeInput) {
        freq = freq + 0.05;
        digitalWrite(ledPin, HIGH); //the led turns on
        delay(freq); // wait for the time indicated by the variable frec.
        digitalWrite(ledPin, LOW); // the led turns off
        delay(freq);
        Serial.println(freq);
        if (freq == timeInput) {
          break;
        }
    }
    while (freq >= 0) {
        freq = freq - 0.05;
        digitalWrite(ledPin, HIGH); //the led turns on
        delay(freq); //wait for the time indicated by the variable frec.
        digitalWrite(ledPin, LOW); // the led turns off
        delay(freq);
        Serial.println(freq);
    }
}