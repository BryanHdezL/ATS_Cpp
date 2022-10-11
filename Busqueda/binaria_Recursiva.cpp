// Toores de Hanoi.

/***********************************************************************
Algorirmo que muestra los pasos para resolver el juego de las torres 
de hanoi para N discos.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
int busquedaBinaria(int *, int, int, int);

//Funcion principal.
int main(){
    // Variables de la funcion.
    int arreglo[] = {-1, 4, 5, 6, 8, 9, 10};
    int dato = 10;
    int retorno = busquedaBinaria(arreglo, dato, 0, 6);
    //Acciones del programa.
    if (retorno == -1){
        cout << "\t - El dato " << dato << " no ha sido encontrado." << endl;
    }else{
        cout << "\t - El dato " << dato << " ha sido encontrado en la posicion " << retorno << "." << endl;
    }
        // Fin del programa.
        return 0;
}

int busquedaBinaria(int a[], int dato, int inferior, int superior) {
    //Variables de la funcion.
    //Elemento no encontrado.
    if (inferior > superior){
        return -1;
    }
    else{
        // Caso base
        int mitad = ((inferior + superior) / 2);
        if (dato == a[mitad]){
            return mitad;
        }
        // Caso recursivo 1 (el valor a buscar es mayor que a[mitad])
        else if (dato > a[mitad]){
            return busquedaBinaria(a, dato, mitad + 1, superior);
        }
        // Caso recursivo 2 (el valor a buscar es menor que a[mitad])
        else{
            return busquedaBinaria(a, dato, inferior, mitad - 1);
        }
    }
}
