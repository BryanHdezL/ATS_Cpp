//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase.
class Barco{
    private:
        string nombre;
    public:
        //Constructor
        Barco(string nombre){
            this->nombre = nombre;
        }
        //Destrutor
        ~Barco(){

        }
        //Desplazamiento
        void desplazamientoBarco(){
            cout << "\t - Desplazamiento por agua." << endl;
        }
        //Obtenemos el nombre de barco
        string getNombre(){
            return nombre;
        }
};