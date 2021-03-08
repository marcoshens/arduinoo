
/*
*  Documentación del programa 
*  Autore:Marcos hens
*  Fecha: 4/03/2021
*  Código referencia: https://github.com/d-prieto/arduinoCourse/edit/main/Variaciones%20de%20Joystick.md
*  Descripción del programa: 
*  Calcula media de notas
*  
*  Hardware necesario:ninguno
*/
int Notas[]= {5,8,9,4,3};
int numeroNotas = 5;
void setup(){
  int sumaNotas = 0;
  for(int i = 0;i <numeroNotas;i++){
    sumaNotas= sumaNotas+Notas[i];
  //sumaNotas = sumaNotas+Notas[0]
  //sumaNotas = sumaNotas+ sumaNotas[13]
  //asi repetibamente sumando +1 hasta que se quede sin elementos.
  }
float mediaNotas = sumaNotas/numeroNotas;
 Serial.begin(9600);
 Serial.print("Nota media):");
 Serial.print(mediaNotas);

 }

 void loop(){
  
 }
