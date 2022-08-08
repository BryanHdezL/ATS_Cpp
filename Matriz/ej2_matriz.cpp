//Ejercicio #2 Mostrar diagonal prinicpal de una matriz.

/****************************************************************
Realiza un programa que defina una matriz de 3x3 y escriba un
ciclo para que muestre la diagonal principal de la matriz.
****************************************************************/

// Librerias.
#include <conio.h>

#include <iostream>
using namespace std;

// Funcion principal.
int main() {
    // Declaracion de variables.
    int num[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // Acciones del programa.
    // Mostrar matriz inicial.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << num[i][j] << " ";
        }
        cout << "\n";
    }
    // Mostrar resultados del programa.
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                cout << num[i][j] << endl;
            }
        }
    }
    getch();
    return 0;
}