//Ejercicio 6.

//Librerias.
#include <bits/stdc++.h>
#include "GatoDomestico.h"
#include "Felino.h"
using namespace std;

/***********************************************************************
Considere la siguiente relacion de herencia. Defina las clases Mamifero,
Felino y GatoDomestico. Decida que atributos y metodos incluir de tal 
manera que su programa pueda:
    a) Declarar un objeto llamado "minino" de tipo GatoDomestico y otro
        llamado "estrellaCirco" de tipo Felino.
    b) Imprimir la dieta de minino y de estrellaCirco.
    c) Imprimir el año y lugar de nacimiento de minino y de estrellaCirco
    d) Cambiar el nombre del dueño de minino.
    e) Imprimir la raza de minino y de estrellaCirco.
    f) Cambiar el nombre del circo en el que actua estrellaCirco.
***********************************************************************/

//Funcion proncipal.
int main(){
    //Variables de la funcion.
    GatoDomestico* minino = new GatoDomestico(2015, "Trujillo", "Persa", "Bryan");
    Felino* estrellaCirco = new Felino(2014, "India", "Tigre de Bengala", "Circo Espectacular");
    string nombreAnterirPropietario, nombreNuevoPropietario;
    string nombreAnterirCirco, nombreNuevoCirco;
    //Acciones del programa.

    // Imprimir las dietas de minino y estrellaCirco 
    cout << "\n * Dietas *" << endl;
    cout << "\t - Minino: " << minino->imprimirDieta() << endl;
    cout << "\t - EstrellaCirco: " << estrellaCirco->imprimirDieta() << endl;

    // Imprimir el año y lugar de nacimiento de minino y estrellaCirco 
    cout << "\n * Fecha de Nacimiento *" << endl;
    cout << "\t - Minino: " << minino->getAnioNacimiento() << " - " << minino->getLugarNacimiento() << endl;
    cout << "\t - EstrellaCirco: " << estrellaCirco->getAnioNacimiento() << " - " << estrellaCirco->getLugarNacimiento() << endl;

    // Cambiar el nombre del dueño de minino 
    cout << "\n * Cambio de nombre del propietario de Minino *" << endl;
    nombreAnterirPropietario = minino->getNombrePropietario();
    cout << "\t + Nuevo nombre: ";
    fflush(stdin);
    getline(cin, nombreNuevoPropietario);
    minino->setNombrePropietario(nombreNuevoPropietario);
    cout << "\t - Nombre del anterior propietario de Minino: " << nombreAnterirPropietario << endl;
    cout << "\t - Nombre del nuevo propietario de Minino: " << minino->getNombrePropietario() << endl;

    // Imprimir las razas de minino y estrellaCirco 
    cout << "\n * Razas *" << endl;
    cout << "\t - Minino: " << minino->getRaza() << endl;
    cout << "\t - EstrellaCirco: " << estrellaCirco->getRaza() << endl;

    // Cambiar el nombre del dueño de minino 
    cout << "\n * Cambio de nombre del Circo *" << endl;
    nombreAnterirCirco = estrellaCirco->getNombreCirco();
    cout << "\t + Nuevo nombre: ";
    fflush(stdin);
    getline(cin, nombreNuevoCirco);
    estrellaCirco->setNombreCirco(nombreNuevoCirco);
    cout << "\t - Nombre del anterior Circo de Minino: " << nombreAnterirCirco << endl;
    cout << "\t - Nombre del nuevo Circo de Minino: " << estrellaCirco->getNombreCirco() << endl;

    //Destruimos los objetos.
    cout << endl;
    delete minino;
    delete estrellaCirco;
    //Fin del programa.
    return 0;
}