//Ejercicio #2 Copia de una cadena a otra.

/****************************************************************
Pedir al usuario una cadena de caracteres, almacenarla en un
arreglo y copiar todo su contenido hacia otro arreglo de
caracteres.
****************************************************************/

//Librerias.
#include <iostream>
#include <string.h>
using namespace std;

//Funcion prinicpal.
int main(){
    //Variables de la funcion.
    char cadena[30];    //Cadena capturada por el usuario.
    char cadenaAux[30]; //Cadena donde se copeara el contendio.
    //Solicitar datos al usuario.
    cout << "Digite una cadena de caracteres: ";
    cin.getline(cadena, 30, '\n');
    //Mostrar en consola.
    strcpy(cadenaAux,cadena);
    cout << cadenaAux << endl;
    return 0;
}