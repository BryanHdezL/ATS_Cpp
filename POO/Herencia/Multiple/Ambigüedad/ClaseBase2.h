//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Declaracion de la clase.
class ClaseBase2{
    private:
        int x;
    public:
        //Constructor
        ClaseBase2(int x){
            this->x = x;
        }
        //Destructor
        ~ClaseBase2(){
        
        }
        //Obtener el valor de x.
        int getX(){
            return x;
        }
};