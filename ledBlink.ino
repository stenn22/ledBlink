int ledPin = 13;
int ledPin2 = 14;
int ledPin3 = 15;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT)
  pinMode(ledPin3, OUTPUT)
}

void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  delay(500);
}
