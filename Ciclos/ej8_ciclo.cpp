//Ejercicio #8 suma de n numeros impares.

/****************************************************************
Escriba un programa que calcule el valor de 1+3++...+2n-1
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables.
        int n,suma=0;
    //Solicitar valores al usuario.
        cout<<"Digite el valor de n: "; cin>>n;
    //Acciones del programa.
        for(int i=1;i<=(2*n)-1;i+=2){
            suma+=i;
        }
    //Mostrar resultados del programa.
        cout<<"La suma total es: "<<suma<<endl;
    return 0;
}
