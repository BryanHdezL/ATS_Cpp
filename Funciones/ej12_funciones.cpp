//Ejercicio #12.

/***********************************************************************
Realice una funcion que tome como parametros un vector y su tamaño y 
diga si el vector esta ordenado crecientemente.
Sugerencia: Compruebe que para todas las posiciones del vector, salvo
para 0, el elemento del vector es mayor o igual al elemento que le
prece en el vector.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
template <class TIPOD>
void verificacion(TIPOD vec[], int, bool&);

//Funcion principal.
int main(){
    //Variables de la funcion.
    const int TAM = 5;
    int vec[TAM] = {1, 2, 3, 4, 5};
    bool flag = true;
    //Acciones del programa.
    verificacion(vec, TAM, flag);
    if(flag){
        cout << "Si esta ordenado crecientemente";
    }else{
        cout << "No esta ordenado crecientemente";
    }
    return 0;
}

//Funcion
template <class TIPOD>
void verificacion(TIPOD vec[], int tam, bool& flag){
    for (int i = 1; i < tam; i++){
        if(vec[i]<vec[i-1]){
            flag = false;
            break;
        }
    }
}