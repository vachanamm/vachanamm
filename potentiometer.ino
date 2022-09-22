int buzz=6;
int fade=A2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(fade,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int fadeval= analogRead(fade);
  Serial.println(fadeval);
  analogWrite(buzz,fadeval);
}
