/*LCD display control using two wires.
  created by the SriTu Tech team.
  Read the code below and use it for any of your creation
*/
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C dis(0x27, 16, 2);
uint8_t heart[8] = {0x0, 0xa, 0x1f, 0x1f, 0xe, 0x4, 0x0};
 
void setup() {
  dis.init();
  dis.backlight();
  dis.createChar(1, heart);
}
 
void loop() {
  //welcome();
  //End();
}
void welcome() {
  dis.setCursor(2, 0);
  dis.print("HELLO GUYS!");
 
  for (int a = 0; a < 16; a++) {
    dis.setCursor(a, 1);
    dis.write(1);
    delay(500);
  }
  dis.clear();
  dis.setCursor(1, 0);
  dis.print("WELCOME TO LCD");
  dis.setCursor(0, 1);
  dis.print("TUTORIAL");
  for (int i = 8; i < 16; i++) {
    dis.setCursor(i, 1);
    dis.print(".");
    delay(500);
  }
  dis.clear();
}
void End() {
  dis.clear();
  dis.setCursor(0, 0);
  dis.print("THANKS FOR");
  dis.setCursor(0, 1);
  dis.print("WATCHING");
  for (int i = 10; i < 16; i++) {
    dis.setCursor(i, 0);
    dis.print(".");
    delay(500);
  }
  for (int i = 8; i < 16; i++) {
    dis.setCursor(i, 1);
    dis.print(".");
    delay(500);
  }
  dis.clear();
  dis.setCursor(0, 0);
  dis.print("PLEASE SUBSCRIBE");
  dis.setCursor(0, 1);
  dis.print("MY CHANNEL");
  for (int a = 10; a < 16; a++) {
    dis.setCursor(a, 1);
    dis.print(".");
    delay(500);
  }
}
