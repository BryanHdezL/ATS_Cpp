//Matrices Dinamicas.

/***********************************************************************
Ejemplo: Rellenar una matriz de NxM y mostrar su contenido.

**punteroMatriz     →   *punteroFila    →       [int] [int] [int]
                        *punteroFila    →       [int] [int] [int]
                        *punteroFila    →       [int] [int] [int]
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
void leer();
void mostrar(int **, int, int);

//Variables globales.
int **punteroMatriz;    //Puntero que señala a una matriz   (Puntero de punteros).
int nFil, nCol;

//Funcion principal.
int main(){
    //Solicitar datos al usuario.
    leer();
    //Acciones del programa.
    mostrar(punteroMatriz, nFil, nCol);
    //Liberando memoria.
    for (int i = 0; i < nFil; i++){ //Liberando la memoria de las columnas.
        delete[] punteroMatriz[i];
    }
    delete[] punteroMatriz;  //Liberando la memoria de las filas.
    return 0;
}

// Funcion para mostrar el contenido de la matriz;
void mostrar(int **punteroMatriz, int fil, int col) {
    cout << "\n Matriz capturada: " << endl;
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++){
            cout << "\t" << *(*(punteroMatriz + i) + j);    //punteroMatrix[i][j]
        }
        cout << "\n";
    }
}

// Funcion para leer el contenido de la matriz;
void leer(){
    //Leemos el numero de filas y columas que tendra la matriz.
    cout << "Filas: ";
    cin >> nFil;
    cout << "Columnas: ";
    cin >> nCol;
    //Reservando memoria para la matriz.
    punteroMatriz = new int *[nFil];  //Reservando memoria para las filas.
    for (int i = 0; i < nFil; i++){
        punteroMatriz[i] = new int[nCol];   //Reservando memoria para las columnas.
    }
    //Leemos el contenido de la matriz.
    cout << "\nElementos de la matriz: " << endl;
    for (int i = 0; i < nFil; i++){
        for (int j = 0; j < nCol; j++){
            cin >> *(*(punteroMatriz + i) + j); // punteroMatriz[i][j]
        }
    }
}