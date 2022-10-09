//Librerias.
#include <bits/stdc++.h>
#include "Materia.h"
using namespace std;

/***********************************************************************
Defina una plantilla para la clase Materia, de tal manera que el tipo de 
dato del atributo calificacion sea del tipo T. Esto permitira crear
objetos de tipo materia que tengan calificaciones que sean: numeros
enteros, nuemros decimales y letras.

    a) Cree un objeto de tipo Materia usando el tipo int. Imprima los 
        valores de los atributos del objeto creado.
    b) Cree un objeto de tipo Materia usando el tipo float.
    c) Cree un objeto de tipo Materia usando el tipo char.
    d) Incluya un metodo en la clase que permita modificar la 
        calificacion de una materia.
***********************************************************************/

//Funcion principal.
int main(){
    //Variables extra de la funcion.
    Materia<int> curso1("Algoritmos", 1, 7);
    Materia<float> curso2("Matematicas", 2, 8.89);
    Materia<char> curso3("Fisica", 3, 'A');
    //Acciones del programa.
    curso1.mostrarDatos();
    curso2.mostrarDatos();
    curso3.mostrarDatos();
    curso1.setCalificacion(10);
    cout << "\n\t - La nueva calificacion dle curso1 es: " << curso1.getCalificacion() << endl;
    //Destruimos objetos.
    cout << endl;
    curso1.~Materia();
    curso2.~Materia();
    curso3.~Materia();
    //Fin del programa.
    return 0;
}