//Ejercicio de captura de datos erroneos en consola.

/***********************************************************************
Ejecute el programa del ejercicio anterior con entradas erroneas y
observe los resultados.
Por ejemplo, introduzca un dato de tipo caracter cuando se estpera un
dato de tipo entero.
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