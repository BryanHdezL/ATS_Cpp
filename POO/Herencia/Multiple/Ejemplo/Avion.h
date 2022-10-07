//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase.
class Avion{
    private:
        string modelo;
    public:
        //Constructor
        Avion(string modelo){
            this->modelo = modelo;
        }
        //Destructor
        ~Avion(){

        }
        //Desplazamiento
        void desplazamientoAvion(){
            cout << "\t - Desplazamiento por aire." << endl;
        }
        //Obtenemos el nombre de barco
        string getModelo(){
            return modelo;
        }
};