//Ejercicio #11 suma de n potencias de base 2.

/****************************************************************
Escriba un programa que calcule el valor de 
(2^1)+(2^2)+(2^3)+...+(2^n)
****************************************************************/

//Librerias.
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables.
        int n,suma=0;
    //Solicitar datos al usuario.
        cout<<"Digite el valor de n: "; cin>>n;
    //Acciones del programa
        for(int i=1;i<=n;i++){
            suma+=pow(2,i);
        }
    //Mostrar resultados del programa.
        cout<<"El resultado de la suma es: "<<suma<<endl;
    return 0;
}