const int ledPin = 6;
const int buttonPin = 2;


void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int swichstate = 0;
swichstate = digitalRead(buttonPin);

if(swichstate == HIGH){
digitalWrite(ledPin,LOW);
delay(1);
digitalWrite(ledPin,HIGH);
delay(1);
}
else{
digitalWrite(ledPin,HIGH);
}
}
