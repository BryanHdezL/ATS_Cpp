//Punteros a estructuras.

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
void mostrar(struct Persona *punteroPersona);
void leer();

//Estructura.
struct Persona{
    char nombre[30];
    int edad;
} persona, *punteroPersona = &persona;

//Funcion principal.
int main(){
    //Acciones del programa.
    leer();
    mostrar(punteroPersona);
    return 0;
}

//Funcion para mostrar el contenido de la funcion.
void mostrar(struct Persona *punteroPersona){
    cout << "\t Nombre: " << punteroPersona->nombre << endl;
    cout << "\t Edad: " << punteroPersona->edad << endl;
}

//Funcion para leer el contenido de la estructura.
void leer(){
    cout << "Nombre: ";
    cin.getline(punteroPersona->nombre, 30, '\n');
    cout << "Edad: ";
    cin >> punteroPersona->edad;
}
