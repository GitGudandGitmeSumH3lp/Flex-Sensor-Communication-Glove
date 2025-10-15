#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int f; 
int g; 
int h; 
int i; 
int j; 

void setup() {

  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("MAGANDANG BUHAY");
  delay(2000);
  lcd.clear();
  
}

void loop() {
  f = analogRead(A1); // Thumb finger
  g = analogRead(A2); // Pointy finger
  h = analogRead(A3); // Middle finger
  i = analogRead(A4); // Ring finger
  j = analogRead(A5); // Pinky finger


    if (f <= 722) {  
    Serial.println(" I Need Lights ");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("  I NEED LIGHTS "); // thumb finger
    delay(1000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(" Do You Need ");
    lcd.setCursor(0, 1);
    lcd.print("  Assistance ");
  }
  
    delay(100);

    if (g <= 670) {
    Serial.println(" I Need Food "); 
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("  I NEED FOOD "); // pointy finger
    delay(1000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(" Do You Need ");
    lcd.setCursor(0, 1);
    lcd.print("  Assistance ");
  }
  
    delay(100);

    if (h <= 675) {
     Serial.println(" I need Water ");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(" I NEED WATER "); // middle finger
    delay(3000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(" Do You Need ");
    lcd.setCursor(0, 1);
    lcd.print("  Assistance ");
  }
  
    delay(100);

    if (i <= 680) {
     Serial.println(" I need Air ");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(" I NEED AIR "); // ring finger
    delay(3000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(" Do You Need ");
    lcd.setCursor(0, 1);
    lcd.print("  Assistance ");
  }
  
    delay(100);
    if (j <= 685) {
     Serial.println(" I need Help ");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(" I NEED HELP "); // pinky finger
    delay(3000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(" Do You Need ");
    lcd.setCursor(0, 1);
    lcd.print("  Assistance ");
  }
  
    delay(100);


}