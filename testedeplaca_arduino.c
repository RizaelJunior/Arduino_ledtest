int led = 13;

void setup() {

    printMode(led, OUTPUT);
    
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
