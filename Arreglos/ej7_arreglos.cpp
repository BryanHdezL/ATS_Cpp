//Ejercicio #7 almacenar los valores de un arreglo B en un arreglo A.

/****************************************************************
Realiza un programa que defina dos vectores de caracteres y 
despues almacene el contenido de ambos vectores en un nuevo
vector, situado en primer lugar los elementos del primer vector
seguido por los elementos del segundo vector. Muestre el contenido
el nuevo vector en la salida estandar.
****************************************************************/

//Librerias
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        char A[5],B[5],C[10];
    //Solicitar valores al usuario.
        //Lenando arreglo 1.
        for(int i=0;i<5;i++){
            cout<<"Valor de A["<<i<<"]: "; cin>>A[i];
        }
        //Llenando arreglo 2.
        for(int i=0;i<5;i++){
            cout<<"Valor de B["<<i<<"]: "; cin>>B[i];
        }
    //Acciones del programa.
        //Copear elementos al arreglo 3.
        for(int i=0;i<10;i++){
            if(i>=0 && i<=4){
                C[i]=A[i];
            }else{
                C[i]=B[i-5];
            }
        }
    //Mostarr resultados.
        cout<<"El arreglo C quedo de la siguiente manera: "<<endl<<"\t C = { ";
        for(int i=0;i<10;i++){
            cout<<C[i]<<" ";
        }
        cout<<"}";
    getch();
    return 0;
}