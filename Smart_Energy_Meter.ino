/*
  Smart Energy Meter with Load Monitoring and Overload Protection
*/

const int currentSensorPin = A0;
const int relayPin = 8;
const int buzzerPin = 9;
const int lcdRs = 12, lcdEn = 11, lcdD4 = 5, lcdD5 = 4, lcdD6 = 3, lcdD7 = 2;

#include <LiquidCrystal.h>
LiquidCrystal lcd(lcdRs, lcdEn, lcdD4, lcdD5, lcdD6, lcdD7);

float current, voltage = 230.0;
float power;
float threshold = 100.0;  // Threshold in watts

void setup() {
  pinMode(relayPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("Smart Energy");
  lcd.setCursor(0, 1);
  lcd.print("Meter Starting");
  delay(2000);
  lcd.clear();
}

void loop() {
  int sensorValue = analogRead(currentSensorPin);
  float voltageMeasured = (sensorValue / 1023.0) * 5.0;
  current = voltageMeasured * 5.0;  // Simplified calibration
  power = voltage * current;

  lcd.setCursor(0, 0);
  lcd.print("Power:");
  lcd.print(power);
  lcd.print("W   ");

  if (power > threshold) {
    digitalWrite(relayPin, LOW);
    digitalWrite(buzzerPin, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Overload! Cutoff ");
  } else {
    digitalWrite(relayPin, HIGH);
    digitalWrite(buzzerPin, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Load Normal      ");
  }

  delay(1000);
}
