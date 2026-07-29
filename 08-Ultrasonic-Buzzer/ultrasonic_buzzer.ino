const int trigPin = 9;
const int echoPin = 10;
const int buzzerPin = 8;
long duration;
int distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 15)
  {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Object Detected - Buzzer ON");
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
    Serial.println("No Object Nearby - Buzzer OFF");
  }
  delay(500);
}
