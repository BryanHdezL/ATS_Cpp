//Ejercicio #16.

/***********************************************************************
Realice una funcion que dada una matriz y un numero de fila de la matriz
devuelva el menor de los elementos almacenados en dicha fila.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

// Variables globales.
int M[50][50], nfil, ncol;

//Pototipos de las funciones.
void mostrarMenor(int);
int leer();

//Funcion principal.
int main(){
    //Variables de la funcion.
    int fila;
    //Solicitar datos al usuario.
    fila = leer();
    mostrarMenor(fila);
    //Acciones del programa.
    return 0;
}

//Funcion para encontrar el valor menor de la fila seleccionada.
void mostrarMenor(int fila){
    int menor = M[fila][0];
    for (int i = 0; i < ncol; i++){
        if (M[fila][i] < menor){
            menor = M[fila][i];
        }
    }
    cout << "\n\t Menor: " << menor << endl;
}

//Funcion para leer el contenido de la matriz.
int leer(){
    int fila;
    cout << "Digite el numero de filas: ";
    cin >> nfil;
    cout << "\nDigite el numero de columnas: ";
    cin >> ncol;
    for (int i = 0; i < nfil; i++){
        for (int j = 0; j < ncol; j++){
            cout << "\tM[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }
    cout << "\n Digite el numero de la fila a analizar: ";
    cin >> fila;
    return fila;
}