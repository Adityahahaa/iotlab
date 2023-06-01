void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(7);
  if(value == 1) {
    Serial.println("Tilted");
  } else {
    Serial.println("Not Tilted");
  }
  delay(1000);
}
