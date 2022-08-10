// Funcion strcpy() -> Copear el contenido de una cadena en otra.

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nombre1[] = "Bryan";
    char nombre2[20];
    strcpy(nombre2, nombre1);   //strcpy(cadDestino,cadOrigen)
    cout << nombre2 << endl;
    return 0;
}