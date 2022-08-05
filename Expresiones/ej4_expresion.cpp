//Ejercicio #4 de expresiones en C++.

/***********************************************************************
Escribe la siguiente expresion (a+(b/(c-d))) como expresion en C++
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variablles
        float a,b,c,d,resultado;
    //Solciitar valores al usuario.
        cout<<"Digite el valor de A: "; cin>>a;
        cout<<"Digite el valor de B: "; cin>>b;
        cout<<"Digite el valor de C: "; cin>>c;
        cout<<"Digite el valor de D: "; cin>>d;
    //Acciones del programa.
        resultado=a+(b/(c-d));
    //Mostrar resultados del programa.
        cout.precision(3);
        cout<<"El resultado es: "<<resultado<<endl;
    return 0;
}