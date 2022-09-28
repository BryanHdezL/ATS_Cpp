//Ejercicio #10.

/***********************************************************************
Realice un programa que lea la matriz dinamica de NxM y cree su 
matrz traspuesta.

Nota: La matriz trspuesta es aquella en la que la columa i era la fila i
de la matriz original.

    | 1 2 3 |              | 1 4 7 |
    | 4 5 6 |       →      | 2 5 8 |
    | 7 8 9 |              | 3 6 9 |
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
void leer();
void mostrar(int **, int, int);

//Variables globales.
int **A, fil, col;

//Funcion principal.
int main(){
    //Solicitar datos al usuario.
    leer();
    //Acciones dle programa
    cout << "\n Matriz resultante: " << endl;
    mostrar(A, fil, col);
    //Liberar la memoria utilizada.
    for (int i = 0; i < fil; i++){
        delete[] A[i];
    }
    delete[] A;
    return 0;
}

//Funcion para mostrar la matriz resultante.
void mostrar(int **A, int fil, int col){
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            cout << "\t" << *(*(A + j) + i);
        }
        cout << "\n";
    }
}

//Funcion que lee las dimensiones de la matriz.
void leer(){
    //Leyendo las dimensiones de la matriz.
    cout << "Filas: ";
    cin >> fil;
    cout << "Columnas: ";
    cin >> col;
    //Reservando memoria para la matriz A.
    A = new int*[fil]; //Reservando memoria para las filas,
    for (int i = 0; i < fil; i++){
        A[i] = new int[col];    //Reservando memoria para las columnas.
    }
    //Leer la matriz.
    cout << "\n Matriz: " << endl;
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            cin >> *(*(A + i) + j); //A[i][j]
        }
    }
}