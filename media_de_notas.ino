
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
int Notas[]= {9,10,5,8,6};
int numeroNotas = 5;
void setup(){
  int sumaNotas = 0;
  int notaminima = 10;
  for(int i = 0;i <numeroNotas;i++){
    sumaNotas= sumaNotas+Notas[i];
  //sumaNotas = sumaNotas+Notas[0]
  //sumaNotas = sumaNotas+ sumaNotas[13]
  //asi repetibamente sumando +1 hasta que se quede sin elementos.

  if (Notas[i] <notaminima) {
   notaminima = Notas[i]; 
  } //llave del if del mínimo
  } //llave del for
float mediaNotas = sumaNotas/numeroNotas;
 Serial.begin(9600);
 Serial.print("Nota media):");
 Serial.println(mediaNotas);
 Serial.print("notaminima   ");
 Serial.println(notaminima);
 Serial.println("calculo de si toca hacer el examen con el operador y");
 if (mediaNotas >= 5 && notaminima > 3) {
  Serial.println("no toca hacer el examen de acceso"); 
 }
 else{
  Serial.println("toca hacer el examen de acceso");
 }
 }// llave del setup

 
 void loop(){
 }
