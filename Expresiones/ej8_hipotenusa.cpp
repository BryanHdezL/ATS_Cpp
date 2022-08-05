//Ejercicio #8 calculo de hipotenusa de un triangulo.

/***********************************************************************
Escribe en un programa que lea de la entrada estandar los dos catetos
de un triangulo rectangulo y escriba en la salida estandar su hipotenusa.
***********************************************************************/

//Librerias
#include <iostream>
#include <math.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables;
        float a,b,c;
    //Solicitar datos al usuario.
        cout<<"Digite el valor del cateto 1: "; cin>>a;
        cout<<"Digite el valor del cateto 2: "; cin>>b;
    //Acciones del programa.
        c=sqrt(pow(a,2)+pow(b,2));
    //Mostrar resultado del programa.
        cout.precision(3);
        cout<<"El valor de la hipotenusa es: "<<c<<endl;
    return 0;
}