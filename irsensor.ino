void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);// for communication baud rate
  pinMode(6, OUTPUT);
  pinMode(7, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int IRVAL = digitalRead(7); // analogread for ldr sensor
  Serial.println(IRVAL);
  //to trigger buzzer
  if(IRVAL ==1){
  // irval =1 buzzer is triggered when there is no obsrtacle(1)
  // irval =1 buzzer is not triggered when there is obstacle(0)
  //irval = 0 when there is obstacle buzzer is triggered(0)
  // irval = 0 when there is no obstacle buzzer is not triggered(1){
 digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
 else{                  
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
}
}
