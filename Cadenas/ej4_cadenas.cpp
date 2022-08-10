//Ejercicio #4 Concatenar dos cadenas, una de ellas captura por el usuario

/****************************************************************
Crear una cadena que tenga la siguiente frase "Hola que tal", 
luego crear otra cadena para preguntarle al usuarui su nombre, 
por ultimo añadir el nombre al final de la primera cadena y 
mostrar el mensaje completo "Hola que tal (NombreDelUsuario)"
****************************************************************/

//Librerias.
#include <iostream>
#include <string.h>
using namespace std;

//Funcion prinicpal.
int main(){
    //Variables de la funcion.
    char mensaje[] = "Hola que tal ";
    char nombreDelUsuario[30];
    char cadenaFinal[50];
    //Solicitar datos al usuario.
    cout << "Digite su nombre: ";
    cin.getline(nombreDelUsuario, 30, '\n');
    //Mostrar en consola.
    strcpy(cadenaFinal, mensaje);
    strcat(cadenaFinal, nombreDelUsuario);
    cout << cadenaFinal << endl;
    return 0;
}