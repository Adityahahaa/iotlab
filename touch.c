const int touch = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(touch, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int touchState = digitalRead(touch);
  if(touchState == HIGH) {
    Serial.println("Sensor is touched");
  } else {
    Serial.println("Sensor is untouched");
  }
  delay(1000);
}
