//Asignacion Dinamica.

/***********************************************************************
    new :   Reserva le numero de bytes solicitado por la declaracion
    delete : Libera un bloque de bytes reservado con anterioridad

    Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un
            arreglo dinamico.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
void leerCalificaciones();
void mostrar();

//Variables globales.
int nCalificaciones, *calificacion;

//Funcion principal.
int main(){
    //Solicitar datos al usuario.
    leerCalificaciones();
    //Acciones del programa.
    mostrar();
    delete[] calificacion;  //Liberando el espacio en bytes utilizados anteriormente.
    return 0;
}

//Funcion para mostrar las calificaciones capturadas.
void mostrar(){
    cout << "\n - Calificaciones: \n\t";
    for (int i = 0; i < nCalificaciones; i++){
        cout << calificacion[i] << " ";
    }
}
//Funcion para leer las calificaciones capturadas por el usuario.
void leerCalificaciones(){
    cout << "Numero de Calificaciones: ";
    cin >> nCalificaciones;
    calificacion = new int[nCalificaciones];    //Creamos el arrelo.

    for (int i = 0; i < nCalificaciones; i++){
        cin >> calificacion[i];
    }
}