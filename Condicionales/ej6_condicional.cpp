//Ejercicio #6 determinar si es vocal minuscula o mayuscula.

/***********************************************************************
Escriba un programa que lea de la entrada estandar un cracater e indique
en la salida estar si el caracter es una vocal minuscula, es una vocal
mayuscula o no es una vocal. 
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    ///Declaracion de variables.
        char L;
    //Solciitar valores al usuario.
        cout<<"Digite una letra: "; cin>>L;
    //Acciones del programa (Mostrar resultados).
        if(L=='a'||L=='e'||L=='i'||L=='o'||L=='u'){
            cout<<"Es una vocal minuscula."<<endl;
        }else if(L=='A'||L=='E'||L=='I'||L=='O'||L=='U'){
            cout<<"Es una vocal mayuscila."<<endl;
        }else{
            cout<<"No es una vocal."<<endl;
        }
    return 0;
}