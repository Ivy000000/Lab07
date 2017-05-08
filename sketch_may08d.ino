#include <LiquidCrystal.h> // include the library code

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
void setup() {
Serial.begin(9600);

lcd.begin(20,2);

lcd.setCursor(1,0);
 lcd.clear();
}
void loop() {
 
char val;
if(Serial.available())
{
  val= Serial.read();
  lcd.write(val);
 }

// set the cursor to column 0, line 1
// (note: line 1 is the second row, since countingbegins with 0):
//lcd.print(millis()/1000); // print the number of secondssince reset:
}

