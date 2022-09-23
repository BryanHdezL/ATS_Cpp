//Ejercicio #4.

/***********************************************************************
Rellenar un arreglo con n numeros, posteriore=mente utilizando
punteros determinar el menor elemento del arreglo.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Variables de la funcion.
    int n, num[100], *dir_num, menor;
    //Solicitar datos al usuario.
    cout<<"N: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num[i];
    }
    // Acciones del programa.
    dir_num = num;
    menor = *dir_num;
    for (int i = 1; i < n; i++){
        if (*dir_num < menor){
            menor = *dir_num;
        }
        *dir_num++;
    }
    cout << "\t Menor: " << menor;
    return 0;
}