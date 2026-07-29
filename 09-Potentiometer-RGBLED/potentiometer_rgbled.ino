int potPin = A0;
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(potPin);
  int brightness = map(value, 0, 1023, 0, 255);

  analogWrite(redPin, brightness);
  analogWrite(greenPin, brightness);
  analogWrite(bluePin, brightness);

  Serial.print("Brightness: ");
  Serial.println(brightness);

  delay(20);
}
