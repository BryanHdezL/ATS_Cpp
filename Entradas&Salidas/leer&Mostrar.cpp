//Ejercicio de leer e imprimir datos en consola.

/***********************************************************************
Realice un programa que lea de la entrada estandar los siguientes datos
de una persona:
    Edad: dato de tipo entero.
    Sexo: dato de tipo caracter.
    Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estandar.
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion Principal.
int main(){
    //Declaracion de variables.
        int edad;
        float altura;
        char sexo[10];
    //Solicitar valores al usuario.
        cout<<"Digite su edad: ";
        cin>>edad;
        cout<<"Digite su sexo: ";
        cin>>sexo;
        cout<<"Digite su altura: ";
        cin>>altura;
    //Acciones del programa (mostrar datos).
        cout<<"La edad es: "<<edad<<endl;
        cout<<"EL sexo es: "<<sexo<<endl;
        cout<<"La altura es: "<<altura<<endl;
    return 0;
}