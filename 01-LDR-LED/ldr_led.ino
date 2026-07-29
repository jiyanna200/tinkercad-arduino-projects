int ldrPin = A0;
int ledPin = 7;
int sensorValue;

void setup()
{
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    sensorValue = analogRead(ldrPin);
    Serial.print("LDR Value: ");
    Serial.println(sensorValue);

    if(sensorValue < 100)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }
    delay(500);
}
