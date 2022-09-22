//Ejercicio #15.

/***********************************************************************
Desarrollar una funcion que determine si una matriz es simetrica o no.

Una matriz es simetrica si: A = A^t

1. La matriz debe ser cuadrada.
2. Aij = Aji.

|+2  +5  +9|        |+2  +5   +9|
|+5  +8  -1|    →   |+5  +8   -1|
|+9  -1 +10|        |+9  -1  +10|
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void transpuesta(int A[3][3], int B[3][3]);
void mostrar(int M[3][3]);
//Funcion principal.
int main(){
    //Variables de la funcion.
    const int FIL = 3, COL = 3;
    int B[FIL][COL], A[FIL][COL] = {{2, 8, 9},
                                    {6, 1, -1},
                                    {5, -1, 10}};
    //Acciones del programa.
    cout << "Matriz Inicial: " << endl;
    mostrar(A);
    transpuesta(A,B);
    cout << "Matriz Final: " << endl;
    mostrar(B);
    return 0;
}

//Funcion para obtener la matriz transpuesta.
void transpuesta(int A[3][3], int B[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            B[i][j] = A[j][i];
        }
    }
}

//Funcion para mostrar la matriz.
void mostrar(int M[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << M[i][j] << "\t";
        }
        cout << "\n";
    }
}