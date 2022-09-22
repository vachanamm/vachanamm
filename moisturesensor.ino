void setup() {
  Serial.begin(9600);
  pinMode(A2,OUTPUT);
  pinMode(6,OUTPUT);
 

}

void loop() {
  int val = analogRead(A2);
  Serial.println(val);
  if (val<6000)
  {
    digitalWrite(6,HIGH); 
  }
  else{
    digitalWrite(6,LOW);
  }
}
