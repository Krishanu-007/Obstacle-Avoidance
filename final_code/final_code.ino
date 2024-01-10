/*===================================================================
THIS IS THE FINAL CODE FOR THE OBSTACLE AVOIDANCE CAR
HOWEVER THRE MIGHT BE REQUIREMENT IN CHANGE OF THE CONTROL DIRECTIONS
THAT CAN BE TESTED BY DOING PRACTICAL IMPLEMENTATION.
====================================================================== */
#include <Servo.h>
#include <NewPing.h>
#define max_dist 200
#define pos 90
#define left_max_pos 135
#define right_max_pos 45

const int trig_pin=2, echo_pin=3, left_1=4, left_2=5, right_1=6, right_2=7;
bool forward_gone=false;
unsigned int distance= 100;

Servo motor;
NewPing detector(trig_pin,echo_pin,max_dist);

void setup() {
  pinMode(left_1,OUTPUT);
  pinMode(left_2,OUTPUT);
  pinMode(right_1,OUTPUT);
  pinMode(right_2,OUTPUT);
  motor.attach(10);
  motor.write(pos);
  delay(1500);
  distance=dist_detect();
  delay(100);
  distance=dist_detect();
  delay(100);
  distance=dist_detect();
  delay(100);
}

void loop() 
{
  distance=dist_detect();
  unsigned int dist_R=0, dist_L=0;
  if(distance<=15)
  {
    stop();
    delay(300);
    backward();
    delay(500);
    stop();
    delay(300);
    dist_R=look_right();
    delay(300);
    dist_L=look_left();
    delay(300);
    if(dist_R>=dist_L)
    {
      turn_right();
      delay(300);
      stop();
    }
    else
    {
      turn_left();
      delay(300);
      stop();
    }
  }
  else
  {
    forward();
  }
  distance=dist_detect();
}

unsigned int dist_detect()
{
  delay(50);
  unsigned int dist_cm=detector.ping_cm();
  if(dist_cm==0 || dist_cm>max_dist)
  {
    dist_cm=230;
  }
  return dist_cm;
}

void forward()
{
  if(!forward_gone)
  {
    forward_gone=true;
    digitalWrite(left_1,LOW);
    digitalWrite(left_2,HIGH);
    digitalWrite(right_1,LOW);
    digitalWrite(right_2,HIGH);
  }
}

void stop()
{
  digitalWrite(left_1,LOW);
  digitalWrite(left_2,LOW);
  digitalWrite(right_1,LOW);
  digitalWrite(right_2,LOW);
  forward_gone=false;
}

void backward()
{
  forward_gone=false;
  digitalWrite(left_1,HIGH);
  digitalWrite(left_2,LOW);
  digitalWrite(right_1,HIGH);
  digitalWrite(right_2,LOW);
}

void turn_right()
{
  digitalWrite(left_1,LOW);
  digitalWrite(left_2,HIGH);
  digitalWrite(right_1,HIGH);
  digitalWrite(right_2,LOW);
  forward_gone=false;
}

void turn_left()
{
  digitalWrite(left_1,HIGH);
  digitalWrite(left_2,LOW);
  digitalWrite(right_1,LOW);
  digitalWrite(right_2,HIGH);
  forward_gone=false;
}

unsigned int look_right()
{
  motor.write(right_max_pos);
  delay(500);
  unsigned int dist_cm=dist_detect();
  delay(100);
  motor.write(pos);
  return dist_cm;
}

unsigned int look_left()
{
  motor.write(left_max_pos);
  delay(500);
  unsigned int dist_cm=dist_detect();
  delay(100);
  motor.write(pos);
  return dist_cm;
}