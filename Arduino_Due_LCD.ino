#include <LiquidCrystal.h>
LiquidCrystal lcd(32, 30, 34, 35, 36, 37);

void setup() {
  pinMode(31, OUTPUT);
  lcd.begin(20, 2);
  lcd.home();
  lcd.print("value");
}

void loop() {
  for (int i = 0; i < 20; i++) {
    lcd.setCursor(i , 0);
    lcd.print("value");
    if (i == 19) {
      i = 0;
    }
    delay(500);
    lcd.clear();
  }
}