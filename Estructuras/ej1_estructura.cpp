//Ejercicio #1.

/****************************************************************
Hacer una estructura llamada corredor, en la cual se tendran los 
siguientes campos: Nombre, edad, sexo, club.
Pedir datos al usuario para un corredor y asignarle una categoria
de competicion:
    - Juvenil <= 18 Años.
    - Señor <= 40 Años.
    - Veterano > 40 Años.
Posteriormente imprimir todos los datos del corredor, incluida
su categoria de competicion.
****************************************************************/

//Librerias.
#include <iostream>
#include <string.h>
using namespace std;

//Estructura Corredor
struct corredor{
    char nombre[50];
    int edad;
    char sexo[10];
    char club[20];
}corredor1;

//Funcion principal.
int main(){
    //Variables de la funcion.
    char categoria[20];
    //Solicitando datos al usuario.
    cout << "Digite los siguientes datos: " << endl;
    cout << "\t - Nombre: ";
    cin.getline(corredor1.nombre, 50, '\n');
    fflush(stdin);  //Liberar el buffer.
    cout << "\t - Edad: ";
    cin >> corredor1.edad;
    fflush(stdin);  //Liberar el buffer.
    cout << "\t - Sexo: ";
    cin.getline(corredor1.sexo, 10, '\n');
    fflush(stdin);  //Liberar el buffer.
    cout << "\t - Club: ";
    cin.getline(corredor1.club, 20, '\n');
    fflush(stdin);  //Liberar el buffer.
    //Asignacion de categoria.
    if(corredor1.edad<=18){
        strcpy(categoria, "Junior");
    }else if(corredor1.edad<=40){
        strcpy(categoria, "Senior");
    }else if(corredor1.edad>40){
        strcpy(categoria, "Veterano");
    }
    //Mostrar resultados en consola.
    cout << "\n Resultados: " << endl;
    cout << "\t -Nombre: " << corredor1.nombre << endl;
    cout << "\t -Edad: " << corredor1.edad << endl;
    cout << "\t -Sexo: " << corredor1.sexo << endl;
    cout << "\t -Club: " << corredor1.club << endl;
    cout << "\t -Categoria: " << categoria << endl;
    return 0;
}