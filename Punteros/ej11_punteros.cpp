//Ejercicio #11.

/***********************************************************************
Hacer una estructura llamada alumno, en la cual se tendran los
siguientes campos: Nombre, edad, primedio.
Pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene el
mejor promeido y posteriormente imprimir los datos del alumno.

Nota: Usar punteros a estructura.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
void leer();
void encontrarMayor(int *);
void mostrar(struct Alumno *, int);

//Estructura.
struct Alumno{
    char nombre[30];
    int edad;
    float promedio;
} alumno[3], *punteroAlumno = alumno;

//Funcion principal.
int main(){
    //Variables de la funcion.
    int posMayor;
    //Solicitar datos al usuario.
    leer();
    //Acciones del programa.
    encontrarMayor(&posMayor);
    cout << "\n\t Posicion: " << posMayor << endl;
    mostrar(punteroAlumno,posMayor);
    return 0;
}

//Funcion para mostrar el contenido del alumno con mejor promedio.
void mostrar(struct Alumno *datos, int pos){
    cout << "\n Datos del alumno con mejor promedio: " << endl;
    cout << "\t Nombre: " << (punteroAlumno + pos)->nombre << endl;
    cout << "\t Edad: " << (punteroAlumno + pos)->edad << endl;
    cout << "\t Promedio: " << (punteroAlumno + pos)->promedio << endl;
}

// Funcion para encontrar el mayor.
void encontrarMayor(int *pos){
    float mayor = 0.0;
    for (int i = 0; i < 3; i++){
        if ((punteroAlumno+i)->promedio > mayor){
            mayor = (punteroAlumno+i)->promedio;
            *pos = i;
        }
    }
}

//Funcion para leer el contenido de la estructura.
void leer(){
    for (int i = 0; i < 3; i++){
        fflush(stdin);
        cout << "\n Alumno #" << i + 1 << ":" << endl;
        cout << "\t Nombre: ";
        cin.getline((punteroAlumno+i)->nombre, 30, '\n');
        cout << "\t Edad: ";
        cin >> (punteroAlumno+i)->edad;
        cout << "\t Promedio: ";
        cin >> (punteroAlumno+i)->promedio;
    }
}