// Salto de caballo.

/***********************************************************************
Algoritmo que muestra los saltos que debe de realizar la piaza de 
ajedrez caballo, para recorrer cada una de las casillas de un tablero 
de juego sin repetir casilla.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Variables globales.
const int N = 5;
int tablero[N][N];
int d[8][2] = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};

//Prototipos de las funciones.
void escribirTablero();
void saltoCaballo(int i, int x, int y, bool &exito);

//Funcion principal.
int main(){
    // Variables de la funcion.
    bool exito;
    int fila = 0;
    int col = 0;
    tablero[fila][col] = 1;
    //Acciones del programa.
    saltoCaballo(2, fila, col, exito);

    if(exito){  //Si exito es verdadero
        cout << "\n * Camino encontrado * " << endl;
        escribirTablero();
    }else{
        cout << "\n * Camino no encontrado * " << endl;
    }
    // Fin del programa.
    return 0;
}

void escribirTablero(){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << tablero[i][j] << "|";
        }
        cout << "\n";
    }
    cout << "\n";
}

void saltoCaballo(int i, int x, int y, bool &exito){
    // Variables de la funcion
    int nx, ny;
    int k = 0;  //Se inicializa el conteo de los movimientos.
    exito = false;
    // Repetir hasta agotar el numero de movimientos
    do{
        // Inicializamos las nuevas variables.
        k++;
        nx = x + d[k - 1][0];
        ny = y + d[k - 1][1];
        // Verificamos que las coordenas sean validas.
        if ((nx >= 0) && (nx < N) && (ny >= 0) && (ny < N) && (tablero[nx][ny] == 0)){
            // Se guarda el movimiento.
            tablero[nx][ny] = i;
            escribirTablero();  // Se muestra el nuevo movimiento del caballo en el tablero.
            // Se comprueban los valores obtenidos con el movimiento.
            if (i < N*N){
                saltoCaballo(i+1, nx, ny, exito);
                if(!exito){ // Si no se logro concretar un camino adecuado, regresamos a la posicion anterior.
                    tablero[nx][ny] = 0;    // Reseteamos la posicion del tablero.
                }
            }else{
                exito = true;   // Se logro obtener un camino correcto.
            }
        }
    } while ((k < 8) && (!exito));
}