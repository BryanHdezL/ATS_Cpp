//Librerias.
#include <bits/stdc++.h>
#include "Persona.h"
using namespace std;

//Declaracion de la clase.
class Entrenador : public Persona{
    private:
        string estrategia;

    public:
        //Constructor
        Entrenador(string nombre, string apellido, int edad, string estrategia) : Persona(nombre, apellido, edad){
            this->estrategia = estrategia;
        }
        //Destructor
        ~Entrenador(){

        }
        //Obtenemos la estrategia.
        string getEstrategia(){
            return estrategia;
        }
        //Acciones que realzia.
        void partidoFutbol(){
            cout << "Dirige el partido de futbol." << endl;
        }
        void entrenamiento(){
            cout << "Supervisa el entrenamiento." << endl;
        }
        void planificarEntrenamiento(){
            cout << "Planifica el entrenamiento." << endl;
        }
};
