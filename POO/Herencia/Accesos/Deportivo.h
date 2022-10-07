//Herencia privada

/***********************************************************************
Los miembros publicos y protegidos de la clase padre, se vuelven 
privados en la clase hija.

Se declara de la siguiente manera:

    class ClaseDerivada : private ClaseBase{
        private:
            //Seccion Privada
        public:
            //Seccion Publica
        protected:
            //Seccion Protegida
    };

Las caracteristicas de este tipo de herencia son:
    public          ->      private.
    protected       ->      private.
    private         ->      inaccesible.    (No se heredan)
***********************************************************************/

// Librerias.
#include <bits/stdc++.h>
#include "Vehiculo.h"
using namespace std;

// Declaracion de la clase.
class Deportivo : private Vehiculo{
    private:
        int cilindrada;
    public:
        //Constructor
        Deportivo(string marca, string color, string modelo, int cilindrada) : Vehiculo(marca, color, modelo){
            this->cilindrada = cilindrada;
        }
        //Destructor
        ~Deportivo(){

        }
        //Obtenemos el numero de la cilindrada
        int getCilindrada(){
            return cilindrada;
        }
        //Obtenemos el nombre de la marca desde el atributo heredado como tipo privado.
        string retornarMarca(){
            return getMarca();
        }
};