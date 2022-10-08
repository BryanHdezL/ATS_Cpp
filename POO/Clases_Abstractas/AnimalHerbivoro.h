//Librerias.
#include <bits/stdc++.h>
#include "Animal.h"
using namespace std;

//Declaracion de la clase.
class AnimalHerbivoro : public Animal{
    public:
        //Constructor
        AnimalHerbivoro(){
            
        }
        //Destructor
        ~AnimalHerbivoro(){

        }
        //Metodo para mostrar el alimento
        void alimentarse(){
            cout << "\t - Los animales herbivoros se alimentan de hierbas." << endl;
        }
};