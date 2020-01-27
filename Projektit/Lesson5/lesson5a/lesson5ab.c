const int A_LED = 2;
const int B_LED = 8;
const int C_LED = 6;
const int D_LED = 5;
const int E_LED = 4;
const int F_LED = 3;
const int G_LED = 7;


void Number0() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, LOW);
    digitalWrite(F_LED, LOW);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, HIGH);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW);
}

void Number1() {
    digitalWrite(D_LED, HIGH);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, HIGH);
    digitalWrite(A_LED, HIGH);
    digitalWrite(G_LED, HIGH);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW);
}

void Number2() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, LOW);
    digitalWrite(F_LED, HIGH);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, HIGH);
    digitalWrite(B_LED, LOW);
}

void Number3() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, HIGH);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW); 
}

void Number4() {
    digitalWrite(D_LED, HIGH);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, LOW);
    digitalWrite(A_LED, HIGH);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW);
}

void Number5() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, LOW);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, HIGH);
}

void Number6() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, LOW);
    digitalWrite(F_LED, LOW);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, HIGH);
}

void Number7() {
    digitalWrite(D_LED, HIGH);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, HIGH);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, HIGH);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW);
}

void Number8() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, LOW);
    digitalWrite(F_LED, LOW);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW);
}

void Number9() {
    digitalWrite(D_LED, LOW);
    digitalWrite(E_LED, HIGH);
    digitalWrite(F_LED, LOW);
    digitalWrite(A_LED, LOW);
    digitalWrite(G_LED, LOW);
    digitalWrite(C_LED, LOW);
    digitalWrite(B_LED, LOW);
}


// function that shuts all leds
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


// function that blinks the segment G

void BlinkG()
  {
    digitalWrite(G_LED, LOW);    
    delay(250);
    digitalWrite(G_LED, HIGH); 
    delay(250);
    digitalWrite(G_LED, LOW);
  }

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);     // initialize serial port
  pinMode(A_LED,OUTPUT);  // setup led pinmodes as outputs
  pinMode(B_LED,OUTPUT);
  pinMode(C_LED,OUTPUT);
  pinMode(D_LED,OUTPUT);
  pinMode(E_LED,OUTPUT);
  pinMode(F_LED,OUTPUT);
  pinMode(G_LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // shut down all leds before continuously make a circle clockwise while blinking G
  
    ShutAllLeds(); 
    BlinkG();
    delay(250);
    digitalWrite(A_LED, LOW);
    BlinkG();
    delay(250);
    digitalWrite(F_LED, LOW);
    BlinkG();
    delay(250);
    digitalWrite(E_LED, LOW);
    BlinkG();
    delay(250);
    digitalWrite(D_LED, LOW);
    BlinkG();
    delay(250);
    digitalWrite(C_LED, LOW);
    BlinkG();
    delay(250);
    digitalWrite(B_LED, LOW);
    BlinkG();
    delay(250);
}