//colocar en la seccion de variables

int switchState = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// revisar que el pin del botón es este
int buttonPin=4;


//incluir en el setup ()

pinMode(buttonPin,INPUT);

//incluir en el loop (sustituyendo)

void loop() {
  checkButton();
  if (play) {
   // poner aquí la función que toque ejecutar
  }
}

// Función de checkbutton

void checkButton(){
  switchState = digitalRead(buttonPin);
  if (switchState == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
