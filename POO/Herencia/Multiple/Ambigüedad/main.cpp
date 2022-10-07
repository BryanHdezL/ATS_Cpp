// Problemas en la Herencia Multiple

/********************************************************************************
Tipo de herencia enEl problema principal en la aplicacion de herencia multiple en 
este paradigma es la ambigüedad, debido a que pueden existir atributos con el 
mismo nombre y tipo de dato en diferentes clasesPadre de la claseDerivada, de 
igual manera pueden existir metodos con el mismo nombre.

La solucion que el lenguaje C++ brinada es el uso de ::, el cual se refiere a 
colocar nombreClase::nombreMetodo() o nombreClase::nombreAtributo;
********************************************************************************/

#include <bits/stdc++.h>
#include "ClaseDerivada.h"
using namespace std;

// Funcion Principal.
int main(){
    //Varianles de la funcion.
    ClaseDerivada* ob1 = new ClaseDerivada(5, 10, 15);
    //Acciones del programa.
    cout << "X: " << ob1->ClaseBase1::getX() << endl;
    //Destruimos el objeto
    delete ob1;
    return 0;
}