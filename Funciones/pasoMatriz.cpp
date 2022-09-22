//Paso de parametros de tipo matriz.

/*
Parametros de la duncion
    void nombreFuncion(tipo nombreMatriz[][TAM], int numFilas, int numColumnas)     Minimo se debe de colocar el numero de columnas.

Llamada a la funcion
    nombreFuncion(nombreMatriz, int numFilas, int numColumnas)
*/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void cuadradoMatriz(int m[][3], int FIL, int COL);
void mostrarMatriz(int m[][3], int FIL, int COL);
//Funcion principal.
int main(){
    //Variables de la funcion.
    const int FIL = 3, COL = 3;
    int matriz[FIL][COL] = {{1,2,3},
                            {4,5,6},
                            {7,8,9}};
    //Acciones del programa.
    cout << "Matriz Inicial: " << endl;
    mostrarMatriz(matriz,FIL,COL);
    cuadradoMatriz(matriz,FIL,COL);
    cout << "\nMatriz Final: " << endl;
    mostrarMatriz(matriz,FIL,COL);
    return 0;
}

//Funcion para calcular los cuadrados
void cuadradoMatriz(int m[][3], int FIL, int COL){
    for (int i = 0; i < FIL; i++){
        for (int j = 0; j < COL; j++){
            m[i][j] *= m[i][j];
        }
    }
}

//Funcion para mostrar los datos del vector
void mostrarMatriz(int m[][3], int FIL, int COL){
    for (int i = 0; i < FIL; i++){
        for (int j = 0; j < COL; j++){
            cout << m[i][j] << "\t";
        }
        cout << "\n";
    }
}