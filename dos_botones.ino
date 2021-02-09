#include <Servo.h>
Servo myServo; 
int angle =13;
const int pinButton1 = 2;
//2
const int pinButton2 = 3;
//3
int button1State=0;
int button2State=0;

void setup() {
  myServo.attach(9);
  Serial.begin(9600);
  pinMode(pinButton1, INPUT);
  pinMode(pinButton2, INPUT);
}
void loop() {
button1State = digitalRead(pinButton1);
Serial.print("El botón uno me dice que su estado es: ");
Serial.print(button1State);
if (button1State ==1){
  movimiento1();
}
button2State = digitalRead(pinButton2);
Serial.print("El botón dos me dice que su estado es: ");
Serial.print(button2State);
if (button2State == HIGH){
  
movimiento2();
}


}

void movimiento1(){
  myServo.write(30);
delay(500);
myServo.write(60);
delay(500);
myServo.write(120);
delay(500);
myServo.write(100);
delay(500);
myServo.write(10);
delay(500);
}

void movimiento2(){
myServo.write(90);
delay(300);
myServo.write(160);
delay(300);
myServo.write(90);
delay(300);
myServo.write(0);
delay(300);
} 
