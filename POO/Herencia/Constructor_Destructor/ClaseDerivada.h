//Clase Derivada.

#include <bits/stdc++.h>
#include "ClaseBase.h"
using namespace std;

class ClaseDerivada : ClaseBase{
    private:
        int numero2;
    public:
        //Constructor
        ClaseDerivada(int numero, int numero2) : ClaseBase(numero){
            this->numero2 = numero2;
            cout << "Construcor de ClaseDerivada" << endl;
        }
        //Destructor
        ~ClaseDerivada(){
            cout << "Destrucor de ClaseDerivada" << endl;
        }
};
