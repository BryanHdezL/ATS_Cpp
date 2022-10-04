//Librerias.
#include <bits/stdc++.h>
#include "Expediente.h"
#include "Direccion.h"
using namespace std;

//Declaracion de la clase.
class Estudiante{
    //Atributos
    private:
        string nombre;
        string boleta;
        float promedio;
        Expediente exp;
        Direccion dir;
    // Metodos
    public:
        Estudiante(string nombre, string boleta, float promedio, int numExpediente, string direccion) : exp(numExpediente), dir(direccion) {  // Constructor
            this->nombre = nombre;
            this->boleta = boleta;
            this->promedio = promedio;
        }
        void mostrarDatos(){
            cout << "\n * Datos *" << endl;
            cout << "\t - Nombre: " << nombre << endl;
            cout << "\t - Boleta: " << boleta << endl;
            cout << "\t - Promedio: " << promedio << endl;
            cout << "\t - No. de expediente: " << exp.getNumExpediente() << endl;
            cout << "\t - Direccion: " << dir.getDireccion() << endl;
        }
};