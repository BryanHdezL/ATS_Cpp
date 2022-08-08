//Ejercicio #6 determinar si un numero en un arreglo equivale a la suma de los demas elementos.

/****************************************************************
Esrcibe un programa que defina un vector de numeros y calcule si
existe algun numero en el vector cuyo valor equivale a la suma 
del resto de numeros del vector.
****************************************************************/

//Librerias
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int num[50],n,suma=0,mayor=0;
    //Solicitar valores al usuario.
        cout<<"Digite el numero de elementos del vector: "; cin>>n;
        for(int i=0;i<n;i++){
            cout<<"Digite el elemento "<<i+1<<": "; cin>>num[i];
        }
    //Acciones del programa.
        for(int i=0;i<n;i++){
            //Obtenemos la suma de los elementos del vector.
            suma+=num[i];
            //Obtenemos el numero mayor.
            if(mayor<num[i]){
                mayor=num[i];
            }
        }
    //Mostarr resultados.
        if(mayor==(suma-mayor)){
            cout<<"El numero "<<mayor<<" equivale a la suma de los demas"<<endl;
        }else{
            cout<<"No existe ningun numero con las condiciones del problema"<<endl;
        }
    getch();
    return 0;
}