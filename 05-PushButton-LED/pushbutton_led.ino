const int buttonPin = 2;
const int ledPin = 8;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  bool buttonPressed = (digitalRead(buttonPin) == LOW);

  if (buttonPressed)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Button Pressed - LED ON");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.println("Button Released - LED OFF");
  }
  delay(200);
}
