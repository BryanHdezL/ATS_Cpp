// Herencia Multiple

/********************************************************************************
Tipo de herencia en la que una clase hereda los miemobros de mas de
una clase base. (Tiene mas de dos clases padre).

Se declara de la siguiente manera:

class ClaseDeriavada : [tipo_acceso] ClaseBase1, [tipo_acceso] ClaseBase2, ...{
    // MIembros de la clase
}
********************************************************************************/

#include <bits/stdc++.h>
#include "Hidroavion.h"
using namespace std;

// Funcion Principal.
int main() {
    // Variables de la funcion.
    Hidroavion* ob = new Hidroavion("Veloz22", "HA99", "123OP");
    // Acciones del programa.
    ob->mostrarDatos();
    cout << "\n";
    ob->desplazamientoBarco();
    ob->desplazamientoAvion();
    // Eliminamos el objeto.
    delete ob;
    return 0;
}