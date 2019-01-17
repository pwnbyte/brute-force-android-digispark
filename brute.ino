#include "DigiKeyboard.h"
#define KEY_ESC     41
#define KEY_BACKSPACE 42
#define KEY_TAB     43
#define KEY_PRT_SCR 70
#define KEY_DELETE  76
#define KEY_ARROW_RIGHT 0x4F
#define KEY_ARROW_DOWN  0x51
#define KEY_ARROW_UP    0x52


void setup() {
  //empty

}
void loop() {
  for(int i = 1000; i <= 9999 ; ++i){
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(1000);
    DigiKeyboard.print(i);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN,0);
    DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT,0);
    DigiKeyboard.delay(300);
    DigiKeyboard.sendKeyStroke(KEY_ENTER,0);
   
  }
  
}
