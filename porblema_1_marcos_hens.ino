//marcos hens campos
//19 de marzo de 2021
//utilizando los tres led tengo que configurarlos para que uno de los leds parpade una vez antes que los otros dos


int ledpin1 = 3;
int ledpin2 = 10;
int ledpin3 = 11;

void setup() {
 pinMode(ledpin3, OUTPUT);
 pinMode(ledpin2, OUTPUT);
 pinMode(ledpin1, OUTPUT);

 digitalWrite(ledpin3, HIGH); 
 delay(1000);
 digitalWrite(ledpin3, LOW);
 delay(1000);
 digitalWrite(ledpin2, LOW); 
 digitalWrite(ledpin1, LOW); 
 delay(1000);

}

void loop() {
 
 digitalWrite(ledpin3, HIGH);   
 digitalWrite(ledpin2, HIGH); 
 digitalWrite(ledpin1, HIGH); 
 delay(500); 
 digitalWrite(ledpin3, LOW); 
 digitalWrite(ledpin2, LOW); 
 digitalWrite(ledpin1, LOW); 
 delay(500);
}
