//Ejercicio #5.

/***********************************************************************
PEdor al usuario N numeros, almacenarlos en un arreglo dinamico
posteriormente ordenar los numeros en orden ascendente y mostrarlos en
pantalla.

Nota: Utilizar cualquier metodo de ordenamiento.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
void leer(int *, int);
void mostrar(int *, int);
void ordenar(int *, int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int n, *num;
    //Solicitar datos al usuario.
    cout << "N: ";
    cin >> n;
    num = new int[n];   //Creando el arreglo.
    //Acciones del programa.
    leer(num,n);
    cout << "\n\t Arreglo Capturado: ";
    mostrar(num, n);
    ordenar(num, n);
    cout << "\n\t Arreglo Ordenado: ";
    mostrar(num, n);
    delete[] num;
    return 0;
}

//Funcion para ordenar el arreglo por medio del metodo de burbuja.
void ordenar(int *A, int tam){
    int aux;
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam-1; j++){
            if(*(A+j)>*(A+j+1)){    // A[j] > A[j+1]
                aux = *(A+j);
                *(A+j) = *(A+j+1);
                *(A+j+1) = aux;
            }
        }
    }
}

//Funcion para mostra el arreglo.
void mostrar(int *A, int tam){
    for (int i = 0; i < tam; i++){
        cout << *(A+i) << " ";
    }
}

//Funcion para leer el contenido del arreglo.
void leer(int *A, int tam){
    for (int i = 0; i < tam; i++){
        cin >> *(A+i);
    }
}