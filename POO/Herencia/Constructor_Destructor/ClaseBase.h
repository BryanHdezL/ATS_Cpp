//Clase Base

#include <bits/stdc++.h>
using namespace std;

class ClaseBase{
    private:
        int numero;
    public:
        //Constructor
        ClaseBase(int numero){
            this->numero = numero;
            cout << "Construcor de ClaseBase" << endl;
        }
        //Destructor
        ~ClaseBase(){
            cout << "Destrucor de ClaseBase" << endl;
        }
};
