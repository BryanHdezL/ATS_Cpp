//Ejercicio #9 factorial de n numero

/****************************************************************
Escriba un programa que calcule el valor de 1*2*3*...*n
(factorial de un numero).
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables.
        int n,resultado=1;
    //Solicitar valores al usuaurio.
        cout<<"Digite el valor de n: "; cin>>n;
    //Acciones del programa.
        for(int i=1;i<=n;i++){
            resultado*=i;
        }
    //Mostrar resultados del programa.
        cout<<"El factorial de "<<n<<" es: "<<resultado<<endl;
    return 0;
}
