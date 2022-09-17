//Ejercicio #3.

/***********************************************************************
Escriba una funcion nombrada funpot() que eleve un numero entero que se
le transmita a una potencia en numero entero positivo y despliegue el
resultado.
El numero entero positivo debera ser el segundo valor transmitido a la
funcion.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
int funpot(int, int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int numero, potencia;
    //Solicitar datos al usuario.
    cout << "Digite un numero: ";
    cin >> numero;
    cout << "Digite una potencia: ";
    cin >> potencia;
    //Acciones del programa.
    cout << "El resultado de la potencia es: " << funpot(numero, potencia);
    return 0;
}

//Funcion que calcula el valor de la potencia.
int funpot(int x, int n){
    int resultado = 1;
    for (int i = 0; i < n; i++){
        resultado *= x;
    }
    return resultado;
}