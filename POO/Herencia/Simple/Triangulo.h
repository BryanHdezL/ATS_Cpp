//Librerias.
#include <bits/stdc++.h>
#include "Figura.h" //Clase padre.
using namespace std;

//Declaracion de la clase.
class Triangulo : public Figura{
    // Atributos
    private :
        float lado1, lado2, lado3;
        // Metodos
        public :
            //Constructor
            Triangulo(int nLados, float lado1, float lado2, float lado3) : Figura(nLados) {
                this->lado1 = lado1;
                this->lado2 = lado2;
                this->lado3 = lado3;
            }
            //Destructor
            ~Triangulo(){

            }
            //Formula para calcular el area del triangulo.
            float areaTraingulo(){
                float p = ((lado1 + lado2 + lado3) / 2);
                float area = (sqrt((p) * (p - lado1) * (p - lado2) * (p - lado3)));
                return area;
            }
};