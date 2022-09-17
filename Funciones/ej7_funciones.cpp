//Ejercicio #7.

/***********************************************************************
Intercambiar el balor de 2 variables utilziando paso de parametros por
referencia.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void intercambio(int&, int&);
//Funcion principal.
int main(){
    //Variables de la funcion.
    int a, b;
    //Solicitar datos al usuario.
    cin >> a >> b;
    //Acciones del programa.
    intercambio(a, b);
    cout << "Valores: " << a << " " << b << endl;
    return 0;
}

// Funcion de intercambio de valores.
void intercambio(int& x, int& y){
    int aux = x;
    x = y;
    y = aux;
}