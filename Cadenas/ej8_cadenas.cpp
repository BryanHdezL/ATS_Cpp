//Ejercicio #8 Convertir cadenas a valores numericos.

/****************************************************************
Pedir al usuairo 2 cadenas de caracteres de numeros, uno entero
y el otro real, convertirlos a sus respectivos valores y por 
ultimo sumarlos.
****************************************************************/

//Librerias.
#include <iostream>
#include <string.h>
using namespace std;

//Funcion prinicpal.
int main(){
    //Variables de la funcion.
    char cad1[10];
    char cad2[10];
    //Solicitar datos al usuario.
    cout << "Digite un numero entero: ";
    cin.getline(cad1, 10, '\n');
    cout << "Digite un numero real: ";
    cin.getline(cad2, 10, '\n');
    //Mostrar en consola.
    cout << "El numero entero es: " << atoi(cad1) << endl;
    cout << "El numero real es: " << atof(cad2) << endl;
    cout << "La suma de ambos numeros es: " << atoi(cad1) + atof(cad2) << endl;
    return 0;
}