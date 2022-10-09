//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Delcracion de la plantilla.
template <class T1, class T2>
class EjemploPlantilla{
    private:
        T1 dato1;
        T2 dato2;
    public:
        //Constructor
        EjemploPlantilla(T1 dato1, T2 dato2){
            this->dato1 = dato1;
            this->dato2 = dato2;
        }
        //Destructor
        ~EjemploPlantilla(){

        }
        //Establememos valor de dato1
        void setDato1(T1 nuevoValorDato1){
            this->dato1 = nuevoValorDato1;
        }
        //Obtenemos el valor de dato1.
        T1 getDato1(){
            return dato1;
        }
        //Establememos valor de dato2
        void setDato2(T2 nuevoValorDato2){
            this->dato2 = nuevoValorDato2;
        }
        //Obtenemos el valor de dato2.
        T2 getDato2(){
            return dato2;
        }
        //Mostramos valores
        void mostrarValores(){
            cout << "\n * Mostrando Valores *" << endl;
            cout << "\t - Dato1: " << dato1 << endl;
            cout << "\t - Dato2: " << dato2 << endl;
        }
};