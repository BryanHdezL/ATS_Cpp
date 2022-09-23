//Concepto de puntero.

/***********************************************************************
    &n  →   Direccion de n.
    *n  →   Variable ciya direccion esta almacenada en n 
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Variables de la funcion.
    int num;
    int *dir_num;
    //Acciones del programa.
    num=20;
    // Variable inciial.
    cout << "\n Variable inicial" << endl;
    cout << "\t Numero: " << num << endl;
    cout << "\t Direccion de memoria: " << &num << endl;
    dir_num = &num;
    // Variable de tipo puntero.
    cout << "\n Variable puntero" << endl;
    cout << "\t Numero: " << *dir_num << endl;
    cout << "\t Direccion de memoria: " << dir_num << endl;
    return 0;
}
