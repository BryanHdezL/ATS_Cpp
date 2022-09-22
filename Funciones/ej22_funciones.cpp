// Ejercicio #22.

/***********************************************************************
Escriba una funcion escribeNumeros(int ini, int fin) que devuelva en la
salida estandar los numeros del ini al fin. Escriba una version que
escriba los numeros en orden ascendente.

    escribeNumeros(ini,fin) =   ini                         , si ini=fin
                                escribeNumeros(ini,fin-1)   , si fin>ini
***********************************************************************/

// Librerias
#include <iostream>
using namespace std;

// Pototipos de las funciones.
void escribeNumeros(int, int);

// Funcion principal.
int main() {
    // Variables de la funcion.
    int inicio, fin;
    // Solicitar datos al usuario.
    cout << "Inicio: ";
    cin >> inicio;
    cout << "Fin: ";
    cin >> fin;
    // Acciones del programa.
    cout << "Numeros: ";
    escribeNumeros(inicio, fin);
    return 0;
}

// Funcion
void escribeNumeros(int ini, int fin) {
    if (ini == fin) {
        cout << ini << ", ";
    } else {
        escribeNumeros(ini, fin - 1);
        cout << fin << ", ";
    }
}