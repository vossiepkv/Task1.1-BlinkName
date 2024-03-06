int ledPin = 13; // LED connected to digital pin 13

// Duration in milliseconds
int dotTime = 200;      // Duration of a dot
int dashTime = 600;     // Duration of a dash
int betweenElements = 200; // Time between dots/dashes
int betweenLetters = 600;  // Time between letters
int betweenWords = 1400;   // Time between words (Not used for "Tim" but useful for larger sentences)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void dot() {
  digitalWrite(ledPin, HIGH);
  delay(dotTime);
  digitalWrite(ledPin, LOW);
  delay(betweenElements);
}

void dash() {
  digitalWrite(ledPin, HIGH);
  delay(dashTime);
  digitalWrite(ledPin, LOW);
  delay(betweenElements);
}

void letterP() {
  dot(); dash(); dash(); dot();
  delay(betweenLetters);
}

void letterA() {
  dot(); dash();
  delay(betweenLetters);
}

void letterT() {
  dash();
  delay(betweenLetters);
}

void letterR() {
  dot(); dash(); dot();
  delay(betweenLetters);
}

void letterI() {
  dot(); dot();
  delay(betweenLetters);
}

void letterC() {
  dash(); dot(); dash(); dot();
  delay(betweenLetters);
}

void letterK() {
  dash(); dot(); dash();
  delay(betweenLetters);
}


void loop() {
  letterP();
  letterA();
  letterT();
  letterR();
  letterI();
  letterC();
  letterK();
  delay(betweenWords); // Wait a bit before repeating
}
