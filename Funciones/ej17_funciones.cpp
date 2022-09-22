//Ejercicio #17.

/***********************************************************************
Suma de numeros complejos.

z1 = 5-3i   ,   z2 = -4+2i

z1 + z2 = (5-3i)+(-4+2i)
        = 5-3i-4+2i
        = 1-i
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void leerDatos();
struct Complejo suma(Complejo, Complejo);
void mostrar(Complejo);
//Estructura.
struct Complejo{
    float real, imaginario;
} z1, z2;

//Funcion principal.
int main(){
    //Variables de la funcion.
    Complejo x;
    //Solicitar datos al usuario.
    leerDatos();
    // Acciones del programa.
    x = suma(z1, z2);
    mostrar(x);
    return 0;
}

//Funcion que muestra el resultado de la suma de los complejos.
void mostrar(Complejo resultado){
    cout << "\n\t - Resultado de la suma: " << resultado.real << " + " << resultado.imaginario << "i" << endl;
}

    // Funcion que realiza la suma de los numeros complejos.
struct Complejo suma(Complejo z1, Complejo z2) {
    z1.real += z2.real;
    z1.imaginario = z2.imaginario;
    return z1;
}

//Funcion para leer los datos de los numeros complejos.
void leerDatos(){
    cout << "Capture los datos de Z1: " << endl;
    cout << "\t Real: ";
    cin >> z1.real;
    cout << "\t Imaginario: ";
    cin >> z1.imaginario;
    cout << "Capture los datos de Z2: " << endl;
    cout << "\t Real: ";
    cin >> z2.real;
    cout << "\t Imaginario: ";
    cin >> z2.imaginario;
}