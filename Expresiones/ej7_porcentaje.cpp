//Ejercicio #7 porcentaje de notas de un alumno.

/***********************************************************************
La calificacion final de un estudiante es el primedio de tres notas:

    -La nota de practicas que cuenta un 30% del total.
    -La nota teorica que cuenta con un 60%.
    -La nota de participacion que cuenta el 10% restante.

Escriba un programa que lea las tres notas del alumno y esriba su nota
final.
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        float nPracticas,nTeoria,nParticipacion,nAlumno;
    //Solicitar datos al usuaurio.
        cout<<"Digite la nota obtenida en practicas: "; cin>>nPracticas;
        cout<<"Digite la nota obtenida en teoria: "; cin>>nTeoria;
        cout<<"Digita la nota obtenida en participacion: "; cin>>nParticipacion;
    //Acciones del programa.
        nAlumno=(nPracticas*.30)+(nTeoria*.60)+(nParticipacion*.10);
    //Mostrar resultado del programa.
        cout<<"La nota final del alumno es de: "<<nAlumno<<endl;
    return 0;
}