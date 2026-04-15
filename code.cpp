#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int ledPin = 8;
const int pirPin = 2;

LiquidCrystal_I2C lcd(0x27, 16, 2);

int count = 0;
int lastMotionState = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Calibrating...");
  Serial.begin(9600);
  
  delay(10000); 
  lcd.clear();
  lcd.print("System Ready");
  delay(1000);
  lcd.clear();
  updateLCD();
}

void loop() {
  int currentMotionState = digitalRead(pirPin);

  if (currentMotionState == HIGH && lastMotionState == LOW) {
    count++;
    digitalWrite(ledPin, HIGH);
    Serial.print("Motion Detected! Total: ");
    Serial.println(count);
    updateLCD();
    delay(2000);
  } 
  
  if (currentMotionState == LOW && lastMotionState == HIGH) {
    digitalWrite(ledPin, LOW);
  }

  lastMotionState = currentMotionState;
}

void updateLCD() {
  lcd.setCursor(0, 0);
  lcd.print("Count: ");
  lcd.print(count);
  lcd.print("       ");
}
