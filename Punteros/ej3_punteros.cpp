//Ejercicio #3.

/***********************************************************************
Rellenar un array de 10 numeros, posteriormente utilizando punteros
indicar cuales son numero pares y su posicion en memoria.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Variables de la funcion.
    int num[10], *dir_num, j = 1;
    dir_num = num;
    //Solicitar datos al usuario.
    for (int i = 0; i < 10; i++){
        cin >> num[i];
    }
    // Acciones del programa.
    for (int i = 0; i < 10; i++){
        if (*dir_num % 2 == 0) {
            cout << "\t Valor #" << j << ": " << *dir_num << endl;
            cout << "\t Posicion del valor #" << j << ": " << dir_num << endl;
            j++;
        }
        *dir_num++;
    }
    return 0;
}

//Funcion 