//Librerias.
#include <bits/stdc++.h>
#include "Ordenar.h"
using namespace std;

/***********************************************************************
Definir dos plantillas de funciones dentro de un archivo de cabecera 
llamdo "Ordenar.h" que puedad ordenar tanto ascendentemente como 
descendentemente un arreglo de N elementos, recuerde que puede utilizar 
la plantilla Intercambio.h del ejercicio anterior.
***********************************************************************/

//Plantilla para leer los elementos del arreglo.
template <typename T>
void leerArreglo(T *A, int n){
    for (int i = 0; i < n; i++){
        cout << "\t - Elemento[" << i << "]: ";
        cin >> A[i];
        fflush(stdin);  //Por si llegase a ser un arreglo de cadenas.
    }
}

//Plantilla para mostrar el contenido del arreglo.
template <typename T>
void mostrarArreglo(T *A, int n){
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
}

//Funcion Principal.
int main(){
    //Variables de la funcion.
    int nElementos;
    int *elementos;
    //Solicitamos los datos al usuario.
    cout << "N: ";
    cin >> nElementos;
    elementos = new int[nElementos];
    cout << "\n * Leyendo elementos del arreglo *" << endl;
    leerArreglo(elementos, nElementos);
    //Acciones del programa.
    cout << "\n * Mostrando el Arreglo *";
    ordenAscendente(elementos, nElementos);
    cout << "\n\t - Arreglo ordenado ascendentemente: ";
    mostrarArreglo(elementos, nElementos);
    ordenDescendente(elementos, nElementos);
    cout << "\n\t - Arreglo ordenado descendentemente: ";
    mostrarArreglo(elementos, nElementos);
    //Liberamos la memoria
    delete[] elementos;
    //Fin del programa.
    return 0;
}