//Librerias
#include <bits/stdc++.h>
using namespace std;

// Declaracion de la clase Personaje
class Personaje{
    //Funciones amigas
    friend void modificar(Personaje &, int, int);   //Funcion amiga que modifica los valores del personaje
    //Atributos
    private:
        int ataque;
        int defensa;
    // Metodos
    public:
        //Constructor
        Personaje(int ataque, int defensa) {
            this->ataque = ataque;
            this->defensa = defensa;
        }
        void mostrarDatatos(){
            cout << "\n * Datos *" << endl;
            cout << "\t - Ataque: " << ataque << endl;
            cout << "\t - Defensa: " << defensa << endl;
        }
};