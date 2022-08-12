//Estrctura basica en C++.

#include <iostream>
using namespace std;

struct Persona{
    char nombre[20];
    int edad;
} persona1, persona2 = {"Bryan", 20};

int main(){
    //Forma de almacenar datos en las variables de la estructura.
    cout << "Cual es el primer nombre: ";
    cin.getline(persona1.nombre, 20, '\n');
    cout << "Cual es la primer edad: ";
    cin >> persona1.edad;
    //Mostrar datos de la estructura e la consola.
    cout << "Nombre #1: " << persona1.nombre << endl;
    cout << "Edad #1: " << persona1.edad << endl;
    cout << "Nombre #2: " << persona2.nombre << endl;
    cout << "Edad #2: " << persona2.edad << endl;
    return 0;
}