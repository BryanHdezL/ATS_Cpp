//Ejercicio #13 Serie Fibonacci

/****************************************************************
Hacer un programa que realice la serie Fibonacci.
Fibonacci -> 1,1,2,3,5,8,13,...,n
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables.
        int n;
        int x=0,y=1,z=0;
    //Solicitar valores al usuario.
        cout<<"Digite el numero de leementos de la serie: "; cin>>n;
    //Acciones del programa (Mostrar resultados).
        cout<<y<<" ";
        for(int i=1;i<n;i++){
            z=x+y;
            cout<<z<<" ";
            x=y;
            y=z;
        }
    getch();
    return 0;
}