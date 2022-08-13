// Ejemplo → Encontrar el mayor de 2 numeros.

//Librerias.
#include <iostream>
using namespace std;

//Prototipos de funciones.
int encontrarMax(int, int);

//Funcion Proincipal.
int main(){
    //Variables de la funcion.
    int num1, num2, numMax;
    //Acciones de la funcion.
    cout << "Digite dos numeros: \n" << endl;
    cout << " - Numero #1: ";
    cin >> num1;
    cout << " - Numero #2: ";
    cin >> num2;
    numMax = encontrarMax(num1, num2);
    //Mostrar resultados en consola.
    cout << " -> El numero mayor es: " << numMax << endl;
    return 0;
}

//Funcion para encontrar el numero mayor.
int encontrarMax(int x, int y){
    if (x > y){
        return x;
    }else{
        return y;
    }
}