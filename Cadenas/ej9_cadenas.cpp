//Ejercicio #9 .

/****************************************************************
Realice un programa que lea una cadena de caracteres de la entrada
estandar y muestre en la salida estandar cuantas ocurrencias de 
cada vocal existen en la cadena.
****************************************************************/

//Librerias.
#include <iostream>
#include <string.h>
using namespace std;

//Funcion prinicpal.
int main(){
    //Variables de la funcion.
    char cadena[30];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    //Solicitar datos al usuario.
    cout << "Digite una cadena: ";
    cin.getline(cadena, 30, '\n');
    strlwr(cadena);
    //Mostrar en consola.
    for (int j = 0; j < strlen(cadena); j++){
        switch (cadena[j]){
        case 'a': a++; break;
        case 'e': e++; break;
        case 'i': i++; break;
        case 'o': o++; break;
        case 'u': u++; break;
        default: break;
        }
        
    }
    cout << "Vocal a: " << a << endl;
    cout << "Vocal e: " << e << endl;
    cout << "Vocal i: " << i << endl;
    cout << "Vocal o: " << o << endl;
    cout << "Vocal u: " << u << endl;
    return 0;
}