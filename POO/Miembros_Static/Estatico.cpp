//Miembros static de una clase

/***********************************************************************
Los metodos estaticos son atributos o metodos que solo le pertenecen a 
esa clase, pero no a todos los objetos.
Un caracteristica de estos es que funiconan igual que las variables 
globales.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
#include "Estatico.h"
using namespace std;

//Inicializando el atributo de tipo estatico.
int Estatico::contador = 0;

//Funcion principal
int main(){
    //Variables de la funcion
    Estatico* ob1 = new Estatico(); //Declaracion de objeto dinamico.
    Estatico* ob2 = new Estatico(); //Declaracion de objeto dinamico.
    Estatico* ob3 = new Estatico(); //Declaracion de objeto dinamico.
    //Acciones del programa.
    cout << "Valor del atributo static (contador): " << ob1->getContador() << endl;
    cout << "Valor del metodo static (suma): " << Estatico::suma(4, 5) << endl;
    return 0;
}