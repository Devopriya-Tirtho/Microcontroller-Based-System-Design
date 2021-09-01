#include <Keypad.h>


const byte ROWS=4; //four rows
const byte COLS=4; //Three cols
//define the keymap
char keys[ROWS][COLS]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};
//Connects keypad ROW0,ROW1,ROW2 and ROW3 to these arduino pins
byte rowPins[ROWS]={2,3,4,5};
//Connects keypad COL0,COL1,COL2 to these arduino pins
byte colPins[COLS]={6,7,8,9};


Keypad kpd=Keypad(makeKeymap(keys),rowPins,colPins,ROWS,COLS);
void setup() {
  // put your setup code here, to run once:
      Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
      char key=kpd.getKey();
      if(key)
      {Serial.println(key);
      Serial.println(key+5-48);
}}
