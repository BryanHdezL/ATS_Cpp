//Ejercicio #3 determinar los numeros pares e impares.

/***********************************************************************
Realice un programa que lea un valor entero y determine si se trata de
un numero par o impar.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int num;
    //Solicitar datos al usuario.
        cout<<"Digite un numero: "; cin>>num;
    //Acciones del programa (Mostrar resultados).
        if(num==0){
            cout<<"El numero es un valor nulo"<<endl;
        }else if(num%2==0){
            cout<<"El numero es un valor par"<<endl;
        }else{
            cout<<"El numero es un valor impar"<<endl;
        }
    return 0;
}