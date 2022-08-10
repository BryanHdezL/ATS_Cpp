//Ejercicio #6 Transformar cadenas a mayusculas.

/****************************************************************
Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas y
decir si son iguales o no.
****************************************************************/

//Librerias.
#include <iostream>
#include <string.h>
using namespace std;

//Funcion prinicpal.
int main(){
    //Variables de la funcion.
    char cad1[30];
    char cad2[30];
    //Solicitar datos al usuario.
    cout << "Digite la primer cadena: ";
    cin.getline(cad1,30,'\n');
    cout << "Digite la segunda cadena: ";
    cin.getline(cad2,30,'\n');
    //Mostrar en consola.
    strupr(cad1);
    strupr(cad2);
    if(strcmp(cad1,cad2) == 0){
        cout << "Ambas cadenas son iguales." << endl;
    }else{
        cout << "Las cadenas son diferentes." << endl;
    }
    return 0;
}