#define PIN_AO_ECHO A0

int hasHuman;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_AO_ECHO, INPUT);
}

void loop() {
  hasHuman = analogRead(PIN_AO_ECHO);
  Serial.print("Echo has human = ");
  Serial.println(hasHuman);
  delay(500);
}
