int dot = 100;
int dash = 300;
int ledPIN = 7;
int finalDelay = 1500;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPIN, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPIN, HIGH);
  delay(dot);
  digitalWrite(ledPIN, LOW);
  delay(dot);
  digitalWrite(ledPIN, HIGH);
  delay(dot);
  digitalWrite(ledPIN, LOW);
  delay(dot);
  digitalWrite(ledPIN, HIGH);
  delay(dot);
  digitalWrite(ledPIN, LOW);
  delay(dot);

  digitalWrite(ledPIN, HIGH);
  delay(dash);
  digitalWrite(ledPIN, LOW);
  delay(dash);
  digitalWrite(ledPIN, HIGH);
  delay(dash);
  digitalWrite(ledPIN, LOW);
  delay(dash);
  digitalWrite(ledPIN, HIGH);
  delay(dash);
  digitalWrite(ledPIN, LOW);
  delay(dash);

  delay(finaDelay);
}