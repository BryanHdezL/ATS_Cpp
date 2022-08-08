//Ejercicio #2 multiplicacion de los elementos del arreglo.

/****************************************************************
Escribe un programa que defina un vector de numeros y calcule la
multipliciacion acumulada de sus elementos
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion princial.
int main(){
    //Declaracion de vaariables.
        int numeros[]={1,8,3,5,5};
        int multiplicacion=1;
    //Acciones del programa.
        for(int i=0;i<5;i++){
            multiplicacion*=numeros[i];
        }
    //Mostrar resultados.
        cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
    getch();
    return 0;
}
