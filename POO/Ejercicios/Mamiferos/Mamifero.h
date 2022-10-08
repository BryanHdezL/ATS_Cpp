//Guardian
#ifndef MAMIFERO_H
#define MAMIFERO_H

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase.
class Mamifero{
    private:
        int anioNacimiento;
        string lugarNacimiento;
        string raza;
    public:
        //Constructor
        Mamifero(int anioNacimiento, string lugarNacimiento, string raza){
            this->anioNacimiento = anioNacimiento;
            this->lugarNacimiento = lugarNacimiento;
            this->raza = raza;
        }
        //Destructor
        ~Mamifero(){
            
        }
        //Mostramos la dieta
        virtual string imprimirDieta() = 0; //No esta completamente delimitado.
        //Obtenemos el año de nacimiento
        int getAnioNacimiento(){
            return anioNacimiento;
        }
        //Obtenemos el lugar de nacimeinto.
        string getLugarNacimiento(){
            return lugarNacimiento;
        }
        //Obtenemos la raza del mamifero.
        string getRaza(){
            return raza;
        }
};

//Fin del guardian
#endif