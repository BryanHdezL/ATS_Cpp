//Ejercicio #10 suma de n factoriales.

/****************************************************************
Escriba un programa que calcule el valor de 1!+2!+3!+...+n!
(suma de factoriales)
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables.
        int n,fact=1,suma=0;
    //Solicitar valores al usuario.
        cout<<"Digite el valor de n: "; cin>>n;
    //Acciones dlel programa.
        for(int i=1;i<=n;i++){
            fact=1;
            for(int j=1;j<=i;j++){
                fact*=j;
            }
            suma+=fact;
        }
    //Mostrar resultados del programa.
        cout<<"La suma de factoriales es: "<<suma<<endl;
    return 0;
}