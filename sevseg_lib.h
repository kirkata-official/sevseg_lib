int G;
int F;
int A;
int B;
int E;
int D;
int C;
int DP;

void sevsegSetup(int g, int f, int a, int b, int e, int d, int c, int dot) {
  G = g;
  F = f;
  A = a;
  B = b;
  E = e;
  D = d;
  C = c;
  DP = dot;
}

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
