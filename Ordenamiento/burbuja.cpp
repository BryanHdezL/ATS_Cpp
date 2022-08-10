//Metodo de ordenamiento burbuja.

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int num[] = {4, 1, 2, 3, 5};
    int aux;
    //Algoritmo de forma ascendente.
    for (int i = 0; i < 5; i++){  //Bucle que recorre todo el arreglo hasta ordenar.
        for (int j = 0; j < 5; j++){  //Bucle que ira analizando Actual/Siguiente.
            if(num[j] > num[j+1]){
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }
        }
    }
    cout << "Ascendente: ";
    for (int i = 0; i < 5; i++){
        cout << num[i] << " ";
    }
    cout << "\n";
    //Algoritmo de forma descendente.
    for (int i = 0; i < 5; i++){  //Bucle que recorre todo el arreglo hasta ordenar.
        for (int j = 0; j < 5; j++){  //Bucle que ira analizando Actual/Siguiente.
            if(num[j] < num[j+1]){
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }
        }
    }
    cout << "Descendente: ";
    for (int i = 0; i < 5; i++){
        cout << num[i] << " ";
    } 
    return 0;
}