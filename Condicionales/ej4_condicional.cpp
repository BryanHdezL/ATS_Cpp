//Ejercicio #4 determinar numeros positivos y negativos.

/***********************************************************************
Comrpobar si un numero digitado por el usuario es positivo o negativo.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int num;
    //Solcicitar valores al usuario.
        cout<<"Digite un numero: "; cin>>num;
    //Acciones del programa (Mostrar resultados)
        if(num==0){
            cout<<"Es un valor nulo."<<endl;
        }else if(num<0){
            cout<<"Es un valor negativo."<<endl;
        }else if(num>0){
            cout<<"Es un valor positivo."<<endl;
        }
    return 0;
}