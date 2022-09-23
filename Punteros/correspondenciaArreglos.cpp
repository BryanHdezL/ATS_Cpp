//Correspondencia entre arrays y punteros.

//Librerias
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Variables de la funcion.
    int numeros[] = {1, 2, 3, 4, 5};
    int *dir_numeros;
    //Asignaciones.
    dir_numeros = numeros;  // Asignamos el puntero a la primer posicion de memoria del arreglo dir_numeros = numeros[0]
    //Acciones del programa.
    for (int i = 0; i < 5; i++){
        cout << "\t Numeros[" << i << "]: " << *dir_numeros++ << endl;
    }
    return 0;
}
