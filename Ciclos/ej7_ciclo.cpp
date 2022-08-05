//Ejercicio #7 suma de 1+2+3+4+...+n

/****************************************************************
Escriba un programa que calcule el valor de 1+2+3+4+...+n
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declarcion de variables.
        int n,suma=0;
    //Solciitar valores alusuario.
        cout<<"Digite el valor de n: "; cin>>n;
    //Acciones del programa.    
        for(int i=1;i<=n;i++){
            suma+=i;
        }
    //Mostrar resultados del programa.
        cout<<"La suma total es: "<<suma<<endl;
    return 0;
}
