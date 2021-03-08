#include <LiquidCrystal.h>
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

const int switchPin = 6;
int switchState = 0;
int prevswitchState = 0;
int reply;

void setup() {
lcd.begin(16, 2);
pinMode(switchPin,INPUT);
lcd.print("QUE DICE");
lcd.setCursor(0, 1);
lcd.print("la bola");
}
void loop() {
  switchState = digitalRead(switchPin);
  if (switchState != prevswitchState){
    if (switchState == LOW) {
      reply = random(8);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("la bola dice");
      lcd.setCursor(0,1);
      switch(reply){
        case 0:
        lcd.print("si");
        break;
        case 1:
       lcd.print("probablemente");
       break ; 
       case 2:
      lcd.print("desde luego");
      break;
      case 3:
      lcd.print("tiene buena pinta");
      break;
      case 4:
      lcd.print("no estoy segura");
      break;
      case 5:
      lcd.print("vuelve a preguntar");
      break;
      case 6:
      lcd.print("tengo dudas");
      break;
      case 7:
      lcd.print("no");
      break;
      } //llave del switch 
    } //llave del segundo if
  } //llave del primer if
  prevswitchState = switchState;
} // llave del loop
