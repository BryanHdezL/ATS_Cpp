//Ejercicio #12 calculo de expresion 1-2+3-4+5-6...n con ciclos. 

/****************************************************************
Hacer un programa que calcule el resultado de la siguiente
expresion: 1-2+3-4+5-6...n
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables.
        int n,suma=0;
    //Solicitar valores al usuario.
        cout<<"Digite el valor de n: "; cin>>n;
    //Acciones del programa.
        for(int i=1;i<=n;i++){
            if(i%2==0){ //Los pares son negativos
                suma-=i;
            }else if(i%2!=0){   //Los impares son positivos
                suma+=i;
            }
        }
    //Mostrar resultados del programa.
        cout<<"El resultado de la expresion es: "<<suma<<endl;
    getch();
    return 0;
}