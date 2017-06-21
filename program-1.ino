//A simple program to control an LED bulb and character LCD screen.
#include<LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // sets the interfacing pins
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  lcd.begin(16, 2);  // initializes the 16x2 LCD
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  lcd.setCursor(0,0);                //sets cursor at row 0 column 0
  lcd.print("-The Visualizer-");     // prints -The Visualizer-
  lcd.setCursor(2,1);                //sets cursor at row 1 column 2
  lcd.print("Hello, World!");        // prints Hello, World!
}
