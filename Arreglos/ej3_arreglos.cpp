//Ejercicio #3 lectura de valores mostrando el indice del vector.

/****************************************************************
Escribe un programa que lea de la entrada estandar un vector de
numeros y muestre en la salida estandar los numeros del vector
con sus indices asociados
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int numeros[5];
    //Solicitar valores al usuario.
        for(int i=0;i<5;i++){
            cout<<"Digite le valor #"<<i+1<<": ";
            cin>>numeros[i];
        }
    //Acciones del programa (Mostrar resultados).
        for(int i=0;i<5;i++){
            cout<<"Numeros["<<i<<"] : "<<numeros[i]<<endl;
        }
    getch();
    return 0;
}