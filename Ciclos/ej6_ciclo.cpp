//Ejercicio #6 calculo de potencias con ciclos.

/****************************************************************
Escriba un programa que calcule x^y, donde tanto x como y son
enteros positivos, sin utilizar la funcion pw.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables.
        int x,y,resultado=1;
    //Solicitar valores al usuario.
        cout<<"Digite el valor de x: "; cin>>x;
        cout<<"Digite el valor de y: "; cin>>y;
    //Acciones del programa.
        for(int i=y;i>0;i--){
            resultado*=x;
        }
    //Resultados del programa.
        cout<<"El valor de x^y es: "<<resultado<<endl;
    return 0;
}