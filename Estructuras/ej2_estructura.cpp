//Ejercicio #2.

/****************************************************************
Hacer una estructura llamada alumno, en la cual se tendran los
siguientes campos: Nombre, edad, promedio.
Pedir datos al usuario para 3 alumnos, comprobar cual de los
3 tiene el mejor promedio y posteriormente imprimir los datos del
alumno.
****************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Estructura Corredor
struct alumno{
    char nombre[20];
    int edad;
    float promedio;
}alumno[3];

//Funcion principal.
int main(){
    //Variables de la funcion.
    int mayor=0,mejor;
    //Solicitando datos al usuario.
    cout << "Digite los siguientes datos:" << endl;
    for (int i = 0; i < 3; i++){
        fflush(stdin);
        cout << "\n * Alumno #" << i + 1 << " *" << endl;
        cout << "\t - Nombre: ";
        cin.getline(alumno[i].nombre, 20, '\n');
        cout << "\t - Edad: ";
        cin >> alumno[i].edad;
        cout << "\t - Promedio: ";
        cin >> alumno[i].promedio;
        //Obteniendo el alumnbo con el mayor promedio.
        if (alumno[i].promedio >= mayor){
            mayor = alumno[i].promedio;
            mejor = i;
        }
    }
    
    // Mostrar resultados en consola.
    cout << "\n Resultados: " << endl;
    cout << "\t - Promedio mas alto -> Alumno #" << mejor + 1 << endl;
    cout << "\t - Nombre: " << alumno[mejor].nombre << endl;
    cout << "\t - Edad: " << alumno[mejor].edad << endl;
    cout << "\t - Promedio: " << alumno[mejor].promedio << endl;
    return 0;
}