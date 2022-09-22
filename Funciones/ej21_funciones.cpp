//Ejercicio #21.

/***********************************************************************
Escriba una funcion recursiva que calcule un numero elevado a una
potencia mayor o igual que cero: x^y
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
int potencia(int, int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int num, pot;
    //Solicitar datos al usuario.
    cout << "Numero: ";
    cin >> num;
    cout << "Potencia: ";
    cin >> pot;
    //Acciones del programa.
    cout << "Resultado: " << potencia(num, pot) << endl;
    return 0;
}

//Funcion
int potencia(int x, int y){
    if (y == 0){
        x = 1;
    }else{
        x *= potencia(x, y - 1);
    }
    return x;
}