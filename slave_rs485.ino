#include <SoftwareSerial.h>
#define DE 3
#define RE 2

SoftwareSerial RS485Serial(10, 11);
#define LED2 6

void setup() {
  pinMode(LED2, OUTPUT);
  RS485Serial.begin(9600);

  pinMode(DE, OUTPUT);
  pinMode(RE, OUTPUT);
  digitalWrite(DE, LOW); // always RX
  digitalWrite(RE, LOW); // always RX
}

void loop() {
  if (RS485Serial.available()) {
    String msg = RS485Serial.readStringUntil('\n');
    msg.trim();

    if (msg == "LED_ON") {
      digitalWrite(LED2, HIGH);
    }
    else if (msg == "LED_OFF") {
      digitalWrite(LED2, LOW);
    }
  }
}
