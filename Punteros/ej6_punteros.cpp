//Ejercicio #6.

/***********************************************************************
Hacer una funcion para almacenar N numeros en un arreglo dinamico,
posteriormente en otra funcion buscar un numero en particular.

Nota: Puedes utilizar cualquier metodo de busqueda (Secuencial, Binaria)
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Prototipos delas funciones.
void leer();
bool busqueda(int *);
void mostrar(bool);

//Variables globales.
int n, *A, buscar;

//Funcion principal.
int main(){
    //Variables de la funcion.
    bool band = false;
    //Acciones del programa.
    leer();
    band = busqueda(A);
    mostrar(band);
    delete[] A; //Liberando el espacio utilizado anteriormente.
    return 0;
}

//Funcion para mostrar el arreglo y el resultado.
void mostrar(bool band){
    cout << "\n\t Arreglo: ";
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    if(band){
        cout << "\n\t El valor " << buscar << " si se encuentra en el arreglo.";
    }else{
        cout << "\n\t El valor " << buscar << " no se encuentra en el arreglo.";
    }
}

//Funcion para realizar la busqueda del valor a encontrar.
bool busqueda(int *A){
    for (int i = 0; i < n; i++){
        if (A[i] == buscar) {  // Busqueda secuencial;
            return true;
        }
    }
    return false;
}

// Funcion para leer los datos capturados por el usuario.
void leer() {
    cout << "N: ";
    cin >> n;
    A = new int[n]; //Creando el arreglo.
    cout << "Arreglo: ";
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    cout << "Buscar: ";
    cin >> buscar;
}