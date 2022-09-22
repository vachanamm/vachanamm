void setup(){
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(6,OUTPUT);
}
void loop() {
int val =  analogRead(A0);
Serial.println(val);
if(val<700)
{
digitalWrite(6,HIGH);
}
else
{
digitalWrite(6,LOW);
}
}
