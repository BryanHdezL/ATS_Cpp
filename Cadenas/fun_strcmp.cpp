// Funcion strcmp() -> Comparar cadenas.

#include <string.h>

#include <iostream>
using namespace std;

int main() {
    char palabra1[] = "Hola";
    char palabra2[] = "Hola";
    char palabra3[] = "Avion";
    char palabra4[] = "Barco";
    // Comparacion de igualdad de cadenas.
    if (strcmp(palabra1, palabra2) == 0) {  // strcmp(cad1,cad2) == [T/F]
        cout << "Ambas cadenas son iguales." << endl;
    } else {
        cout << "Ambas cadenas no son iguales." << endl;
    }
    // Comparacion de orden alfabetico de cadenas.
    if (strcmp(palabra3, palabra4) > 0) {  // strcmp(cad1,cad2) > 0 → cad1 es mayor alfabeticamente
        cout << palabra3 << " esta despues alfabeticamente" << endl;
    } else {  // strcmp(cad1,cad2) < 0 → cad2 es mayor alfabeticamente
        cout << palabra4 << " esta despues alfabeticamente" << endl;
    }
    return 0;
}