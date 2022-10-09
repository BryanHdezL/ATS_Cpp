//Guardian
#ifndef PERSONA_H
#define PERSONA_H

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase.
class Persona{
    protected:
        string nombre;
        string apellido;
        int edad;
    public:
        //Constructor
        Persona(string nombre, string apellido, int edad){
            this->nombre = nombre;
            this->apellido = apellido;
            this->edad = edad;
        }
        //Destructor
        ~Persona(){

        }
        //Obtenemos el nombre.
        string getNombre(){
            return nombre;
        }
        //Obtenemos el apellido.
        string getApellido(){
            return apellido;
        }
        //Obtenemos el edad.
        int getEdad(){
            return edad;
        }
        //Accion que realzia.
        void viajar(){
            cout << "Viaja." << endl;
        }
        virtual void partidoFutbol() = 0;
        virtual void entrenamiento() = 0;
};

//Fin del guardian
#endif