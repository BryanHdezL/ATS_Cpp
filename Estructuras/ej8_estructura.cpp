//Ejercicio #8.

/****************************************************************
Defina ina estructura que sirva para representar a una persona.
La estructura debe contener dos campos: el nombre de la persona y
un valor de tipo logico que indica si la persona tiene algun
tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos
nuevos vectores: uno que contenga las persona que no tienen
ninguna discapacidad y otro que contenga las personas con
discapacidad.
****************************************************************/

//Librerias.
#include <iostream>
#include <string.h>
using namespace std;

//Estructura persona.
struct persona {
    char nombre[20];
    bool discapacidad;
}personas[100],personaPos[100],personaNeg[100];

//Funcion principal.
int main(){
    // Variables de la funcion.
    int numPersonas, positivas = 0, negativas = 0;
    // Solicitando datos al usuario.
    // Numero total de personas a registrar.
    cout << "Digite el numero de personas a registar: ";
    cin >> numPersonas;
    cout << "Digite los datos de las personas: " << endl;
    // Datos de las personas.
    for (int i = 0; i < numPersonas; i++){
        fflush(stdin);
        cout << "\n * Persona #" << i + 1 << " *" <<endl;
        cout << "\t - Nombre: ";
        cin.getline(personas[i].nombre, 20, '\n');
        fflush(stdin);
        cout << "\t - Tiene discapacidad [1/0]: ";
        cin >> personas[i].discapacidad;
        //Asiganando vector del paciente.
        if (personas[i].discapacidad == 1) {
            strcpy(personaPos[positivas].nombre, personas[i].nombre);
            positivas++;
        }else if (personas[i].discapacidad == 0) {
            strcpy(personaNeg[negativas].nombre, personas[i].nombre);
            negativas++;
        }
    }
    // Mostrar resultados en consola.
    cout << "\n* Resultados *" << endl;
    cout << "\n - Mostrando las personas sin discapacidad: " << endl;
    for (int i = 0; i < negativas; i++){
        cout << "\t " << i + 1 << ".- " << personaNeg[i].nombre << endl;
    }
    cout << "\n - Mostrando las personas con discapacidad: " << endl;
    for (int i = 0; i < positivas; i++){
        cout << "\t " << i + 1 << ".- " << personaPos[i].nombre << endl;
    }
    return 0;
}