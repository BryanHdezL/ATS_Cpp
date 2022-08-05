//Ejercicio #10 ecuaciones de segundo grado con formula general.

/***********************************************************************
Escriba un programa que calcula las soluciones de una ecuacion de 
segundo grado de la forma ax^2+bx+c=0, teniendo en cuenta la formula
general.
***********************************************************************/

//Librerias.
#include <iostream>
#include <math.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        float a,b,c,x1,x2;
    //Solciitar los valores al usuario.
        cout<<"Digite el valor del coefiiente A: "; cin>>a;
        cout<<"Digite el valor del coefiiente B: "; cin>>b;
        cout<<"Digite el valor del coefiiente C: "; cin>>c;
    //Acciones del programa.
        x1=(((-1)*b)+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
        x2=(((-1)*b)-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
    //Mostrar resultados del programa.
        cout.precision(3);
        cout<<"El valor para X1 es: "<<x1<<endl;
        cout<<"El valor para X2 es: "<<x2<<endl;
    return 0;
}