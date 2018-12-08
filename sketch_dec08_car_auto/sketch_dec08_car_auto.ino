#define PIN_SENSOR_ECHO 7 

float temp;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_SENSOR_ECHO, INPUT);
}

void loop() {

  temp = digitalRead(PIN_SENSOR_ECHO);
  Serial.print("has object, Echo = ");
  Serial.print(temp);
  Serial.println("");
  delay(1000);
}
