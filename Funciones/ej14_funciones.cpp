//Ejercicio #14.

/***********************************************************************
Realiza una funcion que tome como paramtros un vector de enteros y su 
tamaño e imprima un vector con los elementos impares del vector recibido.
***********************************************************************/

//Librerias
#include <iostream>
#include <vector>
using namespace std;

//Pototipos de las funciones.
void leerNum(int vec[], int);

//Variables globales.
vector<int> impares;

//Funcion principal.
int main(){
    //Variables de la funcion.
    const int TAM=10;
    int vecNum[TAM];
    //Solicitar datos al usuario.
    leerNum(vecNum, TAM);
    //Acciones del programa.
    cout << "Impares: ";
    for (int i = 0; i < impares.size(); i++){
        cout << impares[i] << " ";
    }
        return 0;
}

//Funcion
void leerNum(int vec[],int tam){
    for (int i = 0; i < tam; i++){
        cin >> vec[i];
        if (vec[i] % 2 != 0){
            impares.push_back(vec[i]);
        }
    }
}