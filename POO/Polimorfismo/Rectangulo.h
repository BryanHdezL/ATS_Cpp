//Librerias.
#include <bits/stdc++.h>
#include "Poligono.h"
using namespace std;

//Declaracion de la clase.
class Rectangulo : public Poligono{
    private:
        float base;
        float altura;
    public:
        //Constructor
        Rectangulo(float base, float altura){
            this->base = base;
            this->altura = altura;
        }
        //Destructor
        ~Rectangulo(){

        }
        //Obtenemos el area del rectangulo
        float area(){
            return (base * altura);
        }
        //Obtenemos el perimetro del rectangulo
        float perimetro(){
            return (2 * (base + altura));
        }
};