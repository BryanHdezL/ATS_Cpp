//Ejercicio #1.

/***********************************************************************
Escriba una funcion llamada mult() que acepte dos numero en punto
flotante como parametros, multiplique estos dos numeros y despliegue
el resultado.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void mult(float, float);

//Funcion principal.
int main(){
    //Variables de la funcion.
    float num1, num2;
    //Solicitar datos al usuario.
    cout << "Digite el primer numero: ";
    cin >> num1;
    cout << "Digite el segundo numero: ";
    cin >> num2;
    //Acciones del programa.
    mult(num1, num2);
    return 0;
}

//Funcion que realiza la multiplicacion de los 2 numeros.
void mult(float x, float y){
    cout << "El resultado de la multiplicacion es: " << x * y;
}