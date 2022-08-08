// Ejercicio #7 Determar si una matriz es simetrica.

/****************************************************************
Desarrollar un programa que determine si una matriz es simetrica
o no. Una matriz es simetrica si es cuadrada y si es ifual a su
matriz traspuesta.
****************************************************************/

// Librerias.
#include <conio.h>

#include <iostream>
using namespace std;

// Funcion principal.
int main() {
    // Declaracion de variables.
    int A[50][50], fil, col;
    char band = 'F';
    // Solciitar valroes al usuario.
    // Valor de las matrices.
    cout << "Digite el numero de filas: ";
    cin >> fil;
    cout << "Digite el numero de columnas: ";
    cin >> col;
    // Valores de la matriz 1.
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < col; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    if (fil == col) {
        for (int i = 0; i < fil; i++) {
            for (int j = 0; j < col; j++) {
                if (A[i][j] == A[j][i]) {
                    band = 'V';
                }
            }
        }
    }

    // Mostrar resultados del programa.
    if (band == 'V') {
        cout << "La matriz es simetrica." << endl;
    } else {
        cout << "La matriz no es simetrica." << endl;
    }
    getch();
    return 0;
}
