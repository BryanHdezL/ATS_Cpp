//Ejercicio #2 de expresiones en C++.

/***********************************************************************
Escribe la siguiente expresion ((a+b)/(c+d)) como expresion en C++
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        float a,b,c,d,resultado;
    //Solicitar valores al usuario.
        cout<<"Digite el valor de A: "; cin>>a;
        cout<<"Digite el valor de B: "; cin>>b;
        cout<<"Digite el valor de C: "; cin>>c;
        cout<<"Digite el valor de D: "; cin>>d;
    //Acciones del programa.
        resultado=(a+b)/(c+d);
    //Mostrar el resultado del programa.
        cout.precision(3);
        cout<<"El resultado de la expresion es: "<<resultado<<endl;
    return 0;
}