//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase.
class Expediente{
    //Atributos
    private:
        int numExpediente;
    // Metodos
    public:
        Expediente(int numExpediente){  //Constructor #1
            this->numExpediente = numExpediente;
        }
        Expediente(){   //Constructor #2
            
        }
        ~Expediente(){  //Destructor

        }
        int getNumExpediente(){    //Obtenemos el numero de expediente
            return numExpediente;
        }
};