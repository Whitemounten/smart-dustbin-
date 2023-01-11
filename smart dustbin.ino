#include <Servo.h>

Servo motor;
#define echo 6
#define trig 7

void setup()
{
 pinMode(trig,OUTPUT);  
 pinMode(echo,INPUT);
 motor.attach(3);
}

void loop()
{
 digitalWrite(trig,LOW);
 delayMicroseconds(2);
 digitalWrite(trig,HIGH);
 delayMicroseconds(2);
 digitalWrite(trig,LOW);

 float zaman = pulseIn(echo,HIGH);
 float cm = zaman/58.2;                
 delay(3000);

 if (cm <10 ){
   motor.write(175);
   delay(3000);
   motor.write(0);
  }
}  