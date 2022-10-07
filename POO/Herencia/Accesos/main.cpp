//Diferentes tipos de herencia en POO

/***********************************************************************
Existen tres tipos de herencia, publica, privada y protegida.

Se declara de la siguiente manera:

    class ClaseDerivada : tipoHerencia ClaseBase{
        private:
            //Seccion Privada
        public:
            //Seccion Publica
        protected:
            //Seccion Protegida
    };

Cada tipo de herencia tiene sus propias cracateristicas de como reciben 
los atributos de la clase padre.
***********************************************************************/

#include <bits/stdc++.h>
#include "Turismo.h"
#include "Deportivo.h"
#include "Furgoneta.h"
using namespace std;

//Funcion Principal.
int main(){
    //Herencia Publica
    cout << "\n - Herencia Publica -" << endl;
    Turismo* t1 = new Turismo("Toyota", "Blanco", "GH89", 4);   //Creamos el objeto dinamico.
    cout << "\t - Color: " << t1->getColor() << endl;   //Mostramos el color inicial del objeto.
    t1->setColor("Azul");   //Establecemos un nuevo color del objeto.
    cout << "\t - Color: " << t1->getColor() << endl;   //Mostramos el nuevo color que tiene el objeto.
    cout << "\t - Modelo: " << t1->retornarModelo() << endl;   //Mostramos el modelo (Protegido) del objeto.
    
    //Herencia Privada.
    cout << "\n - Herencia Privada -" << endl;
    Deportivo* d1 = new Deportivo("Audi", "Rojo", "KL98", 10);  //Creamos el objeto dinamico
    cout << "\t - Cilindrada: " << d1->getCilindrada() << endl;   //Mostramos el valor de la cilindrada del objeto.
    cout << "\t - Marca: " << d1->retornarMarca() << endl;   
    
    //Herencia protegida
    cout << "\n - Herencia Protegida -" << endl;
    Furgoneta* f1 = new Furgoneta("Kia", "Verde", "AS12", 1200);    //Creamos el objeto dinamico.
    cout << "\t - Carga: " << f1->getCarga() << endl;   
    cout << "\t - Color: " << f1->retornarColor() << endl;   

    //Destruimos los objetos.
    delete t1;
    delete d1;
    delete f1;
    return 0;
}