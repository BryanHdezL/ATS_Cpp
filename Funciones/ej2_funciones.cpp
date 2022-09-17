//Ejercicio #2.

/***********************************************************************
Escriba una funcion llamada alCuadrado() que calcule el cuadrado del
valor que se le transmite y desplieqgue el resultado. La funcion debera
ser capaz de elevar al cuadrado numero flotantes.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void alCuadrado(float x);

//Variables globales.
float numero;

//Funcion principal.
int main(){
    //Solicitar datos al usuario.
    cout << "Captura un numero: ";
    cin >> numero;
    //Acciones del programa.
    alCuadrado(numero);
    return 0;
}

//Funcion que realiza el calculo del numero alcuadrado.
void alCuadrado(float x){
    cout << "El numero " << x << " elevado al cuadrado es " << x * x << endl;
}