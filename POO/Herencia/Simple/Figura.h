//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase.
class Figura{
    //Atributos
    private:
        int nLados;
        // Metodos
    public:
        //Constructor
        Figura(int nLados){
            this->nLados = nLados;
        }
        //Destructor
        ~Figura(){

        }
        //Obtenemos el numero de lados de la figura
        int getNumLados(){
            return nLados;
        }
};