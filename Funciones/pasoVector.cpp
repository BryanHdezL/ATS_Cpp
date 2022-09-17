//Paso de parametros de tipo vector.

/*
Parametros de la duncion
    void nombreFuncion(tipo nombreArreglo[], int tamañoArreglo)

Llamada a la funcion
    nombreFuncion(nombreArreglo, tamañoArreglo)
*/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void cuadrados(int vector[], int);
void mostrar(int vector[], int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    const int TAM = 5;
    int vector[TAM] = {1, 2, 3, 4, 5};
    //Acciones del programa.
    cout << "Vector Inicial: ";
    mostrar(vector, TAM);
    cuadrados(vector, TAM);
    cout << "\nVector Final: ";
    mostrar(vector, TAM);
    return 0;
}

//Funcion para calcular los cuadrados
void cuadrados(int vector[], int TAM){
    for (int i = 0; i < TAM; i++){
        vector[i] *= vector[i];
    }
}

//Funcion para mostrar los datos del vector
void mostrar(int vector[], int TAM){
    for (int i = 0; i < TAM; i++){
        cout << vector[i] << " ";
    }
}