//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase.
class Direccion{
    //Atributos
    private:
        string direccion;
    //Metodos
    public:
        Direccion(string direccion){    //Constructor #1
            this->direccion = direccion;
        }
        ~Direccion(){   //Destructor

        }
        string getDireccion(){  //Obtenemos la direccion.
            return direccion;
        }
};