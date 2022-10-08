//Librerias.
#include <bits/stdc++.h>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"
using namespace std;

/***********************************************************************
El polimorfismo va de la mano con la herencia de clases abastractas.
La diferencia que tiene con las clases abstractas, es que con ayuda del 
polimorfismo si se puede instanciar objetos en ella.
***********************************************************************/

//Funcion proncipal.
int main(){
    //Variables de la funcion.
    Poligono* poligonos[2];
    //Acciones del programa.
    poligonos[0] = new Rectangulo(7, 4);
    poligonos[1] = new Triangulo(3, 4, 5);
    for (int i = 0; i < 2; i++){
        cout << "\n * Datos *" << endl;
        cout << "\t Area: " << poligonos[i]->area() << endl;
        cout << "\t Perimetro: " << poligonos[i]->perimetro() << endl;
    }
    //Fin del programa.
    return 0;
}