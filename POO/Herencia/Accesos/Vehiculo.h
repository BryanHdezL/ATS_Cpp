//Fuardian de inclusion multiple
#ifndef VEHICULO_H
#define VEHICULO_H

// Librerias.
#include <bits/stdc++.h>
using namespace std;

// Declaracion de la clase.
class Vehiculo {
    private:
        string marca;
        string color;
    protected:
        string modelo;
        //Obtenemos el modelo.
        string getModelo(){
            return modelo;
        }
    public:
        // Constructor
        Vehiculo(string marca, string color, string modelo){
            this->marca = marca;
            this->color = color;
            this->modelo = modelo;
        }
        //Obtenemos la marca
        string getMarca(){
            return marca;
        }
        //Obtenemos el color
        string getColor(){
            return color;
        }
        //Establememos el nuevo valor del color
        void setColor(string color){
            this->color = color;
        }
};

//Fin del guardian de inclusion multiple
#endif