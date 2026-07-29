#include <Servo.h>

Servo door;
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  door.attach(6);
  Serial.begin(9600);
  door.write(0);   // Door Closed
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if(distance < 30)
  {
    door.write(90);
    Serial.println("Door Open");
  }
  else
  {
    door.write(0);
    Serial.println("Door Closed");
  }
  delay(500);
}
