//Metodo destructor.
//Autorreferencia del Objeto: this

/***********************************************************************
El metodo destructor se utiliza para liberar memoria eliminando el
objeto una vez que ya no sera utilizado, C++ ya lo hace por defecto pero
no es recomendado en proyectos grandes.
EL metodo no tiene parametros ni contenido simplemente ~Objeto(){}

En el caso de los objetos estaticos se debe realizar:
    nombreObjeto.~Objeto();
En el caso de los objetos dinamicos se debe realizar:
    delete NombreObjeto;

La autorreferencia se refiere a la palabra this en los metodos
constructores, para evitar utilziar variables de diferente nombre,
para evitar confuciones, se utiliza la palabra "this", se utiliza de la
siguiente manera:
    this->nombreVariable = nombreVariable;
***********************************************************************/

#include <bits/stdc++.h>
#include "Perro.h"
using namespace std;

//Funcion Principal.
int main(){
    //Variables de la funcion.
    Perro perro1("Rudy", "French Poodle");
    Perro* perro2 = new Perro("Bianca", "Salchicha");
    perro1.mostrarDatos();
    perro1.jugar();
    perro1.~Perro();    //Destruyendo el objeto estatico perro1.
    perro2->jugar();
    delete perro2;      //Destruyendo el objeto dinamico perro2.
    return 0;
}

//Metodo que muestra mensaje de que el perro se encunetra jeugando.
void Perro::jugar(){
    cout << "\n * Jugar *" << endl;
    cout << "\t El perro " << nombre << " esta jugando." << endl;
}

//Metodo que muestra los datos de cada perro
void Perro::mostrarDatos(){
    cout << "\n * Datos *" << endl;
    cout << "\t - Nombre: " << nombre << endl;
    cout << "\t - Raza: " << raza << endl;
}