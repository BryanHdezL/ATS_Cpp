//Ejercicio #8 multipliart al doble el valor de los elementos de un arreglo.

/****************************************************************
Hacer un programa que lea 5 numeros en un arreglo, los copee a
otro arreglo multiplicados por 2 y muestre el segundo arreglo
****************************************************************/

//Librerias
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int A[5],B[5];
    //Solicitar valores al usuario.
        //Lenando arreglo 1.
        for(int i=0;i<5;i++){
            cout<<"Valor de A["<<i<<"]: "; cin>>A[i];
        }
    //Acciones del programa.
        //Copear elementos al arreglo 2.
        for(int i=0;i<10;i++){
            B[i]=A[i]*2;
        }
    //Mostarr resultados.
        cout<<"El arreglo B quedo de la siguiente manera: "<<endl<<"\t C = { ";
        for(int i=0;i<5;i++){
            cout<<B[i]<<" ";
        }
        cout<<"}";
    getch();
    return 0;
}