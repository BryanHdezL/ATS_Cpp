//Ejercicio #9.

/***********************************************************************
Realice un programa que calcule la suma de dos matrices dinamicas.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
void leer();
void sumar(int **, int **, int, int);
void mostrar(int **, int, int);

//Variables globales.
int **A, **B, fil, col;

//Funcion principal.
int main(){
    //Solicitar datos al usuario.
    leer();
    //Acciones dle programa
    sumar(A, B, fil, col);
    mostrar(A, fil, col);
    //Liberar la memoria utilizada.
    for (int i = 0; i < fil; i++){
        delete[] A[i];
        delete[] B[i];
    }
    delete[] A;
    delete[] B;
    return 0;
}

//Funcion para mostrar la matriz resultante.
void mostrar(int **A, int fil, int col){
    cout << "\n Matriz resultante: " << endl;
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            cout << "\t" << *(*(A + i) + j);
        }
        cout << "\n";
    }
}

//Funcion para sumar las matrices.
void sumar(int **A, int **B, int fil, int col){
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            *(*(A + i) + j) += *(*(B + i) + j);
        }
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
    //Leer la primer matriz.
    cout << "\n Matriz A: " << endl;
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            cin >> *(*(A + i) + j); //A[i][j]
        }
    }
    //Reservando memoria para la matriz B.
    B = new int*[fil]; //Reservando memoria para las filas,
    for (int i = 0; i < fil; i++){
        B[i] = new int[col];    //Reservando memoria para las columnas.
    }
    //Leer la segunda matriz.
    cout << "\n Matriz B: " << endl;
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            cin >> *(*(B + i) + j); //B[i][j]
        }
    }
}