//Librerias.
#include <bits/stdc++.h>
#include "Persona.h"
using namespace std;

//Declaracion de la clase.
class Futbolista : public Persona{
    private:
        int dorsal;
        string posicion;
    public:
        //Constructor
        Futbolista(string nombre, string apellido, int edad, int dorsal, string posicion) : Persona(nombre, apellido, edad){
            this->dorsal = dorsal;
            this->posicion = posicion;
        }
        //Destructor
        ~Futbolista(){

        }
        // Obtenemos el dorsal.
        int getDorsal(){
            return dorsal;
        }
        //Obtenemos la posicion.
        string getPosicion(){
            return posicion;
        }
        //Acciones que realzia.
        void partidoFutbol(){
            cout << "Juega el partido de futbol." << endl;
        }
        void entrenamiento(){
            cout << "Entrena." << endl;
        }
        void entrevista(){
            cout << "Da una entrevista." << endl;
        }
};
