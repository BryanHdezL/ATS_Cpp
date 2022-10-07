//Constructores y destructores con clases Derivadas

/***********************************************************************
Al momento de crear un bojeto de la clase Deriavada, primero se 
realiza el constructor de la clase Base y despues el constructor de la
clase derivada.

Al momento de eliminar un bojeto de la clase Deriavada, primero se 
realiza el destructor de la clase Derivada y despues el destructor de la
clase base.
***********************************************************************/

#include <bits/stdc++.h>
#include "ClaseDerivada.h"
using namespace std;

//Funcion Principal.
int main(){
    //Variables de la funcion.
    ClaseDerivada* ob1 = new ClaseDerivada(5, 10);
    //Destruimos los objetos.
    delete ob1;
    return 0;
}