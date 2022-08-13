//Plantillas de funcion.

// Ejemplo: Sacar el valor absoluto de un numero.

//Librerias.
#include <iostream>
using namespace std;

//Prototipos de funcion.
template <class TIPOD> 
void mostrarAbs(TIPOD numero);  //Generaliza el tipo de dato (int, float double) en uno solo.

// Funcion princiapal.
int main() {
    // Variables de las funciones.
    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.4567;
    // Mostrar resultados en consola.
    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);
    return 0;
}

//Funcion para mostrar en pantalla el valor absoluto
template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if (numero < 0){
        numero *= (-1);
    }
    cout << " - El valor absoluto del numero es: " << numero << endl;
}

