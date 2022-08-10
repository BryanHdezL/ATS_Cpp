// Funcion strlen() -> Longitud de una cadena de caracteres.

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char palabra[] = "Bryan Hernandez Lopez";   // Variable que contiene la cadena de caractes.
    int longitud = 0;   // Variable que contendra el valor de la longitud de la cadena de caracteres.
    longitud = strlen(palabra);
    cout << "Numero de digitos de la cadena es: " << longitud << endl;
    return 0;
}