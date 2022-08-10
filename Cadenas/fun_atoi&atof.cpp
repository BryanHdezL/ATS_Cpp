// Funcion atoi() -> Convertir cadenas a enteros.
// Funcion atof() -> Convertir cadenas a flotantes.

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    char cad[] = "123.456";
    int entero;
    float flotante;
    entero = atoi(cad); //Numero entero.
    flotante = atof(cad);   //Nuemro flotante.
    cout << "El numero entero es: " << entero << endl;
    cout << "El numero flotante es: " << flotante << endl;
    return 0;
}