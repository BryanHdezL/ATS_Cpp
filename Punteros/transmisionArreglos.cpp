//Transmision de arreglos.

/***********************************************************************
Ejemplo: Hallar el maximo elemento de un arreglo.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Prototipos de las funciones.
int hallarMax(int *, int);  //Primer posicion del arreglo y tamaño del arreglo.

//Funcion principal.
int main(){
    //Variables de la funcion.
    const int TAM = 5;
    int num[TAM] = {3, 5, 2, 8, 1};
    //Acciones del programa.
    cout << "El mayor elemento es: " << hallarMax(num, TAM) << endl;    // *V = &num 
    return 0;
}

int hallarMax(int *V, int tam){
    int max = 0;
    for (int i = 0; i < tam; i++){
        if (*(V+i) > max){  //Aumentamos la posicion del vector en *(V+i)
            max = *(V+i);
        }
    }
    return max;
}
