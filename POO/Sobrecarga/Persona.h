//Librerias
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase persona.
class Persona{
    //Atributos
    private:
        string nombre;
        string dni;
        int edad;
    // Metodos
    public:
        Persona(string _nombre, int _edad){ //Contructor #1.
            nombre = _nombre;
            edad = _edad;
        }
        Persona(string _dni){   //Constructor #2.
            dni = _dni;
        }
        void correr(){
            cout << "Soy " << nombre << ", mi edad es " << edad << " y estoy corriendo un maraton." << endl;
        }
        void correr(int km){
            cout << "He corrido " << km << " kilometros." << endl;
        }
};
