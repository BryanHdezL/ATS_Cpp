//Ejercicio #4.

/***********************************************************************
Escriba un programa en C++ que devuelva la parte fraccionaria de
cualquier numero introducido por el usuario.
Por ejemplo si se introduce el numero 256.879, deberia desplegarse el
nuemro 0.879
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
float fraccionaria(float);

//Funcion principal.
int main(){
    //Variables de la funcion.
    float numero;
    //Solicitar datos al usuario.
    cout << "Digite un numero: ";
    cin >> numero;
    //Acciones del programa.
    cout.precision(3);
    cout << "La parte fraccionaria del numero " << numero << " es: ";
    cout << fraccionaria(numero) << endl;
    return 0;
}

//Funcion que obtiene la parte fraccionara de un numero.
float fraccionaria(float x){
    int entero=x;
    x -= entero;
    return x;
}