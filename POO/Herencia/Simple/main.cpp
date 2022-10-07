//Clases Derivadas (Herencia Simple)

/***********************************************************************
Relacion que existe entre dos clases en la que una se denomina clase 
hija.
Esto ahorra lineas de codigo y ayuda a segmentar mejor el codigo.
***********************************************************************/

#include <bits/stdc++.h>
#include "Triangulo.h"
using namespace std;

//Funcion Principal.
int main(){
    //Variables de la funcion.
    Triangulo* t1 = new Triangulo(3, 5, 6, 7);
    //Acciones del programa
    cout << "\n * Datos *" << endl;
    cout << "\t No. lados: " << t1->getNumLados() << endl;  //Mostramos el numero de datos de la figura.
    cout << "\t Area: " << t1->areaTraingulo() << endl;
    return 0;
}