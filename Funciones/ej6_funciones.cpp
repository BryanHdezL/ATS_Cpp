//Ejercicio #6.

/***********************************************************************
Escriba una plantilla de funcion llamada maximo() que devuelva el valor
maximo de tres argumentos que se transmitan a la funcion cuando sea
llamada.
Suponga qe los tres argumentos seran del mismo tipo de datos.
***********************************************************************/

//Librerias
#include <iostream>
#include <algorithm>
using namespace std;

//Pototipos de las funciones.
template <class TIPOD>
void maximo(TIPOD dato1, TIPOD dato2, TIPOD dat3);

//Funcion principal.
int main(){
    //Variables de la funcion.
    char dato1, dato2, dato3;
    //Solicitar datos al usuario.
    cin >> dato1 >> dato2 >> dato3;
    //Acciones del programa.
    maximo(dato1, dato2, dato3);
    return 0;
}

//Funcion
template <class TIPOD>
void maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3) {
    cout << "Valor maximo: " << max(dato1, max(dato2, dato3));
}