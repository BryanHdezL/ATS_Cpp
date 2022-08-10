//Ejercicio #1 longitud de una cadena de caracteres con condicional de impresion.

/****************************************************************
Hacer un programa que pida al usuario que digite una cadena de
caracteres, luego verificar la longitud de la cadena, y si esta
supera a 10 caracters mostrarla en pantalla, caso contarrio no 
mostrarla.
****************************************************************/

//Librerias.
#include <iostream>
#include <string.h>
using namespace std;

//Funcion prinicpal.
int main(){
    //Variables de la funcion.
    char cadena[30];
    int longitud = 0;
    //Solicitar datos al usuario.
    cout << "Digite una cadena de caracteres: ";
    cin.getline(cadena,30,'\n');
    longitud = strlen(cadena);
    //Mostrar en consola.
    if(longitud<10){
        cout << "LA CADENA TIENE MENOS DE 10 ELEMENTOS.";
    }else{
        cout << cadena << endl;
    }
    return 0;
}