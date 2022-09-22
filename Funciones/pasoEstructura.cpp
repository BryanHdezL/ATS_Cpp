//Paso de parametros de tipo estructura.

/*
Parametros de la duncion
    void nombreFuncion(struct nombreEstructura nombreVariableFuncion)  

Llamada a la funcion
    nombreFuncion(nombreVariableEstructura)
*/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void pedirDatos();
void mostrar(struct Persona p);

//Estructura.
struct Persona{
    char nombre[30];
    int edad;
}p1;

//Funcion principal.
int main(){
    //Acciones del programa.
    pedirDatos();
    mostrar(p1);
    return 0;
}

//Funcion para mostrar los datos de la estructura.
void mostrar(struct Persona p){
    cout << "\t - Nombre: " << p.nombre << endl;
    cout << "\t - Edad: " << p.edad << endl;
}

//Funcion para leer datos.
void pedirDatos(){
    cout << "Digite su nombre: ";
    cin.getline(p1.nombre, 30, '\n');
    cout<<"Digite su edad: ";
    cin >> p1.edad;
}