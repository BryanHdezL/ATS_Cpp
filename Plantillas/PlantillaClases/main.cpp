//Librerias.
#include <bits/stdc++.h>
#include "EjemploPlantilla.h"
using namespace std;

//Funcion Principal.
int main(){
    //Variables de la funcion
    EjemploPlantilla<int, float> ob1(5, 8.79);
    //Acciones del programa
    ob1.mostrarValores();
    ob1.setDato1(10);
    ob1.setDato2(3.14);
    ob1.mostrarValores();
    //Destruimos objetos.
    cout << endl;
    ob1.~EjemploPlantilla();
    //Fin del programa.
    return 0;
}