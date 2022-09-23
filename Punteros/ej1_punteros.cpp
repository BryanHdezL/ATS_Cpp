//Ejercicio #1.

/***********************************************************************
Comprobar si un numero es par o impar, y señalar la posicion de memoria
donde se esta guardando el numero. Con punteros.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Variables de la funcion.
    int num, *dir_num;
    //Solicitar datos al usuario.
    cout<<"Numero: ";
    cin >> num;
    dir_num = &num; //Guardando la posicion de memoria.
    //Acciones del programa.
    if(*dir_num%2==0){
        cout << "\t El numero " << *dir_num << " es par" << endl;
    }else{
        cout << "\t El numero " << *dir_num << " es impar" << endl;
    }
    cout << "\t Posicion: " << dir_num << endl;
    return 0;
}
