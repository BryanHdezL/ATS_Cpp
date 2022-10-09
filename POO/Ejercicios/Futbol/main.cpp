//Ejercicio 8.

//Librerias.
#include <bits/stdc++.h>
#include "Persona.h"
#include "Futbolista.h"
#include "Entrenador.h"
#include "Medico.h"
using namespace std;

/***********************************************************************
Crear un programa para simular un equipo de futbol (futbolista, 
entrenador y doctor), para lo cual tendremos lo siguinte:
    - Una clase base Persona, que tendra los siguientes datos: nombre, 
        apellido, edad.
    - La clase derivada Futbolista tendra los siguientes datos: dorsal 
        y posicion.
    - La clase derivada Entrenador tendra de dato la estrategia que 
        utiliza.

Hacer un menu donde se tengan  las siguientes opciones:
    a) Viajar en equipo.
    b) Entrenamiento.
    c) Partido de futbol.
    d) Planificar entrenamiento.
    e) Entrevista.
    f) Currar lesion.
***********************************************************************/

//Prototipos de funciones
void menu();
void viajarEquipo();
void entrenamientoEquipo();
void partidoEquipo();
void planificarEntrenamientoEquipo();
void entrevistaEquipo();
void curarEquipo();

//Variables globales.
Persona* equipo[4];

//Funcion principal.
int main(){
    //Variables extra de la funcion.
    equipo[0] = new Futbolista("Gonzalo", "Giguain", 30, 9, "Delantero");
    equipo[1] = new Futbolista("Paulo", "Dybala", 24, 10, "Delantero");
    equipo[2] = new Entrenador("Massimiliano", "Allegri", 50, "Defensiva");
    equipo[3] = new Medico("Alex", "Marroni", 59, "Fisioterapeuta", 15);
    //Acciones del programa.
    menu();
    //Fin del programa.
    return 0;
}

// Funcion menu
void menu() {
    //Variables de la funcion.
    int opc;
    //Mostramos el menu.
    do{
        cout << "\n\t+------------------------------------------+";
        cout << "\n\t|              MENU DE OPCIONES            |";
        cout << "\n\t+------------------------------------------+";
        cout << "\n\t|     1) Viajar en equipo.                 |";
        cout << "\n\t|     2) Entrenamiento.                    |";
        cout << "\n\t|     3) Partido de futbol.                |";
        cout << "\n\t|     4) Planificar entrenamiento.         |";
        cout << "\n\t|     5) Entrevista.                       |";
        cout << "\n\t|     6) Curar lesion.                     |";
        cout << "\n\t|     7) Salir del programa.               |";
        cout << "\n\t+------------------------------------------+";
        cout << "\n\nDigite la accion que desea realizar: ";
        cin >> opc;
        //Invocamos a la funcion deseada segun sea la opcion elegida.
        switch(opc){
            case 1: //Viaje en equipo.
                viajarEquipo();
                break;
            case 2: //Entrenamiento.
                entrenamientoEquipo();
                break;
            case 3: //Partido de futbol
                partidoEquipo();
                break;
            case 4: //Planificar entrenamiento
                planificarEntrenamientoEquipo();
                break;
            case 5: //Entrevista.
                entrevistaEquipo();
                break;
            case 6: //Curar lesion
                curarEquipo();
                break;
            default:
                cout << "\t BYE" << endl;
                break;
        }
    } while (opc != 7);
}

void viajarEquipo(){
    cout << "\n * Viajar *" << endl;
    for (int i = 0; i < 4; i++){
        cout << "\t - " << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
        equipo[i]->viajar();
    }
}

void entrenamientoEquipo(){
    cout << "\n * Entrenamiento *" << endl;
    for (int i = 0; i < 4; i++){
        cout << "\t - " << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
        equipo[i]->entrenamiento();
    }
}

void partidoEquipo(){
    cout << "\n * Partido de Futbol *" << endl;
    for (int i = 0; i < 4; i++){
        cout << "\t - " << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
        equipo[i]->partidoFutbol();
    }
}

void planificarEntrenamientoEquipo(){
    cout << "\n * Planificar el Entrenamiento *" << endl;
    cout << "\t - " << equipo[2]->getNombre() << " " << equipo[2]->getApellido() << " -> ";
    ((Entrenador *)equipo[2])->planificarEntrenamiento();
}

void entrevistaEquipo(){
    cout << "\n * Entrevistas *" << endl;
    for (int i = 0; i < 2; i++){
        cout << "\t - " << equipo[i]->getNombre() << " " << equipo[i]->getApellido() << " -> ";
        ((Futbolista *)equipo[i])->entrevista();
    }
}

void curarEquipo(){
    cout << "\n * Curar *" << endl;
    cout << "\t - " << equipo[3]->getNombre() << " " << equipo[3]->getApellido() << " -> ";
    ((Medico *)equipo[3])->curarLesion();
}