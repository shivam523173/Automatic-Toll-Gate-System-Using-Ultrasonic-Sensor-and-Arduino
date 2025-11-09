#include <Servo.h>

// Pin Mapping
const int TRIG_PIN = 6;
const int ECHO_PIN = 7;
const int SERVO_PIN = 9;

Servo myservo;
int pos = 0;
float cm = 0.0;

float readDistanceCm(int triggerPin, int echoPin) {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  unsigned long duration = pulseIn(echoPin, HIGH, 30000UL);
  if (duration == 0) return -1.0;

  return duration * 0.01715f;
}

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  myservo.attach(SERVO_PIN);
  myservo.write(0);
}

void loop() {
  cm = readDistanceCm(TRIG_PIN, ECHO_PIN);

  if (cm > 0 && cm < 30.0) {
    Serial.print(cm, 1);
    Serial.println(" cm");

    for (pos = 0; pos <= 90; pos++) {
      myservo.write(pos);
      delay(15);
    }
    delay(500);

    for (pos = 90; pos >= 0; pos--) {
      myservo.write(pos);
      delay(15);
    }
    delay(5000);
  } else {
    delay(50);
  }
}
