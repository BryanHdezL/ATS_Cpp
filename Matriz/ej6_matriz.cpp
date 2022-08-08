// Ejercicio #6 Suma de matrices.

/****************************************************************
Realice un programa que calcule la suma de dos matrices cuadras
de 3x3.
****************************************************************/

// Librerias.
#include <conio.h>

#include <iostream>
using namespace std;

// Funcion principal.
int main() {
    // Declaracion de variables.
    int A[50][50], B[50][50], n;
    // Acciones del programa.
    // Solciitar valroes al usuario.
    // Valor de las matrices.
    cout << "Digite la dimension de las matrices: ";
    cin >> n;
    // Valores de la matriz 1.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
    // Valores de la matriz 2.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }
    // Mostrar resultados del programa.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] + b[i][j] << " ";
        }
        cout << "\n";
    }
    getch();
    return 0;
}