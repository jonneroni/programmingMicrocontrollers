float input = 0.0;
float wait = 0.0;
float wait2 = 0.0;
float multi = 2.0;
int x = 1;
int led = 7;

void setup() {
  Serial.begin(9600); // initialize serial
  pinMode(led, OUTPUT);
  Serial.println("Input a value");
  while(!Serial.available()){
    input = Serial.parseFloat();
    delay(100);
  }
  input = input * multi;
  wait2 = input * -1;
}

void loop() {
  // put your main code here, to run repeatedly:
  
  while(wait < input){
    wait = wait + 0.05;
    Serial.println(wait);
    digitalWrite(led, HIGH);
    delay(wait);
    digitalWrite(led, LOW);
    delay(wait);
  }
  while(wait > 0.1){
    wait = wait-0.05;
    Serial.println(wait);
    digitalWrite(led,HIGH);
    delay(wait);
    digitalWrite(led, LOW);
    delay(wait);
  }
}
