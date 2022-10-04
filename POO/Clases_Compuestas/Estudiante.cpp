//Clases compuestas

/***********************************************************************
Las clases compuestas son aquellas que en sus atributos tienen objetos 
de otras clases externas.
***********************************************************************/

#include <bits/stdc++.h>
#include "Estudiante.h"
using namespace std;

//Funcion Principal.
int main(){
    //Variables de la funcion.
    Estudiante* estudiante1 = new Estudiante("Bryan", "2018070891", 9.15, 1001, "Calle 1, Casa 20, C.P. 09254");
    //Acciones del programa.
    estudiante1->mostrarDatos();    //Mostramos el contenido del objeto.
    delete estudiante1; //Eliminamos el objeto
    return 0;
}
