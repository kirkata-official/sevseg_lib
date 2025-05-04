// now import this code into your project
// make sure you have setup and loop functions

// write it in setup function:

//pinMode(G, OUTPUT);
//pinMode(F, OUTPUT);
//pinMode(A, OUTPUT);
//pinMode(B, OUTPUT);
//pinMode(E, OUTPUT);
//pinMode(D, OUTPUT);
//pinMode(C, OUTPUT);
//pinMode(DP, OUTPUT);

// set pins for your display

int G = 11;
int F = 10;
int A = 9;
int B = 8;
int E = 7;
int D = 6;
int C = 5;
int DP = 4;

void RESET_ALL() {
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(DP, LOW);
}

void SET_ALL() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(DP, HIGH);
}

void setDot() {
  digitalWrite(DP, HIGH);
}

void resetDot() {
  digitalWrite(DP, LOW);
}

void setDigit(int digit) {
  if (digit == 0) {
    // SET
    digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    // RESET
    digitalWrite(G, LOW);
  } else if (digit == 1) {
    // SET
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    // RESET
    digitalWrite(G, LOW);
    digitalWrite(F, LOW);
    digitalWrite(A, LOW);
    digitalWrite(E, LOW);
    digitalWrite(D, LOW);
  } else if (digit == 2) {
    // SET
    digitalWrite(G, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    // RESET
    digitalWrite(F, LOW);
    digitalWrite(C, LOW);
  } else if (digit == 3) {
    // SET
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    // RESET
    digitalWrite(F, LOW);
    digitalWrite(E, LOW);
  } else if (digit == 4) {
    // SET
    digitalWrite(G, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    // RESET
    digitalWrite(A, LOW);
    digitalWrite(E, LOW);
    digitalWrite(D, LOW);
  } else if (digit == 5) {
    // SET
    digitalWrite(A, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    // RESET
    digitalWrite(B, LOW);
    digitalWrite(E, LOW);
  } else if (digit == 6) {
    // SET
    digitalWrite(G, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    // RESET
    digitalWrite(B, LOW);
  } else if (digit == 7) {
    // SET
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    // RESET
    digitalWrite(G, LOW);
    digitalWrite(F, LOW);
    digitalWrite(E, LOW);
    digitalWrite(D, LOW);
  } else if (digit == 8) {
    // SET
    digitalWrite(G, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
    // RESET
  } else if (digit == 9) {
    // SET
    digitalWrite(G, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(C, HIGH);
    // RESET
    digitalWrite(E, LOW);
  } else {
    // SET
    digitalWrite(G, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    // RESET
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
  }
}
