//Code for the looping message 
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  pinMode(LED_BUILTIN, OUTPUT);
  lcd.begin(16, 2);
}

void loop() {
  // set the cursor to (0,0):
  lcd.setCursor(0, 0);
  char title[]="YOUR NAME:";
  //print title
  lcd.print(title);
  lcd.setCursor(0,1);
  char message1[]="________________";
  // print message1
  for (int i = 0; message1[i]!= '\0'; i++) {
    lcd.print(message1[i]);
  }
  delay(250);
  lcd.setCursor(0, 1);
  char message2[]="-The Visualizer-";
  // print message2
  for (int i = 0; message2[i]!='\0'; i++) {
    lcd.print(message2[i]);
    delay(250);
  }
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Welcome online,"); 
  delay(750);
  lcd.setCursor(0,1);
  lcd.print("Visualizer!");
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  lcd.clear();
}
