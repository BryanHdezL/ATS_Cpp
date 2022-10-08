//Librerias.
#include <bits/stdc++.h>
#include "Animal.h"
using namespace std;

//Declaracion de la clase.
class AnimalCarnivoro : public Animal{
    public:
        //Constructor
        AnimalCarnivoro(){
            
        }
        //Destructor
        ~AnimalCarnivoro(){

        }
        //Metodo para mostrar el alimento
        void alimentarse(){
            cout << "\t - Los animales carnivoros se alimentan de carne." << endl;
        }
};