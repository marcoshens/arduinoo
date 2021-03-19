//marcos hens campos
//dia 19 de marzo de 2021
//hay que programarlo para que cuando este el potenciometro a 0 pulsando el boton se encienda la luz y cuando  dejes de pulsar el boton se apage la luz y no se encienda mas.

int potVal (1023, 0, 255, 0);
int switchState = 0;
const int greenLEDPin=3;
const int buttonPin= 4; 
const int potPin= A1;
void setup() {
pinMode(greenLEDPin,OUTPUT);
Serial.begin(9600);
pinMode(buttonPin, INPUT);
pinMode(potPin, INPUT);
}
void loop() {
 switchState = digitalRead(4);
 potVal = analogRead(potPin); 

 if (switchState == LOW){
 digitalWrite(A1,HIGH);
 
 digitalWrite(4, LOW);
}  
else{ 
   digitalWrite(A1, LOW);
   digitalWrite(4, HIGH);
   }
}
