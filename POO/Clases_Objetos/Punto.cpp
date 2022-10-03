//Librerias.
#include <iostream>
#include "Punto.h"
using namespace std;

//Funcion principal.
int main(){
    //Creacion de objetos.
    Punto p1(2, 1);             //Objetivo Estatico.
    Punto* p2 = new Punto();    //Objeto Dinamico.
    //Mostrando el contenido del punto 1.
    cout << "\n * Punto 1 (Objeto Estatico) *" << endl;
    cout << "\t Valor de x: " << p1.getX() << endl;
    cout << "\t Valor de y: " << p1.getY() << endl;
    p2->setX(5);
    p2->setY(8);
    //Mostrando el contenido del punto 2.
    cout << "\n * Punto 2 (Objeto Dinamico) *" << endl;
    cout << "\t Valor de x: " << p2->getX() << endl;
    cout << "\t Valor de y: " << p2->getY() << endl;
    return 0;
}

// Establecemos el valor de X.
void Punto::setX(int valorX){
    x = valorX;
}

// Establecemos el valor de Y.
void Punto::setY(int valorY){
    y = valorY;
}

// Obtener el valor de X.
int Punto::getX(void){
    return x;
}

// Obtener el valor de Y.
int Punto::getY(void) {
    return y;
}