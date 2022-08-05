
//Ejercicio #14 minijuago de adivina el nuemero

/****************************************************************
Realice un programa que solicite al usuario que piense un numero
entero entre el 1 y el 100. El programa qdebe generar un numero
aleatorio en ese mismo rangp [1-100], e indicarle al usuario si
el numero aleatorio, asi hasta que lo adivine y por ultimo
mostrarle el numero de intentos.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables.
        int num,dato,cont=0;
    //Acciones del programa.
        //Generar un numero aleatorio.
        srand(time(NULL));  //Genera un numero aleatorio.
        dato = (1+rand()%(100));    //Genera un numero aleatorio en el rango.
        //cout<<"Dato: "<<dato<<endl;   //Comprobacion del valor.
        //Solicitar datos al usuario.
        do{
            cout<<"\tDigite un numero: "; cin>>num;

            if(num>dato){
                cout<<"Cerca, digita un numero menor."<<endl;
            }else if(num<dato){
                cout<<"Cerca, digita un numero mayor."<<endl;
            }else if(num==dato){
                cout<<"Excelente, haz encontrado el numero."<<endl;
            }
            cont++;
        }while(num!=dato);
    //Mostra resultados del programa.
        cout<<"El numero total de intentos es: "<<cont<<endl;
    return 0;
}