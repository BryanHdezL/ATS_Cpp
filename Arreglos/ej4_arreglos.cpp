//Ejercicio #4 mostrar el consola el vector captura de forma inversa.

/****************************************************************
Escribe un programa que defina un vector de numeros y muestre en
la salida estandar el vetor en orden inverso - del ultimo al
primero.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int numeros[50],n;
    //Solicitar valores al usuario.
        //Numero de elementos.
        cout<<"Digite la cantidad de elementos: "; cin>>n;
        //LLenando arreglo
        for(int i=0;i<n;i++){
            cout<<"Digite el valor #"<<i<<": "; cin>>numeros[i];
        }
    //Acciones del programa (Mostrar resultados)
        for(int i=n-1;i>=0;i--){
            cout<<"Numeros["<<i<<"] : "<<numeros[i]<<endl;
        }


    getch();
    return 0;
}