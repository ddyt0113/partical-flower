#define LIGHT_SENSOR_PIN A4 

void setup() {
  Serial.begin(115200);
}

void loop() {
  int analogValue = analogRead(LIGHT_SENSOR_PIN);

  Serial.println(analogValue);

  delay(500);
}