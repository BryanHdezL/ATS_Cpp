//Ejercicio #16 descomposicion de factores.

/****************************************************************
Realice un programa que calcule la descomposicion en factores
primos de un numero entero.

Por ejemplo:
    20 = 2*2*5
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
        cout<<"Digita un numero: "; cin>>num;
    //Acciones del programa.
        for(int i=2;num>1;i++){
            while(num%i==0){
                cout<<i<<"*";
                num/=i;
            }
        }
    getch();
    return 0;
}