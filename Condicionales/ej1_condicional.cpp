//Ejercicio #1 determinal el numero mayor entra dos numeros.

/***********************************************************************
Escriba un programa que lea dos numeros y determine cual de ellos es el
mayor
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int num1,num2;
    //Solciitar datos al usuario.
        cout<<"Digite el valor del primer numero: "; cin>>num1;
        cout<<"Digite el valor del segundo numero: "; cin>>num2;
    //Acciones del programa (Mostrar el resultado)
        if(num1>num2){
            cout<<"El numero mayor es: "<<num1<<endl;
        }else if(num2>num1){
            cout<<"El numero mayor es: "<<num2<<endl;
        }else{
            cout<<"Ambos numeros son iguales"<<endl;
        }
    return 0;
}