//Herencia publica

/***********************************************************************
Tiene acceso a los elementos publicos y protegidos.

Se declara de la siguiente manera:

    class ClaseDerivada : public ClaseBase{
        private:
            //Seccion Privada
        public:
            //Seccion Publica
        protected:
            //Seccion Protegida
    };

Las caracteristicas de este tipo de herencia son:
    public          ->      public.
    protected       ->      protected.
    private         ->      inaccesible.    (No se heredan)
***********************************************************************/

// Librerias.
#include <bits/stdc++.h>
#include "Vehiculo.h"
using namespace std;

// Declaracion de la clase.
class Turismo : public Vehiculo{
    private:
        int numPuertas;
    public:
        //Constructor
        Turismo(string marca, string color, string modelo, int numPuertas) : Vehiculo(marca, color, modelo){
            this->numPuertas = numPuertas;
        }
        //Destructor
        ~Turismo(){

        }
        //Obtenemos numero de puertas.
        int getNumeroPuertas(){
            return numPuertas;
        }
        //Obtenemos el modelo desde el atributo heredado como tipo protegido
        string retornarModelo(){
            return getModelo();
        }
};