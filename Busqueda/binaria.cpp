// Busqueda Binaria.

// A[5] = {3,4,2,1,5}; dato → 4.

#include <iostream>
using namespace std;

int main(){
    int A[] = {3, 4, 2, 1, 5};
    int dato, inf = 0, sup = 5, mitad, aux;
    char band = 'F';
    dato = 4;
    //Ordenando de forma ascendente el arreglo.
    for (int i = 0; i < 5; i++){  //Bucle que recorre todo el arreglo hasta ordenar.
        for (int j = 0; j < 5; j++){  //Bucle que ira analizando Actual/Siguiente.
            if(A[j] > A[j+1]){
                aux = A[j];
                A[j] = A[j + 1];
                A[j + 1] = aux;
            }
        }
    }
    //Busqueda binaria.
    while (inf <= sup){
        mitad = (inf + sup) / 2;
        if (A[mitad] == dato){
            band = 'V';
            break;
        }else if (A[mitad] > dato){
            sup = mitad - 1;
        }else{
            inf = mitad + 1;
        }
    }
    // Resultado de la busqueda.
    if (band == 'V') {
        cout << "El numero a sido encontrado en la posicion #" << mitad << endl;
    }else  if (band == 'F'){
        cout << "El numero a buscar no existe en el arreglo." << endl;
    }
    return 0;
}