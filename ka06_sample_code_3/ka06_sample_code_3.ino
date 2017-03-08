 /*
 
 KA06 Example 3
 
 Showing a custom character on the display
 
 */
 
#include <LiquidCrystal.h>
 
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
 
// This array creates the special “smiley” char
 
byte smiley[8] = {
 
 0b00000,
 
 0b00000,
 
 0b01010,
 
 0b00000,
 
 0b00000,
 
 0b10001,
 
 0b01110,
 
 0b00000
 
};
 
void setup() {
 
 // Store the special char in the 0 position
 
 lcd.createChar(0, smiley);
 
 lcd.begin(20, 4);
 
 lcd.print("Hello there! ");
 
 // show the smiley
 
 lcd.write((byte)0);
 
}
 
void loop() {
 
}
