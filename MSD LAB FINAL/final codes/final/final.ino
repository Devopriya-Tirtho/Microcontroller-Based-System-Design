#include <Keypad.h>
#include <LiquidCrystal.h>
LiquidCrystal LCD(13,12,11,10,9, 8);

int LeftMotorForward = 26; // Pin 7 has Left Motor connected on Arduino boards.
int LeftMotorReverse = 27; // Pin 6 has Left Motor connected on Arduino boards.
const byte ROWS = 4; // Four rows
const byte COLS = 4; // Three columns
// Define the Keymap
char keys[ROWS][COLS] = {
  {'1', '2', '3', '/'},
  {'4', '5', '6', '*'},
  {'7', '8', '9', '-'},
  {'C', '0', '=', '+'}
};
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte rowPins[ROWS] = { 4, 5, 6, 7 };
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 22, 23, 24, 25};

// Create the Keypad
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );



void setup()
{
  Serial.begin(9600);
  LCD.begin(16,2);
    pinMode(LeftMotorForward, OUTPUT);  
  pinMode(LeftMotorReverse, OUTPUT);  
}

void loop() {
  char key = kpd.getKey();

 LCD.print(key);
 delay(2000);
 if(key=='1')
 {
   digitalWrite(LeftMotorForward, HIGH);
   digitalWrite(LeftMotorReverse, LOW);  
   delay(2000);
 }
  else if(key=='2')
 {
   digitalWrite(LeftMotorForward, LOW);
   digitalWrite(LeftMotorReverse, HIGH);  
   delay(2000);
 }

  }
