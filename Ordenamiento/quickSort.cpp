// Metodo de ordenamiento quickSort.

#include <string.h>

#include <iostream>
using namespace std;

void quickSortAsc(float a[], int primero, int ultimo);
void quickSortDes(float a[], int primero, int ultimo);
void intercambio(float &x, float &y);

int main() {
    float arreglo[] = {4, 7, 1, 8, 2, 10, 5, 9, 3};
    // Algoritmo de forma ascendente.
    quickSortAsc(arreglo, 0, 8);
    cout << "Ascendente: ";
    for (int i = 0; i < 9; i++) {
        cout << arreglo[i] << " ";
    }
    cout << "\n";
    // Algoritmo de forma descendente.
    quickSortDes(arreglo, 0, 8);
    cout << "Descendente: ";
    for (int i = 0; i < 9; i++) {
        cout << arreglo[i] << " ";
    }
    return 0;
}

void quickSortAsc(float a[], int primero, int ultimo) {
    int i = primero, j = ultimo, central = (primero + ultimo) / 2;
    float pivote = a[central];
    do {
        while (a[i] < pivote) {  // Elemento de la izquierda.
            i++;
        }
        while (a[j] > pivote) {  // Elemento de la derecha.
            j--;
        }
        if (i <= j) {
            intercambio(a[i], a[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (primero < j) {
        quickSortAsc(a, primero, j);  // Ordenamos la sublista izquierda.
    }
    if (i < ultimo) {
        quickSortAsc(a, i, ultimo);  // Ordenamos la sublista derecha
    }
}

void quickSortDes(float a[], int primero, int ultimo) {
    int i = primero, j = ultimo, central = (primero + ultimo) / 2;
    float pivote = a[central];
    do {
        while (a[i] > pivote) {  // Elemento de la izquierda.
            i++;
        }
        while (a[j] < pivote) {  // Elemento de la derecha.
            j--;
        }
        if (i <= j) {
            intercambio(a[i], a[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (primero < j) {
        quickSortDes(a, primero, j);  // Ordenamos la sublista izquierda.
    }
    if (i < ultimo) {
        quickSortDes(a, i, ultimo);  // Ordenamos la sublista derecha
    }
}

void intercambio(float &x, float &y) {
    float aux;
    aux = x;
    x = y;
    y = aux;
}