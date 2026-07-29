int tempPin = A0;
int ledPin = 8;
int sensorValue;
float voltage;
float temperature;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // Read the sensor value
  sensorValue = analogRead(tempPin);

  // Convert to voltage
  voltage = sensorValue * (5.0 / 1023.0);

  // Convert voltage to temperature (°C)
  temperature = (voltage - 0.5) * 100;

  // Display temperature
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  // Control the LED
  if (temperature > 30)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Temperature High - LED ON");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.println("Temperature Normal - LED OFF");
  }
  delay(1000);
}
