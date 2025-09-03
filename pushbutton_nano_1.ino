#define button 2

void setup() {
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  uint8_t val = digitalRead(button);


  Serial.write(val ? '1' : '0');
  delay(50); 
}
