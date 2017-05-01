#include <LiquidCrystal.h> // include the library code

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
void setup() {

lcd.begin(20,2);

lcd.print("04050033 Ivy"); // Print a message to the LCD.

lcd.print("04050475 Winnie");
lcd.setCursor(1,0);

}
void loop() {
// set the cursor to column 0, line 1
// (note: line 1 is the second row, since countingbegins with 0):
lcd.setCursor(0, 1);
//lcd.print(millis()/1000); // print the number of secondssince reset:
}
