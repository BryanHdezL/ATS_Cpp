//Ejercicio #1 de expresiones en C++.

/***********************************************************************
Escribe la siguiente expresion ((a/b)+1) como expresion en C++
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        float a,b,resultado;
    //Solicitar valores al usuario.
        cout<<"Digite el valor de a: "; cin>>a;
        cout<<"Digite el valor de b: "; cin>>b;
    //Acciones dle programa.
        resultado=(a/b)+1;
    //Mostrar resultados del programa.
        cout.precision(3);
        cout<<"El resultado es: "<<resultado<<endl;
        cout<<"El resultado es: "<<resultado<<endl;
    return 0;
}