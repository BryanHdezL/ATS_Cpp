//Librerias.
#include <bits/stdc++.h>
#include "Persona.h"
using namespace std;

//Declaracion de la clase.
class Medico : public Persona{
    private:
        string titulacion;
        int aniosExperencia;
    public:
        //Constructor
        Medico(string nombre, string apellido, int edad, string titulacion, int aniosExperiencia) : Persona(nombre, apellido, edad){
            this->titulacion = titulacion;
            this->aniosExperencia = aniosExperencia;
        }
        //Destructor
        ~Medico(){

        }
        //Obtenemos la estrategia.
        int getAniosExperiencia(){
            return aniosExperencia;
        }
        //Acciones que realzia.
        void partidoFutbol(){
            cout << "Da asistencia en el partido de futbol." << endl;
        }
        void entrenamiento(){
            cout << "Da asistencia en el entrenamiento." << endl;
        }
        void curarLesion(){
            cout << "Cura la lesion." << endl;
        }
};
