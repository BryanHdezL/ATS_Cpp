//Librerias.
#include <bits/stdc++.h>
#include "Intercambio.h"
using namespace std;

/***********************************************************************
Definir una plantilla dentro de un archivo de cabecera llamado 
"Intercambio.h" que pueda intercambiar el valor de dos elementos del 
mismo tipo.
***********************************************************************/

//Funcion Principal.
int main(){
    //Variables de la funcion.
    string dato1, dato2;
    //Solicitamos los datos al usuario.
    cout << "\n * Solicitando Datos * " << endl;
    cout << "\t - Dato1: ";
    cin >> dato1;
    cout << "\t - Dato2: ";
    cin >> dato2;
    //Acciones del programa.
    intercambiar(dato1, dato2);
    //Mostramos los resultados obtenidos.
    cout << "\n * Mostrando Resultados * " << endl;
    cout << "\t - Dato1: " << dato1 << endl;
    cout << "\t - Dato2: " << dato2 << endl;
    //Fin del programa.
    return 0;
}