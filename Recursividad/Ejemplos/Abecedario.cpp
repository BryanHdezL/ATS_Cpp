// Ejemplo #3.

/***********************************************************************
Mostrar el abecedario hasta la letra que se le mande a la funcion, 
utilizando recursividad Indirecta.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
void funcionA(char);
void funcionB(char);

//Funcion principal.
int main(){
    //Variables de la funcion.
    cout << "Abecedario: ";
    funcionA('N');
    //Acciones del programa.
    //Fin del programa.
    return 0;
}

void funcionA(char letra){
    // Caso base (letra == 'A') se encuentra oculto
    if (letra > 'A') {
        // Caso recursivo
        funcionB(letra);
    }
    cout << letra << " ";
}

void funcionB(char letra){
    // Caso recursivo
    funcionA(--letra);
}

