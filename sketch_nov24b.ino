#include <Servo.h>

Servo myServo;
const int irSensorPin = A0;
int threshold = 3;
int distance = 0;
int currentDistance = 0;


void setup() {
  myServo.attach(9);
  myServo.write(130);
  Serial.begin(9600);
}

void loop() {
  int currentDistance = analogRead(irSensorPin);
  Serial.print(currentDistance);
  Serial.print(" cm"); 

  if (abs(currentDistance - distance) > threshold) {
    myServo.write(90);
    delay(1000);
  } else {
    myServo.write(130);
  }
  Serial.print("Distance: ");
  Serial.print(currentDistance);
  Serial.print(" cm");

  delay(1000);

}
