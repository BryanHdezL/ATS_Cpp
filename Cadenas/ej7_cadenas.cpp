//Ejercicio #7 Transformar cadenas a minusculas con condicion.

/****************************************************************
Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza
por la letra A, convertir su nombre a minuscula, casi contrario 
no convertirlo.
****************************************************************/

//Librerias.
#include <iostream>
#include <string.h>
using namespace std;

//Funcion prinicpal.
int main(){
    //Variables de la funcion.
    char nombre[30];
    //Solicitar datos al usuario.
    cout << "Digite su nombre en MAYUSCULA: ";
    cin.getline(nombre,30,'\n');
    //Mostrar en consola.
    if(nombre[0] == 'A'){
        strlwr(nombre);
        cout << nombre << endl;
    }else{
        cout << nombre << endl;
    }
    return 0;
}