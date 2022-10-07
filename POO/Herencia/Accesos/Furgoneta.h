//Herencia protegida

/***********************************************************************
Los miembros publicos y protegidos de la clase padre, se vuelven 
protegidos en la clase hija.

Se declara de la siguiente manera:

    class ClaseDerivada : protected ClaseBase{
        private:
            //Seccion Privada
        public:
            //Seccion Publica
        protected:
            //Seccion Protegida
    };

Las caracteristicas de este tipo de herencia son:
    public          ->      protected.
    protected       ->      protected.
    private         ->      inaccesible.    (No se heredan)
***********************************************************************/

// Librerias.
#include <bits/stdc++.h>
#include "Vehiculo.h"
using namespace std;

// Declaracion de la clase.
class Furgoneta : protected Vehiculo{
    private:
        int carga;
    public:
        //Constructor.
        Furgoneta(string marca, string color, string modelo, int carga) : Vehiculo(marca, color, modelo){
            this->carga = carga;
        }
        //Obtenemos la carga
        int getCarga(){
            return carga;
        }   
        //Destructor.
        ~Furgoneta(){

        }
        //Obtenemos el color desde el atributo heredado como tipo protegido
        string retornarColor(){
            return getColor();
        }
    protected:
};