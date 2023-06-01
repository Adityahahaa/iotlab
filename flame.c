int isFlamePin = 8;
int isFlame = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(isFlamePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  isFlame = digitalRead(isFlamePin);
  if(isFlamePin == 1) {
    Serial.println("Fire !! Fire !!");
  } else {
    Serial.println("No Fire");
  }
}
