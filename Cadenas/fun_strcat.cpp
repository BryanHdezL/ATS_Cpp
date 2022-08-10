// Funcion strcat() -> Concatenar cadenas.

#include <string.h>

#include <iostream>
using namespace std;

int main() {
    char cad1[] = "Esto es una cadena";
    char cad2[] = " de ejemplo.";
    char cad3[30];
    strcpy(cad3, cad1);  // Copeamos la primer cadena a la cadena auxiliar.
    strcat(cad3, cad2);  // strcat(cadFinal,cadAuxiliar)
    cout << cad3 << endl;
    return 0;
}