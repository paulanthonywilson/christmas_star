
int nightTimeThreshold = 500;
int photoRPin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(photoRPin);
 

  Serial.println(lightLevel);

  delay(50);
}
