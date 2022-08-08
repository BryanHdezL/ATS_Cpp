//Ejercicio #1 Suma de elementos del arreglo.

/****************************************************************
Escribe un programa que defina un vector de numeros y calcule la
suma de sus elementos.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int numeros[]={1,2,3,4,5};
        int suma=0;
    //Acciones del programa.
        for(int i=0;i<5;i++){
            suma+=numeros[i];
        }
    //Mostrar resultados del programa.
        cout<<"La suma de los elementos del arreglo es: "<<suma<<endl;
    getch();
    return 0;
}