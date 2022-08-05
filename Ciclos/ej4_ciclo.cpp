//Ejercicio #4 calculo de temperatura con ciclos.

/****************************************************************
Escriba un progrma que tome cada 4 horas la temperatura exterior,
leyendola durante un periodo de 24 horas.
Es decir, debe leer 6 temperaturas. Calcula la temperatura media
del dia, la temperatura mas alta y la mas baja.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables.
        float temp,mayor=0,menor=999,suma=0;
    //Acciones del programa:
        for(int i=0;i<24;i+=4){
            cout<<"Digite la temperatura de la hora "<<i<<": "; cin>>temp;
            suma+=temp; //Sumamos las temperaturas.
            if(temp>mayor){ //Si la temperatura digitada es mayor.
                mayor=temp;
            }else if(temp<menor){  //Si la temperatura digitada es menor
                menor=temp;
            }
        }
    //Mostrar resultados del programa.
        cout.precision(3);
        cout<<"Temperatura media: "<<suma/6<<endl;
        cout<<"Temperatura mayor: "<<mayor<<endl;
        cout<<"Temperatura menor: "<<menor<<endl;



    getch();
    return 0;
}