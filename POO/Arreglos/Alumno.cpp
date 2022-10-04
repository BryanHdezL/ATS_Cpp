//Arreglo de objetos.

/***********************************************************************
En los arreglos de objetos se pueden utilizar arreglos estaticos o 
dinamicos.
La diferencia en este paradigma es que el metodo constructor debe estar 
vacio, por ello se recomienda dejar el metodo constructor por defecto 
que tiene el lenguaje.
***********************************************************************/

#include <bits/stdc++.h>
#include "Alumno.h"
using namespace std;

//Funcion Principal.
int main(){
    //Variables de la funcion.
    Alumno* califciones = new Alumno[3]; //Crecion de un arreglo dinamico de ojetos.
    //Solicitando datos al usuario.
    for (int i = 0; i < 3; i++){
        cout << "\n * Calificaciones Alumno #" << i + 1 << " *" << endl;
        (califciones + i)->leerCal();
    }
    //Mostrando los datos de cada uno de los alumnos.
    for (int i = 0; i < 3; i++){
        cout << "\n * Notas del Alumno #" << i + 1 << " *" << endl;
        (califciones + i)->mostrarCal();
    }
    return 0;
}

//Metodo para leer las calificaciones del alumno.
void Alumno::leerCal(){
    cout << "\t - Matematicas: ";
    cin >> calMate;
    cout << "\t - Programacion: ";
    cin >> calProgra;
}

//Metodo para mostrar las calificaciones capturadas, ademas del promedio de las mismas.
void Alumno::mostrarCal(){
    cout << "\t - Matematicas: " << calMate << endl;
    cout << "\t - Programacion: " << calProgra << endl;
    cout << "\t - Promedio: " << (calMate + calProgra) / 2 << endl;
}