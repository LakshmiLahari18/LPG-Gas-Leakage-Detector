
const int gasSensorPin = A0;
const int buzzerPin = 8;
const int ledPin = 7;

int gasThreshold = 400;

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int gasValue = analogRead(gasSensorPin);

  Serial.print("Gas Sensor Value: ");
  Serial.println(gasValue);

  if (gasValue >= gasThreshold) {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    Serial.println("WARNING: Gas level threshold exceeded!");
  } else {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
    Serial.println("Normal condition");
  }

  delay(500);
}
