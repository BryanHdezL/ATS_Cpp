//Ejercicio #5 determinar una vocal minuscula.

/***********************************************************************
Escriba un programa qu4e lea de la entrada estandar un caracter e indique
en la salida estandar si el caracter es una vocal minuscula o no.
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        char letra;
    //Solicitar valores al usuario.
        cout<<"Digite un caracter: "; cin>>letra;
    //Acciones del programa (Mostrar resultado).
        if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'){
            cout<<"Si es una vocal minuscula"<<endl;
        }else{
            cout<<"No es una vocal minuscula"<<endl;
        }
    return 0;
}