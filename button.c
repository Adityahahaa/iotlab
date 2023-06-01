int buttonPin = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  button_state = digitalRead(buttonPin);
  if(button_state == true) {
    Serial.println("Button Pressed");
  } else {
    Serial.println("Button not pressed");
  }
  delay(1000);
}
