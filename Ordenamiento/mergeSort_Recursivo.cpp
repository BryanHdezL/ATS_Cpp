// Ordenamiento por mezclas, MergeSort.

/***********************************************************************
Algorirmo de ordenamiento por el metodo de mezclas, utilizando 
recursividad.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
void mergeSort(int *, int, int);
void mezcla(int *, int, int, int);

//Funcion principal.
int main(){
    // Variables de la funcion.
    int arreglo[] = {8, 3, 6, 0, 2, 7, 10, 15, 60, 32, 11};
    //Acciones del programa.
    mergeSort(arreglo, 0, 10);
    cout << "Arreglo: ";
    for (int i = 0; i < 10; i++){
        cout << arreglo[i] << " ";
    }
    // Fin del programa.
    return 0;
}

//Funcion para mezclar las sublistas ordenadas.
void mezcla(int* a, int izquierda, int medio, int derecha){
    // Variables de la funcion.
    int* aux = new int[derecha + izquierda + 1];
    int i, k, z;
    i = z = izquierda;
    k = medio + 1;
    // Ordenamos los elementos en el arreglo aux[].
    while ((i <= medio) && (k <= derecha)){
        if (a[i] <= a[k]){
            aux[z++] = a[i++];
        }else{
            aux[z++] = a[k++];
        }
    }
    // Copiamos los elementos de la lista que no quedo vacia.
    while (i <= medio){
        aux[z++] = a[i++];
    }
    while (k <= derecha){
        aux[z++] = a[k++];
    }
    // Copiamos los elementos del arreglo aux hacia a[].
    for (int i = izquierda; i <= derecha; i++){
        a[i] = aux[i];
    }
        // Liberamos la memora del arreglo aux.
        delete aux;
}

//Funcion de ordenamiento MergeSort.
void mergeSort(int *a, int primero, int ultimo){
    if (primero < ultimo){
        int central = ((primero + ultimo) / 2);
        mergeSort(a, primero, central); //Ordenamos la sublista Izquierda.
        mergeSort(a, central + 1, ultimo);  //Ordenamos la sublista Derecha.
        mezcla(a, primero, central, ultimo);    //Mezclamos los elementos.
    }
}
