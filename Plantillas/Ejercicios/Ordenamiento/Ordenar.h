//Librerias.
#include <bits/stdc++.h>
#include "Intercambio.h"
using namespace std;

//Delcracion de la plantillas.

//Ascendente
template <typename T>
void ordenAscendente(T *array, int n){
    //Ordenamiento ascendente por metodo burbuja
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
            if (array[j] > array[j + 1]){
                intercambiar(array[j], array[j + 1]);
            }
        }    
    }
}

//Descendente
template <typename T>
void ordenDescendente(T *array, int n){
    //Ordenamiento descendente por metodo burbuja
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
            if (array[j] < array[j + 1]){
                intercambiar(array[j], array[j + 1]);
            }
        }    
    }
}