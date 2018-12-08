#define PIN_DO_ECHO 8
#define PIN_AO_ECHO A0

int do_echo;
int ao_echo;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_DO_ECHO, INPUT);
  pinMode(PIN_AO_ECHO, INPUT);
}

void loop() {
  do_echo = digitalRead(PIN_DO_ECHO);
  ao_echo = analogRead(PIN_AO_ECHO);
  Serial.print("Echo do = ");
  Serial.print(do_echo);
  Serial.print(", ao = ");
  Serial.print(ao_echo);
  Serial.println();
  delay(500);
}
