// Clases Abstractas

/********************************************************************************
Es un tipo de clase que perimite crear subclases de esta, pero no permite crear
objetos de la misma.
Sirve como un boceto para otras funcion.

Esta debe de tener metodos virtuales igualados a 0, para que el lenguaje 
reconozca que nos referimos a una clase abstracta:
    virtual void nombreMetodo() = 0;

Siempre que el metodo no este totalmente delimitado para el objetivo de nuestra 
clase, esta sera abstracta.
********************************************************************************/

#include <bits/stdc++.h>
#include "Planta.h"
#include "AnimalHerbivoro.h"
#include "AnimalCarnivoro.h"
using namespace std;

// Funcion Principal.
int main(){
    //Acciones del programa.
    Planta* planta1 = new Planta();
    planta1->alimentarse();
    AnimalHerbivoro* animal1 = new AnimalHerbivoro();
    animal1->alimentarse();
    AnimalCarnivoro* animal2 = new AnimalCarnivoro();
    animal2->alimentarse();
    //Destruimos objetos.
    delete planta1;
    delete animal1;
    delete animal2;
    return 0;
}