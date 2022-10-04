//Sobrecarga de funciones miembro.

/***********************************************************************
Como su propio nombre indica, es funciones o metodos con el mismo nombre,
que diferencen por uno o mas parametros que le sean enviados al metodo.
***********************************************************************/

//Librerias.
#include <bits/stdc++.h>
#include "Persona.h"
using namespace std;

//Funcion Principal.
int main(){
    //Variables de la fucion.
    Persona* p1 = new Persona("Bryan", 20);
    Persona* p2 = new Persona("1234567");
    p1->correr();
    p2->correr(5);
    return 0;
}