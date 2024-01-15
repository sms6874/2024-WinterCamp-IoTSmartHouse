#include<Servo.h>

Servo myservo;

void setup(){
  myservo.attach(13);
}

void loop(){
  myservo.write(90);
  delay(1000);
  myservo.write(180);
  delay(1000);
}
----------------------------------------------------
int Sensor=10;
int val;
void setup(){
  Serial.begin(9600);
  pinMode(Sensor,INPUT);
}

void loop(){
  val=digitalRead(Sensor);

  if(val==0){
    Serial.println("STOP!!");
  }
  else{
    Serial.println("Nothing");
  }
}
---------------------------------------------------
int Buzzer_Pin=7;

void setup(){
  pinMode(Buzzer_Pin, OUTPUT);
}

void loop(){
  tone(Buzzer_Pin, 523);
  delay(1000);
  tone(Buzzer_Pin, 587);
  delay(1000);
  tone(Buzzer_Pin, 659);
  delay(1000);
}
