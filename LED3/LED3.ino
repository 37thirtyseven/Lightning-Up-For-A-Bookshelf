// add const int ledx command to your led quantity

const int led1 = 2;
const int led2 = 3;
const int led3 = 4;

void setup() {
  
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);

}

void loop() {
  
 //you may change brightness from analogWrite(ledx,brightnessvalue)(between 1-190)
  
 //you may change delay time by millisecond type
  
 analogWrite(led1,170);
 analogWrite(led2,170);
 analogWrite(led3,170);
 delay(1900);
 analogWrite(led1,0);
 analogWrite(led2,0);
 analogWrite(led3,0);
 delay(1300);

}

 
