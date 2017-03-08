 /*
 
 KA06 Example 2
 
 Buttons connected to ANALOG pins (this means JP1, JP2, JP3 and JP7 have a jumper on them!)
 
 */
 
 // include the LiquidCrystal library
 
 #include <LiquidCrystal.h>
 
 #define pushPin 3
 
 // setup of the display
 
 LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
 
 void setup() {
 
 // set number of columns and rows 
 
 lcd.begin(16, 2);
 
 // show a message
 
 lcd.print("Hello there!");
 
 }
 
 void loop() {
 
 // moves the cursor one row down
 
 lcd.setCursor(0, 1);
 
 // shows the pressed button
 
 int pushValue = analogRead(pushPin);
 
 if ( pushValue < 164 )
 
   lcd.print("SW1 was pressed.");
 
 else if ( pushValue < 502 )
 
   lcd.print("SW2 was pressed.");
 
 else if ( pushValue < 850 )
 
   lcd.print("SW3 was pressed.");
 
 else
 
   lcd.print("Press a button :)");
 
}
