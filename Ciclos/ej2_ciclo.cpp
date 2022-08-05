//Ejercicio #2 leer numeros hasta capturar un 0.

/****************************************************************
Realice un programa que lea de la entrada estandar numeros hasta
que se introduzca un cero. En ese momento el programa debe 
terminar mostrar en la salida estandar el numero de valores
mayores que cero leidos.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declarcaion de variables.
        int num,cont=0;
    //Solicitar datos al usuario y acciones del programa.
        do{
            cout<<"Digite un numero: "; cin>>num;
            if(num>0){
                cont++;
            }
        }while(num!=0);
    //Mostrar resultados del programa.
        cout<<"Cantidad de valores mayores a cero: "<<cont<<endl;
    getch();
    return 0;
}