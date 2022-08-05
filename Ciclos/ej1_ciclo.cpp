//Ejercicio #1 tabla de multiplicar.

/****************************************************************
Realice un programa que solicite de la entrada estandar un entero
del 1 al 10 y muestre en la salida estandar su tabla de
multiplicar.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables.
        int num;
    //Solicitar valores al usuario.
        cout<<"Digite un numero [1-10]: "; cin>>num;
    //Acciones del programa (Mostrar resultados).
        for(int i=1;i<=20;i++){
            cout<<num<<" x "<<i<<"= "<<num*i<<endl;
        }
    getch();
    return 0;
}