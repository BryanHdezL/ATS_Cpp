//Ejercicio #5 Comprobar que una cadena sea palindrmo.

/****************************************************************
Hacer un programa que determine si una palabra es políndroma.
****************************************************************/

//Librerias.
#include <iostream>
#include <string.h>
using namespace std;

//Funcion prinicpal.
int main(){
    //Variables de la funcion.
    char cad[30];
    char cadAux[30];
    //Solicitar datos al usuario.
    cout << "Digite una cadena: ";
    cin.getline(cad, 30, '\n');
    //Mostrar en consola.
    strcpy(cadAux,cad);
    strrev(cadAux);
    if(strcmp(cad,cadAux) == 0){
        cout << "La cadena SI es polindroma.";
    }else{
        cout << "La cadena NO es polindroma.";
    }
    return 0;
}