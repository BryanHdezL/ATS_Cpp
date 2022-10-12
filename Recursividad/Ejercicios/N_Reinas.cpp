// N reinas en el tablero de ajedrez.

/***********************************************************************
Algorirmo que muestra las posiciones de N reinas en un tablero de NxN 
de ajedrez, sin que ninguna de ellas se ataque entre si.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Variables globales.
const int N = 8;
int reinas[N];

//Prototipos de las funciones.
void colocarReina(int, bool &);
bool valido(int);
void mostrarTablero();

//Funcion principal.
int main(){
    // Variables de la funcion.
    bool solucion;
    //Acciones del programa.
    colocarReina(0, solucion);

    if(solucion){  //Si exito es verdadero
        cout << "\n * Si existe combinacion de reinas * " << endl;
        mostrarTablero();
    }else{
        cout << "\n * No existe combinacion de reinas * " << endl;
    }
    // Fin del programa.
    return 0;
}

//Funcion que asigna las posiciones en donde se debe de colocar la reina en el tablero.
void colocarReina(int i, bool &solucion){
    // Variables de la funcion
    int k = 0;  //Se inicializa el conteo de los movimientos.
    solucion = false;
    // Repetir hasta agotar el numero de movimientos
    do{
        // Inicializamos las variables.
        reinas[i] = k;  //Copiamos la reina i en la fila k
        k++;
        mostrarTablero();
        if (valido(i)){
            if (i < (N - 1)) {
                colocarReina(i + 1, solucion);
                //Bactracking
                if (!solucion){ //Si llegaron a endrentar las reinas, regresa al punto anterior.
                    reinas[i] = 0;
                }
            }else{
                //Ya se agregaron todas las reinas
                solucion = true;
            }
        }
    } while ((k < N) && (!solucion));
}

//Funcion que mostrara el tablero en el que se vera la posicion de las reinas en el tablero de NxN
void mostrarTablero(){
    //Variables de la funcion.
    int tablero[N][N];
    //Inicializamos los valores de la matriz
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            tablero[i][j] = 0;
        }    
    }
    //Mostramos el arreglo de reinas obtenido
    cout << "\n\n * Mostrando arreglo *" << endl;
    cout << "\t - Arreglo: ";
    for (int i = 0; i < N; i++){
        cout << reinas[i] << "|";
    }
    //Asignando el valor del arreglo en el tablero.
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            tablero[reinas[j]][j] = 1;
        }    
    }
    //Mostramos el tablero de reinas generado
    cout << "\n\n * Mostrando tablero *" << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << tablero[i][j] << "|";
        }
        cout << "\n";
    }
}

// Funcion quue va a comprobar si la reina de la columna i no se amenaza con ninguna reina ya colocada
bool valido(int i){
    //Variables de la funcion.
    bool v = true;
    //Comprobamos que no halla reinas que se ataquen
    for (int r = 0; r < i; r++){
        v = ((v) && (reinas[i] != reinas[r]));  // Coprobamos que no halla alguna reina en la misma fila
        v = ((v) && ((reinas[i] - i) != (reinas[r] - r)));  // Comprobamos que no halla alguna reina en la diagonal 1
        v = ((v) && ((reinas[i] + i) != (reinas[r] + r)));  // Comprobamos que no halla alguna reina en la diagonal 2
    }
    //Retrnamos el valor obtenido de si se amenaza o no
    return v;
}