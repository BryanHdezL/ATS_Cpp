//Librerias.
#include <bits/stdc++.h>
#include "Felino.h"
using namespace std;

//Declaracion de la clase.
class GatoDomestico : public Felino{
    private:
        string nombrePropietario;
    public:
        //Constructor del gato de casa
        GatoDomestico(int anioNacimiento, string lugarNacimiento, string raza, string nombrePropietario) : Felino(anioNacimiento, lugarNacimiento, raza){
            this->nombrePropietario = nombrePropietario;
        }
        //Destructor
        ~GatoDomestico(){
            
        }
        //Mostramos la dieta del felino de circo.
        string imprimirDieta(){
            return "La dieta del gato es con Whiskas.";
        }
        //Establecemos un nuevo nombre del circo.
        void setNombrePropietario(string nuevoNombrePropietario){
            this->nombrePropietario = nuevoNombrePropietario;
        }
        //Obtenemos el nombre del Propietario
        string getNombrePropietario(){
            return nombrePropietario;
        }
};