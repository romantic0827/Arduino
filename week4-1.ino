#include <LiquidCrystal_I2C.h>

 
 LiquidCrystal_I2C lcd(0x27, 16, 2);
 
 void setup() {
   
   lcd.init();				// I2C LCD 초기화
   lcd.backlight();			// 백라이트 켜기
   lcd.print("LCD init");
   delay (5000);
   lcd.clear();
 }
             
 void loop() {
   lcd.setCursor(16,0);
   lcd.print("Hello, World!");
   
   for (int position = 0; position < 16; position++) {
     lcd.scrollDisplayLeft();
     delay(150);
   }
 }  
