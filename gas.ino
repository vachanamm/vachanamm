
//int LED2 = 11;
int buzzer = 6;
int smokeA0 = A0;
int sensorThreshold = 3699;

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
 // pinMode(LED2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop() {
  int analogSensor = analogRead(smokeA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
  // Checks if it has reached the threshold value
  if (analogSensor > sensorThreshold)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    //digitalWrite(LED_BUILTIN, LOW);
    tone(buzzer, 800, 200);
  }
  else
  {
    //digitalWrite(LED1, LOW);
    //digitalWrite(LED2, HIGH);
    digitalWrite(LED_BUILTIN, LOW);
    noTone(buzzer);
  }
  delay(100);
}
