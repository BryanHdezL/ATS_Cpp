//Guardian
#ifndef FELINO_H
#define FELINO_H

//Librerias.
#include <bits/stdc++.h>
#include "Mamifero.h"
using namespace std;

//Declaracion de la clase.
class Felino : public Mamifero{
    private:
        string nombreCirco;
    public:
        //Constructor de felino que sea de circo.
        Felino(int anioNacimiento, string lugarNacimiento, string raza, string nombreCirco) : Mamifero(anioNacimiento, lugarNacimiento, raza){
            this->nombreCirco = nombreCirco;
        }
        //Constructor de felino que sea de casa.
        Felino(int anioNacimiento, string lugarNacimiento, string raza) : Mamifero(anioNacimiento, lugarNacimiento, raza){

        }
        //Destructor
        ~Felino(){
            
        }
        //Mostramos la dieta del felino de circo.
        string imprimirDieta(){
            return "La dieta del felino es a base de carne.";
        }
        //Establecemos un nuevo nombre del circo.
        void setNombreCirco(string nuevoNombreCirco){
            this->nombreCirco = nuevoNombreCirco;
        }
        //Obtenemos el nombre del Circo
        string getNombreCirco(){
            return nombreCirco;
        }
};

//Fin del guardian
#endif