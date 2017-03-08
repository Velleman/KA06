/*
 
 KA06 Example 1
 
 Buttons connected to DIGITAL pins (this means JP4, JP5 and JP6 have a jumper on them!)
 
*/

// include the LiquidCrystal library
 
#include <LiquidCrystal.h>
 
#define P1 10
 
#define P2 11
 
#define P3 12
 
// setup of the display
 
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
 
void setup() {
 
 // set button inputs
 
 pinMode(P1, INPUT_PULLUP);
 
 pinMode(P2, INPUT_PULLUP);
 
 pinMode(P3, INPUT_PULLUP);
 
 // set number of columns and rows 
 
 lcd.begin(20, 4);
 
 // show a message
 
 lcd.print("Hello there!");
 
}
 
void loop() {
 
 // moves the cursor one row down
 
 lcd.setCursor(0, 1);
 
 // shows the pressed button
 
 if ( digitalRead(P1)==0 ) lcd.print("SW1 was pressed.");
 
 if ( digitalRead(P2)==0 ) lcd.print("SW2 was pressed.");
 
 if ( digitalRead(P3)==0 ) lcd.print("SW3 was pressed.");
 
}
