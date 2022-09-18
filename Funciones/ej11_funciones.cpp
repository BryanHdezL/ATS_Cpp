// Ejercicio #11.

/***********************************************************************
Realice una funcion que tome como parametros un vector de numeros
enteros y devuelva la suma de sus elementos.
***********************************************************************/

// Librerias
#include <iostream>
using namespace std;
void suma(int vec[], int, int&);
// Pototipos de las funciones.

// Funcion principal.
int main() {
    // Variables de la funcion.
    const int TAM = 5;
    int vec[TAM] = {8, 6, 1, 6, 0}, sum = 0;
    // Acciones del programa.
    suma(vec, TAM, sum);
    cout << "La suma es: " << sum << endl;
    return 0;
}

// Funcion
void suma(int vec[], int tam, int& sum) {
    for (int i = 0; i < tam; i++){
        sum += vec[i];
    }
}