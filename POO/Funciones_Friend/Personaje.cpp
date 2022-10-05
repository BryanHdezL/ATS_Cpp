//Funciones amigas (friend)

/***********************************************************************
Las funciones amigas brindan el permiso de modificar los valores de los
atributos privados de una clase.
Estas se declaran en clase de la siguiente manera:
    friend tipoFuncion nombreFuncion(parametros);
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
#include "Personaje.h"
using namespace std;

//Funcion principal
int main(){
    //Variables de la funcion.
    Personaje* p1 = new Personaje(100, 90);
    //Acciones del programa.
    p1->mostrarDatatos();
    modificar(*p1, 60, 50);
    p1->mostrarDatatos();
    return 0;
}

//Funcion que modifica los valores de ataque y defensa de un Objeto Personaje.
void modificar(Personaje& p, int at, int def){
    p.ataque = at;
    p.defensa = def;
}