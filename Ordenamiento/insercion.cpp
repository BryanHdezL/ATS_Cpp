//Metodo de ordenamiento por insercion.

#include <iostream>
using namespace std;

int main(){
    int num[] = {4, 1, 2, 3, 5};
    int aux, pos;
    //Algoritmo de forma ascendente.
    for (int i = 0; i < 5; i++){
        pos = i;    // Indicador de cada posicion del arreglo.
        aux = num[i];   //Almacena el valor del arreglo.
        //Condicional.
        while((pos>0)&&(num[aux-1]>num[aux])){   // numeroIzq > numeroActual.
            num[pos] = num[pos - 1];
            pos--;
        }
        num[pos] = aux;
    }
    cout << "Ascendente: ";
    for (int i = 0; i < 5; i++){
        cout << num[i] << " ";
    }
    cout << "\n";
    // Algoritmo de forma descendente.
    for (int i = 0; i < 5; i++){
        pos = i;    // Indicador de cada posicion del arreglo.
        aux = num[i];   //Almacena el valor del arreglo.
        //Condicional.
        while((pos>0)&&(num[aux-1]<num[aux])){   // numeroIzq < numeroActual.
            num[pos] = num[pos - 1];
            pos--;
        }
        num[pos] = aux;
    }
    cout << "Descendente: ";
    for (int i = 0; i < 5; i++){
        cout << num[i] << " ";
    }
    return 0;
}

