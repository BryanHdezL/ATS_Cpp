//Ejercicio #3 de expresiones en C++.

/***********************************************************************
Escribe la siguiente expresion (a+(b/c))/(d+(e/f)) como expresion en C++
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        float a,b,c,d,e,f,resultado;
    //Solicitar valores al usuario.
        cout<<"Digite el valor de A: "; cin>>a;
        cout<<"Digite el valor de B: "; cin>>b;
        cout<<"Digite el valor de C: "; cin>>c;
        cout<<"Digite el valor de D: "; cin>>d;
        cout<<"Digite el valor de E: "; cin>>e;
        cout<<"Digite el valor de F: "; cin>>f;
    //Acciones del programa.
        resultado=(a+(b/c))/(d+(e/f));
    //Mostrar el resultado del programa.
        cout.precision(3);
        cout<<"El resultado es: "<<resultado<<endl;
    return 0;
}