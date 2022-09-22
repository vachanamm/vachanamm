void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);// for communication baud rate
  pinMode(7, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int IRVAL = digitalRead(7); // analogread for ldr sensor
  Serial.println(IRVAL);
  if(IRVAL ==1){
 digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
 else{                  
  digitalWrite(6, LOW);   
}
}
// MOVES 1 NO MOVEMENT 0
