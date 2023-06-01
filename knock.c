int tap = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(tap, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(tap);
  if(value == HIGH) {
    Serial.println("Knock Knock");
  } else {
    Serial.println("No Knocks");
  }

  delay(1000);
}
