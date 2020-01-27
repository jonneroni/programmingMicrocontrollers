const int A_LED = 2;
const int B_LED = 8;
const int C_LED = 6;
const int D_LED = 5;
const int E_LED = 4;
const int F_LED = 3;
const int G_LED = 7;

// function to shut down all ShutAllLeds

void ShutAllLeds()
  {
    digitalWrite(D_LED, HIGH);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, HIGH);
    digitalWrite(A_LED, HIGH);
    digitalWrite(G_LED, HIGH);
    digitalWrite(C_LED, HIGH);
    digitalWrite(B_LED, HIGH);
  }

// functions for all numbers
void Number0() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, LOW);
    digitalWrite(F_LED, LOW);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, HIGH);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW);
    delay(250);
}

void Number1() {
    digitalWrite(D_LED, HIGH);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, HIGH);
    digitalWrite(A_LED, HIGH);
    digitalWrite(G_LED, HIGH);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW);
    delay(250);
}

void Number2() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, LOW);
    digitalWrite(F_LED, HIGH);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, HIGH);
    digitalWrite(B_LED, LOW);
    delay(250);
}

void Number3() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, HIGH);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW); 
    delay(250);
}

void Number4() {
    digitalWrite(D_LED, HIGH);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, LOW);
    digitalWrite(A_LED, HIGH);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW);
    delay(250);
}

void Number5() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, LOW);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, HIGH);
    delay(250);
}

void Number6() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, LOW);
    digitalWrite(F_LED, LOW);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, HIGH);
    delay(250);
}

void Number7() {
    digitalWrite(D_LED, HIGH);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, HIGH);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, HIGH);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW);
    delay(250);
}

void Number8() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, LOW);
    digitalWrite(F_LED, LOW);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW);
    delay(250);
}

void Number9() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, LOW);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW);
    delay(250);
}

void setup() {
  Serial.begin(9600);     // initialize serial port
  pinMode(A_LED,OUTPUT);  // setup led pinmodes as outputs
  pinMode(B_LED,OUTPUT);
  pinMode(C_LED,OUTPUT);
  pinMode(D_LED,OUTPUT);
  pinMode(E_LED,OUTPUT);
  pinMode(F_LED,OUTPUT);
  pinMode(G_LED,OUTPUT);
}

// display numbers from 0 to 9 in a loop

void loop() {
  Number0();
  ShutAllLeds();
  Number1();
  ShutAllLeds();
  Number2();
  ShutAllLeds();
  Number3();
  ShutAllLeds();
  Number4();
  ShutAllLeds();
  Number5();
  ShutAllLeds();
  Number6();
  ShutAllLeds();
  Number7();
  ShutAllLeds();
  Number8();
  ShutAllLeds();
  Number9();
  ShutAllLeds();
}