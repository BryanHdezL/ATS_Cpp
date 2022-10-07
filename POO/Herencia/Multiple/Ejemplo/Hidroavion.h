//Librerias.
#include <bits/stdc++.h>
#include "Barco.h"
#include "Avion.h"
using namespace std;

//Declaracion de la clase.
class Hidroavion : public Barco, public Avion{
    private:
        string codigo;
    public:
        //Constructor
        Hidroavion(string nombre, string modelo, string codigo) : Barco(nombre), Avion(modelo){
            this->codigo = codigo;
        }
        //Destructor
        ~Hidroavion(){

        }
        //Mostramos los datos del hidroavion.
        void mostrarDatos(){
            cout << "\n * Datos *" << endl;
            cout << "\t - Nombre: " << getNombre() << endl;
            cout << "\t - Modelo: " << getModelo() << endl;
            cout << "\t - Codigo: " << codigo << endl;
        }
        //Obtenemos el codigo
        string getCodigo(){
            return codigo;
        }
};