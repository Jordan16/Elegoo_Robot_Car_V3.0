#include <Servo.h>

//www.elegoo.com
#include <Servo.h>
Servo myservo;

int Echo = A4;  
int Trig = A5; 

bool test = false;

void setup(){
  myservo.attach(3);
} 
void loop(){
  if(test)
  {
  myservo.write(0);
  delay(500);

  //Distance_test();
  
  //myservo.write(15);
  //delay(500);
  //myservo.write(30);
  //delay(500);
  //myservo.write(45);
  //delay(500);
  //myservo.write(60);
  //delay(500);
  //myservo.write(75);
  //delay(1000);
  myservo.write(90);// move servos to center position -> 90°
  delay(500);
  //myservo.write(105);
  //delay(500);
  //myservo.write(120);
  //delay(500);
  //myservo.write(135);
  //delay(500);
  //myservo.write(150);
  //delay(500);
  //myservo.write(165);
  //delay(500);
  //myservo.write(180);
  //delay(500);
  //myservo.write(90);
  //delay(500);
  }
  else
  {
    delay(500);
    myservo.write(90);// move servos to center position -> 90°
  }
}

//Ultrasonic distance measurement Sub function
int Distance_test() {
  digitalWrite(Trig, LOW);   
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);  
  delayMicroseconds(20);
  digitalWrite(Trig, LOW);   
  float Fdistance = pulseIn(Echo, HIGH);  
  Fdistance= Fdistance / 58;       
  return (int)Fdistance;
} 
