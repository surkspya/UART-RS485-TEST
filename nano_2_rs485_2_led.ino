#include <SoftwareSerial.h>
#define DE 3
#define RE 2

SoftwareSerial RS485Serial(10, 11); // RX=10, TX=11
#define LED 12

char val;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);

  pinMode(DE, OUTPUT);
  pinMode(RE, OUTPUT);
  digitalWrite(DE, HIGH); // always TX
  digitalWrite(RE, HIGH); // always TX

  RS485Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    val = Serial.read();  

    if (val == '1') { // released
      digitalWrite(LED, LOW);
      RS485Serial.println("LED_OFF");
    }
    else if (val == '0') { // pressed
      digitalWrite(LED, HIGH);
      RS485Serial.println("LED_ON");
    }
  }
}
