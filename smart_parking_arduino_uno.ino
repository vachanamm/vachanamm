#include<Servo.h>
Servo Myservo;
int pos;
const int LED_red =7;
const int LED_green = A4;
const int LED_red1 = 6;
const int LED_green1 = A3;
const int LED_red2 = 9;
const int LED_green2 = A0;
const int LED_red3 = A5;
const int LED_green3 = A1;
const int LED_red4 = 10;
const int LED_green4 = A2;



void setup() {
Serial.begin(9600);

pinMode(6, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(8, INPUT);
   pinMode(9, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(0, INPUT);
   pinMode(1, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(11, INPUT);
   pinMode(12, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(13, INPUT);
pinMode(2,INPUT);
Myservo.attach(3);
pinMode(1,INPUT);
Myservo.attach(14);//LAST BLOCK


}
void loop() {
  int IRVAL=digitalRead(2);
  Serial.println(IRVAL);
  if(IRVAL==1){
    int IRVAL1 = digitalRead(8);
  
  Serial.println(IRVAL1);
  //to trigger buzzer
  if(IRVAL1 ==1){
 
  digitalWrite (LED_red1, HIGH);
    digitalWrite (LED_green1, LOW);
    delay (1000);
  }
    else{
       digitalWrite (LED_red1, LOW);
    digitalWrite (LED_green1, HIGH);
    delay (1000);
}
 int IRVAL2 = digitalRead(0);
  Serial.println(IRVAL2);
  //to trigger buzzer
  if(IRVAL2 ==1){
 
  digitalWrite (LED_red2, HIGH);
    digitalWrite (LED_green2, LOW);
    delay (1000);
  }
    else{
       digitalWrite (LED_red2, LOW);
    digitalWrite (LED_green2, HIGH);
    delay (1000);
}
int IRVAL3 = digitalRead(11);
Serial.println(IRVAL3);
  //to trigger buzzer
  if(IRVAL3 ==1){
 
  digitalWrite (LED_red3, HIGH);
    digitalWrite (LED_green2, LOW);
    delay (1000);
  }
    else{
       digitalWrite (LED_red3, LOW);
    digitalWrite (LED_green3, HIGH);
    delay (1000);
    }
    int IRVAL4= digitalRead(13);// analogread for ldr sensor
    Serial.println(IRVAL4);
  //to trigger buzzer
  if(IRVAL4 ==1){
 
  digitalWrite (LED_red3, HIGH);
    digitalWrite (LED_green2, LOW);
    delay (1000);
  }
    else{
       digitalWrite (LED_red3, LOW);
    digitalWrite (LED_green3, HIGH);
    delay (1000);
    }
     digitalWrite (LED_red, LOW);
    digitalWrite (LED_green, HIGH);
    delay (1000);
    
  for(pos=0;pos<=180;pos++){
Myservo.write(pos);
delay(15);
}
  delay(5000);
  
}
else
{
for(pos=180;pos>=0;pos--){
Myservo.write(pos);
delay(15);
digitalWrite (LED_red, HIGH);
    digitalWrite (LED_green, LOW);
    delay (1000);
}
}
int IRVAL5=digitalRead(1);
  Serial.println(IRVAL5);
  if(IRVAL5==1){
  for(pos=0;pos<=180;pos++){
Myservo.write(pos);
delay(15);
}
  delay(5000);
  
}
else
{
for(pos=180;pos>=0;pos--){
Myservo.write(pos);
delay(15);
}
}


}













































































































































































































































































                                                                    
