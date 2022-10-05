//Ejercicio 4.

/***********************************************************************
Construir un programa que dada una serie de vehiculos carcaterizados 
por su marca, modelo y precio imprima las propiedades del vehiculo mas 
barato.
Para ello, se deberan leer por teclado las caracteristicas de cada 
vehiculo y crear una clase que represente cada uno de ellos.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
#include "Vehiculo.h"
using namespace std;

//Funcion principal.
int main(){
    //Variables de la funcion.
    Vehiculo* coches;
    string marca, modelo;
    float precio;
    int numVehiculos, indiceBarato;
    //Acciones del programa.
    //Solicitando el numero de elementos del arreglo.
    cout << "No. de vehiculos: ";
    cin >> numVehiculos;
    coches = new Vehiculo[numVehiculos];    //Declaramos el arreglo de objetos
    //Rellenamos el arreglo de objetos.
    for (int i = 0; i < numVehiculos; i++){
        //Solicitamos datos al usuario.
        cout << "\n * Datos del vehiculo * " << endl;
        fflush(stdin);
        cout << "\t - Marca: ";
        getline(cin, marca);
        fflush(stdin);
        cout << "\t - Modelo: ";
        getline(cin, modelo);
        fflush(stdin);
        cout << "\t - Precio: ";
        cin >> precio;
        //Inicializamos los atributos del objeto.
        coches[i] = Vehiculo(marca, modelo, precio);
    }
    //Obtenemos la posicion del auto mas barato
    indiceBarato = Vehiculo::indiceMasBarato(coches, numVehiculos);
    //Mostramos el resultado del auto mas barato
    (coches+indiceBarato)->mostrarDatos();
    //Destruimos el objeto coches
    delete[] coches;
    return 0;
}