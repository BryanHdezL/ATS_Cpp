//Guardian
#ifndef ALUMNO_H
#define ALUMNO_H

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase.
class Alumno{
    private:
        string nombreCarrera;
    public:
        //Constructor
        Alumno(string nombreCarrera){
            this->nombreCarrera = nombreCarrera;
        }
        //Destructor
        ~Alumno(){

        }
        //Mostramos los datos del alumno
        void mostrarDatos(){
            cout << "\n * Datos Alumno *" << endl;
            cout << "\t - Carrera: " << nombreCarrera << endl;
        }
        //Establecemos el nombre de la nueva carrera.
        void setNombreCarrera(string nuevoNombreCarrera){
            this->nombreCarrera = nuevoNombreCarrera;
        }
        //Obtenemos el nombre de la carrera.
        string getNombreCarrera(){
            return nombreCarrera;
        }
};

//Fin del guardian
#endif