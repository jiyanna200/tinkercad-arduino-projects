int pirPin = 2;
int buzzerPin = 8;
int motionState = 0;

void setup()
{
    pinMode(pirPin, INPUT);
    pinMode(buzzerPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    motionState = digitalRead(pirPin);
    Serial.print("Motion State: ");
    Serial.println(motionState);

    if(motionState == HIGH)
    {
        digitalWrite(buzzerPin, HIGH);
        Serial.println("Motion Detected");
    }
    else
    {
        digitalWrite(buzzerPin, LOW);
        Serial.println("No Motion");
    }
    delay(500);
}
