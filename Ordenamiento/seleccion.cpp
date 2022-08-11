//Metodo de ordenamiento por seleccion.

#include <iostream>
using namespace std;

int main(){
    int num[] = {4, 1, 2, 3, 5};
    int aux, min;
    //Algoritmo de forma ascendente.
    for (int i = 0; i < 5; i++){
        min = i; // Se da a suponer que el numero menor es el del iterador i.
        for (int j = i+1; j < 5; j++){
            if (num[j] < num[min]) {
                min = j;    //Obtenemos el numero menor del arreglo.
            }
        }
        aux = num[i];
        num[i] = num[min];  //Realizamos el cambio de ambos numeros.
        num[min] = aux;
    }
    cout << "Ascendente: ";
    for (int i = 0; i < 5; i++){
        cout << num[i] << " ";
    }
    cout << "\n";
    // Algoritmo de forma descendente.
    for (int i = 0; i < 5; i++){
        min = i; // Se da a suponer que el numero menor es el del iterador i.
        for (int j = i+1; j < 5; j++){
            if (num[j] > num[min]) {
                min = j;    //Obtenemos el numero menor del arreglo.
            }
        }
        aux = num[i];
        num[i] = num[min];  //Realizamos el cambio de ambos numeros.
        num[min] = aux;
    }
    cout << "Descendente: ";
    for (int i = 0; i < 5; i++){
        cout << num[i] << " ";
    }
    return 0;
}

