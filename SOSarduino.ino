#include <Servo.h>

Servo myServo;

void setup() {
  // put your setup code here, to run once:
 pinMode(LED_BUILTIN,OUTPUT);
 myServo.attach(11);
 myServo.write(90);

}

void blinkOnce(int time){
   digitalWrite(LED_BUILTIN, HIGH);
   myServo.write(130);
 delay(time);
 digitalWrite(LED_BUILTIN, LOW);
 myServo.write(50);
 delay(time);
}

void BlinkSOS() {
 blinkOnce(700);
 blinkOnce(700);
 blinkOnce(700);
 blinkOnce(300);
 blinkOnce(300);
 blinkOnce(300);
 blinkOnce(700);
 blinkOnce(700);
 blinkOnce(700);
} 
void loop(){
  BlinkSOS();
}