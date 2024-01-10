#include <AFMotor.h>
#include <NewPing.h>
#include <Servo.h>

#define TRIG_PIN A0
#define ECHO_PIN A1
#define MAX_DISTANCE 200
#define MAX_SPEED 190

bool gone_forward = false;
int distance = 100;

NewPing detector(TRIG_PIN, ECHO_PIN, MAX_DISTANCE);
AF_DCMotor motor1(1);
AF_DCMotor motor2(4);
Servo scanner;

void setup() {
  scanner.attach(10);
  scanner.write(90);
  delay(1000);

  for (int i = 0; i < 4; ++i) {
    delay(100);
    distance = dist_detect();
  }
}

void loop() {
  int dist_R = 0, dist_L = 0;
  if (distance <= 15) {
    stop();
    delay(100);
    backward();
    delay(300);
    stop();
    delay(200);
    dist_R = lookRight();
    delay(200);
    dist_L = lookLeft();
    delay(200);

    if (dist_R >= dist_L) {
      turnRight();
      stop();
    } else {
      turnLeft();
      stop();
    }
  } else {
    forward();
  }
  distance = dist_detect();
}

int lookRightLeft(int angle, int delayTime) {
  scanner.write(angle);
  delay(delayTime);
  int distance = dist_detect();
  delay(100);
  scanner.write(90);
  return distance;
}

int lookRight() {
  return lookRightLeft(45, 500);
}

int lookLeft() {
  return lookRightLeft(135, 500);
}

int dist_detect() {
  delay(70);
  int cm = detector.ping_cm();
  if (cm == 0) {
    cm = 250;
  }
  return cm;
}

void stop() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  gone_forward = false;
}

void forward() {
  if (!gone_forward) {
    gone_forward = true;
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    for (int speed_inr = 0; speed_inr < MAX_SPEED; speed_inr += 2) {
      motor1.setSpeed(speed_inr);
      motor2.setSpeed(speed_inr);
      delay(5);
    }
  }
}

void backward() {
  gone_forward = false;
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  for (int speed_inr = 0; speed_inr < MAX_SPEED; speed_inr += 2) {
    motor1.setSpeed(speed_inr);
    motor2.setSpeed(speed_inr);
    delay(5);
  }
}

void turnRight() {
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  delay(500);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
}

void turnLeft() {
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  delay(500);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
}