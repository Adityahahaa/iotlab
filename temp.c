float temp;
int tempPin = A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(tempPin);
  temp = temp * (5000/1024);
  Serial.print("Temperature = ");
  Serial.print(temp);
  Serial.print(" *C");
  Serial.println();
  delay(1000);
}
