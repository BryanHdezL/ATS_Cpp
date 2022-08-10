//Ejercicio #3 Comparara 2 cadenas, igualdad y alfabeticamente.

/****************************************************************
Pedir al usuario que digite 2 cadenas de caracteres, e indicar
si ambas cadenas son iguales, en caso de no serlo, indicar cual
es mayor alfabeticamente
****************************************************************/

//Librerias.
#include <iostream>
#include <string.h>
using namespace std;

//Funcion prinicpal.
int main(){
    //Variables de la funcion.
    char cad1[20];
    char cad2[20];
    //Solicitar datos al usuario.
    cout<<"Digite la primer cadena: ";
    cin.getline(cad1, 20, '\n');
    cout<<"Digite la segunda cadena: ";
    cin.getline(cad2, 20, '\n');
    //Mostrar en consola.
    if(strcmp(cad1,cad2) == 0){
        cout << "Ambas cadenas son iguales." << endl;
    }else{
        if(strcmp(cad1,cad2) > 0){
            cout << cad1 << " es mayor alfabeticamente." << endl;
        }else{
            cout << cad2 << " es mayor alfabeticamente." << endl;
        }
    }
    return 0;
}