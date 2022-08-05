//Ejercicio #3 suma de cuadrados.

/****************************************************************
Realice un programa que calcule y muestre en la salida estandar
la suma de los cuadrados de los 10 primero enteros mayores que 0.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables;
        int suma=0;
    //Acciones del programa.
        for(int i=1;i<=10;i++){
            suma+=pow(i,2);
        }
    //Mostrar resultados del programa.
        cout<<"Suma de los 10 primeros cuadrados: "<<suma<<endl;
    getch();
    return 0;
}