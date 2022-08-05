//Ejercicio #9 raiz cuadrada y potencias.

/***********************************************************************
Realice un programa que calcule el valor que toma la siguiente funcion
para valores dados de x e y.
***********************************************************************/

//Librerias.
#include <iostream>
#include <math.h>
using namespace std;

//Funcion Principal.
int main(){
    //Declaracion de variables.
        float x,y,f;
    //Solciitar valores al usuario.
        cout<<"Digite el valor de X: "; cin>>x;
        cout<<"Digite el valor de Y: "; cin>>y;
    //Acciones del programa.
        f=(sqrt(x))/(pow(y,2)-1);
    //Mostrar resultados del programa.
        cout.precision(3);
        cout<<"El valor de la funcion f(x,y) es: "<<f<<endl;
    return 0;
}