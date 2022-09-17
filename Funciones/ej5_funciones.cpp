//Ejercicio #5.

/***********************************************************************
Escriba una plantilla de funcion llamada despliegue() que despliegue el
valor del argumento unico que se le transmite cuando es invocada la 
funcion.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Prototipos de las funciones
template <class TIPOD>
void despliegue(TIPOD dato);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int dato1 = 20;
    float dato2 = 99.50;
    double dato3 = 3.1416;
    char dato4 = 'a';
    //Acciones del programa.
    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);
    return 0;
}

//Funcion despliehie.
template <class TIPOD>
void despliegue(TIPOD dato){
    cout << "El dato es: " << dato << endl;
}