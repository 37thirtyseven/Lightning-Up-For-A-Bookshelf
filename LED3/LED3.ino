const int led1 = 5;
const int led2 = 6;
const int led3 = 7;

void setup() {

pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);

}

void loop() {
  
  analogWrite(led1,170);
  analogWrite(led2,170);
  analogWrite(led3,170);
  delay(1900);
  analogWrite(led1,0);
  analogWrite(led2,0);
  analogWrite(led3,0);
  delay(1300);

}

 
