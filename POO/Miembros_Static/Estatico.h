//Librerias
#include <bits/stdc++.h>
using namespace std;

// Declaracion de la clase Estatico
class Estatico{
    //Metodos.
    private:
        static int contador;    //Declaracion de un atributo static.
    // Atributos.
    public:
        Estatico(){ //Constructor
            contador++;
        }
        int getContador(){  //Obtenemos el valor del contador.
            return contador;
        }
        static int suma(int n1, int n2){    //Declaracion de un metodo static.
            return (n1 + n2);
        }
};

