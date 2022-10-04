//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase.
class Perro{
    //Atributos
    private:
        string nombre;
        string raza;
    //Metodos
    public:
        Perro(string nombre, string raza){
            this->nombre = nombre;
            this->raza = raza;
        }
        ~Perro(){
            
        }
        void mostrarDatos();
        void jugar();
};