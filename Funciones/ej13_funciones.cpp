//Ejercicio #13.

/***********************************************************************
Realiza una funcion que tome como parametros un  vector de numeros y su
tamaño y cambie el signo de los elementos del vector.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void leer(int vec[], int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    const int TAM=5;
    int vec[TAM], vec2[TAM];
    //Solicitar datos al usuario.
    leer(vec, TAM);
    //Acciones del programa.
    cout << "Vector: ";
    for (int i = 0; i < TAM; i++){
        cout << vec[i] << " ";
    }
    return 0;
}

//Funcion
void leer(int vec[],int tam){
    for (int i = 0; i < tam; i++){
        cin >> vec[i];
        vec[i] *= (-1);
    }
}
