//Ejercicio #5  realizar suma entre un rango.

/****************************************************************
Escriba un programa que lea valores enteros hasta que se
introduzca un valor en el rango [20-30] o se introduzca el valor
0. El rporama debe entregar la suma de los valores maypores a 0
introducidos.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables.
        int num,suma=0;
    //Acciones del programa.
        do{
            cout<<"Digite un valor: "; cin>>num;
            if(num>0){
                suma+=num;
            }
        }while((num<=20 || num>=30)&&(num!=0));
    //Mostrar resultados del programa.
        cout<<"La suma de los valores mayores a cero es: "<<suma<<endl;
    getch();
    return 0;
}