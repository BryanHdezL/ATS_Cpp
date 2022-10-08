//Guardian
#ifndef DEPORTISTA_H
#define DEPORTISTA_H

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase.
class Deportista{
    private:
        string nombreEntrenador;
    public:
        //Constructor
        Deportista(string nombreEntrenador){
            this->nombreEntrenador = nombreEntrenador;
        }
        //Destructor
        ~Deportista(){

        }
        //Mostramos los datos del deportista
        void mostrarDatos(){
            cout << "\n * Datos Deportista *" << endl;
            cout << "\t - Entrenador: " << nombreEntrenador << endl;
        }
        //Establecemos el nombre de la nueva carrera.
        void setNombreEntrenador(string nuevoNombreEntrenador){
            this->nombreEntrenador = nuevoNombreEntrenador;
        }
        //Obtenemos el nombre del Entrenador.
        string getNombreEntrenador(){
            return nombreEntrenador;
        }
};

//Fin del guardian
#endif