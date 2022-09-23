//Transmision de direcciones.

/***********************************************************************
Ejemplo: intercambiar el valor de 2 variables.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Prototipos de las funciones.
void intercambiar(int *, int *);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int num1 = 24, num2 = 50;
    //Acciones del programa.
    //Mostando los valores iniciales.
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;
    intercambiar(&num1, &num2);
    cout << "Nuevo valor de Num1: " << num1 << endl;
    cout << "Nuevo valor de Num2: " << num2 << endl;
    return 0;
}

//Funcion que realiza el intercambio utilizando punteros.
void intercambiar(int *num1, int *num2){
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}