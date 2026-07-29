int ldrPin = A0;
int buzzerPin = 8;

void setup()
{
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int ldrValue = analogRead(ldrPin);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  if (ldrValue < 300)
  {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Dark - Buzzer ON");
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
    Serial.println("Bright - Buzzer OFF");
  }
  delay(500);
}
