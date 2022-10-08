// Librerias.
#include <bits/stdc++.h>
#include "Poligono.h"
using namespace std;

// Declaracion de la clase.
class Triangulo : public Poligono {
    private:
        float lado1;
        float lado2;
        float lado3;

    public:
        // Constructor.
        Triangulo(float lado1, float lado2, float lado3) {
            this->lado1 = lado1;
            this->lado2 = lado2;
            this->lado3 = lado3;
        }
        // Destructor.
        ~Triangulo(){

        }
        //Obtenemos el area del triangulo
        float area(){
            float sp = ((lado1 + lado2 + lado3) / 2);
            return (sqrt((sp) * (sp - lado1) * (sp - lado2) * (sp - lado3)));
        }
        //Obtenemos el perimetro del triangulo
        float perimetro(){
            return (lado1 + lado2 + lado3);
        }
};