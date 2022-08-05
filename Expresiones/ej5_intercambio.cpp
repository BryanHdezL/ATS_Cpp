//Ejercicio #5 intercambio de valores.

/***********************************************************************
Escribe un fragmento de programa que interambie los valores de dos
variables
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Fucnion principal.
int main(){
    //Declaracion de variables.
        float a,b,aux;
    //Solciitar valores al usuario.
        cout<<"Digite el valor de A: "; cin>>a;
        cout<<"Digite el valor de B: "; cin>>b;
    //Acciones dle programa.
        //Mostrar valores capturados
        cout<<"Valor de A antes del cambio: "<<a<<endl;
        cout<<"Valor de B antes del cambio: "<<b<<endl;
        aux=a;
        a=b;
        b=aux;
    //Mostrar resultados del programa.
        cout<<"Nuevo valor de A: "<<a<<endl;
        cout<<"Nuevo valor de B: "<<b<<endl;
    return 0;
}