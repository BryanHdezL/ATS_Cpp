//Librerias.
#include <bits/stdc++.h>
#include "ClaseBase1.h"
#include "ClaseBase2.h"
using namespace std;

//Declaracion de la clase.
class ClaseDerivada:public ClaseBase1,public ClaseBase2{
    private:
        int x;
    public:
        //Constructor
        ClaseDerivada(int x1, int x2, int x) : ClaseBase1(x1), ClaseBase2(x2){
            this->x = x;
        }
        //Destructor
        ~ClaseDerivada(){
        
        }
        //Obtener el valor de x.
        int getX(){
            return x;
        }
};