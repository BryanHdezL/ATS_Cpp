//Librerias
#include <bits/stdc++.h>
using namespace std;

// Declaracion de la clase Personaje
class Cuadrilatero{
    //Atributos.
    private:
        float lado1;
        float lado2;
    //Metodos.
    public:
        //Constructor #1 - Los dos lados recibidos son diferentes.
        Cuadrilatero(float lado1, float lado2){
            this->lado1 = lado1;
            this->lado2 = lado2;
        }
        //Constructor #2 - Los dos lados recibidos son iguales (cuadrado).
        Cuadrilatero(float lado){
            this->lado1 = lado;
            this->lado2 = lado;
        }
        //Obtenemos el perimetro.
        float obtenerPerimetro();
        //Obtenemos el area.
        float obtenerArea();
};