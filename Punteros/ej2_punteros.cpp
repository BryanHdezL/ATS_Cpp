//Ejercicio #2.

/***********************************************************************
Determinar si un numero es primo o no; con punteros y ademas indicar en
que posicion de memoria se guardo el numero.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Variables de la funcion.
    int num, *dir_num, k=0;
    //Solicitar datos al usuario.
    cout << "Numero: ";
    cin >> num;
    dir_num = &num;
    //Acciones del programa.
    for (int i = 1; i <= *dir_num; i++){
        if(*dir_num%i==0){
            k++;
            if(k>2){
                cout << "\t El numero " << *dir_num << " no es primo" << endl;
                break;
            }
        }
    }
    if(k==2){
        cout << "\t El numero " << *dir_num << " si es primo" << endl;
    }
    cout << "\t Posicion: " << dir_num << endl;
    return 0;
}
