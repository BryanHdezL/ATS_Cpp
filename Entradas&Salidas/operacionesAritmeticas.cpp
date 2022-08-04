//Operaciones aritmeticas en c++

/***********************************************************************
Escribe un programa que lea de la entrada estandar dos numeros y
muestre en la salida estandar su suma, resta, multiplicacion y division.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Funcion Principal.
int main(){
    //Declaracion de variables.
        int num1,num2;
        float suma=0,resta=0,multiplicacion=0,division=0;
    //Solicitando datos al usuario.
        cout<<"Digite el primer numero: ";
        cin>>num1;
        cout<<"Digite el segundo numero: ";
        cin>>num2;
    //Acciones del programa
            suma=num1+num2;             //Suma.
            resta=num1-num2;            //Resta.
            multiplicacion=num1*num2;   //Multiplicacion.
            division=num1/num2;         //Division.
    //Mostrar resultados.
        cout<<"El resultado de la suma es: "<<suma<<endl;
        cout<<"El resultado de la resta es: "<<resta<<endl;
        cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
        cout<<"El resultado de la division es: "<<division<<endl;
    return 0;
}