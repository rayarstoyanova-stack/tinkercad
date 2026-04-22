// C++ code
//
const int ldrPin = A0;
const int potPin = A1;
const int ledPin = 9;

int lightValue = 0;
int thresholdValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lightValue = analogRead(ldrPin);
  thresholdValue = analogRead(potPin);

  Serial.print("Light: ");
  Serial.print(lightValue);
  Serial.print(" | Threshold: ");
  Serial.println(thresholdValue);

  if (lightValue < thresholdValue) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(200);
}
