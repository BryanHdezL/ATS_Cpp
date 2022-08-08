//Ejercicio #5 determinar cual es el valor mayor de un arreglo.

/****************************************************************
 Desarrolle un programa que lea de la entrada estandar un vector
 de eneteros y determine el mayor elemento del vector.
****************************************************************/

//Librerias
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int num[50],n,mayor=0;
    //Solicitar valores al usuario.
        cout<<"Digite el numero de elementos: "; cin>>n;
        for(int i=0;i<n;i++){
            cout<<"Numeros["<<i<<"] : "; cin>>num[i];

            if(mayor<num[i]){
                mayor=num[i];
            }
        }
    //Acciones del programa (mostarr resultados).
        cout<<"El valor mayor del arreglo es: "<<mayor<<endl;
    getch();
    return 0;
}