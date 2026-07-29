int fsrPin = A0;
int ledPin = 8;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int fsrValue = analogRead(fsrPin);
  Serial.print("FSR Value: ");
  Serial.println(fsrValue);

  if (fsrValue > 100)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Pressure Detected - LED ON");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.println("No Pressure - LED OFF");
  }
  delay(200);
}
