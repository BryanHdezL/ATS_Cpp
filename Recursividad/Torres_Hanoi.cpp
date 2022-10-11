// Toores de Hanoi.

/***********************************************************************
Algorirmo que muestra los pasos para resolver el juego de las torres 
de hanoi para N discos.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Variables globales.
int i = 1;

//Prototipos de las funciones.
void hanoi(char, char, char, int);   //(nombreVarilla1, nombreVarilla2, nombreVarilla3, numDiscos)

//Funcion principal.
int main(){
    // Variables de la funcion.
    int n = 7;
    //Acciones del programa.
    cout << "Numero de movimientos: " << (pow(2, n) - 1) << endl;
    hanoi('A', 'B', 'C', n);
    // Fin del programa.
    return 0;
}

void hanoi(char Origen, char Auxiliar, char Destino, int n){
    //Caso base
    if (n == 1) {
        cout << "\t" << i << ".- Mover disco " << n << " de " << Origen << " a " << Destino << endl;
        i++;
    }
    // Caso recursivo
    else {
        hanoi(Origen, Destino, Auxiliar, n - 1);
        cout << "\t" << i << ".- Mover disco " << n << " de " << Origen << " a " << Destino << endl;
        i++;
        hanoi(Auxiliar, Origen, Destino, n - 1);
    }
}

