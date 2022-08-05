//Ejercicio #2 determinal el numero mayor entyre 3 numeros.

/***********************************************************************
Escriba un programa que lea tres numeros y determine cual de ellos es 
el mayor.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int num1,num2,num3;
    //Solicitar datos al usuario;
        cout<<"Digite el primer numero: "; cin>>num1;
        cout<<"Digite el segundo numero: "; cin>>num2;
        cout<<"Digite el tercer numero: "; cin>>num3;
    //Acciones del programa (Mostrar resultado).
        if(num1>=num2 && num1>=num3){
            cout<<"El numero mayor es "<<num1;
        }else if(num2>=num3 && num2>=num1){
            cout<<"El numero mayor es "<<num2;
        }else if(num3>=num1 && num3>=num2){
            cout<<"El numero mayor es "<<num3;
        }
    return 0;
}