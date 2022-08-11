//Metodo de ordenamiento shell.

#include <iostream>
using namespace std;

void ordenacionShellAsc(float a[], int n);
void ordenacionShellDes(float a[], int n);
void intercambio(float &x, float &y);

int main(){
    float arreglo[] = {4, 6, 1, 9, 5, 10, 2, 11, 19, 7};
    ordenacionShellAsc(arreglo, 10);
    cout << "Ascendente: ";
    for (int i = 0; i < 10; i++){
        cout << arreglo[i] << " ";
    }
    cout << "\n";
    ordenacionShellDes(arreglo, 10);
    cout << "Descendente: ";
    for (int i = 0; i < 10; i++){
        cout << arreglo[i] << " ";
    }
    return 0;
}

void ordenacionShellAsc(float a[],int n){
    int salto = n / 2, j, k;
    while (salto > 0){
        for (int i = salto; i < n; i++){
            j = i - salto;
            while (j >= 0){
                k = j + salto;
                if (a[j] <= a[k]){  //Par de elementos ordenados.
                    j = -1;
                }else{  //Par de elementos desordenados.
                    intercambio(a[j], a[k]);
                    j -= salto;
                }
            }
        }
        salto /= 2;
    }
}

void ordenacionShellDes(float a[],int n){
    int salto = n / 2, j, k;
    while (salto > 0){
        for (int i = salto; i < n; i++){
            j = i - salto;
            while (j >= 0){
                k = j + salto;
                if (a[j] >= a[k]){  //Par de elementos ordenados.
                    j = -1;
                }else{  //Par de elementos desordenados.
                    intercambio(a[j], a[k]);
                    j -= salto;
                }
            }
        }
        salto /= 2;
    }
}

void intercambio(float &x, float &y){
    float aux;
    aux = x;
    x = y;
    y = aux;
}
