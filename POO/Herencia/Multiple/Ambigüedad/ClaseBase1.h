//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase.
class ClaseBase1{
    private:
        int x;
    public:
        //Constructor
        ClaseBase1(int x){
            this->x = x;
        }
        //Destructor
        ~ClaseBase1(){
        
        }
        //Obtener el valor de x.
        int getX(){
            return x;
        }
};