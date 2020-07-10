/*
  Controlling DC Motor with Relay
  by Abdullah Fayad
*/
#define r1 = 6;
#define r2 = 7;

void setup() {
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
}
void loop() {
  digitalWrite(r1, LOW);
  delay(3000);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, LOW);
  delay(3000);
  digitalWrite(r2, HIGH);
}
