//Ejercicio #14 ejemplo de estadistica en un grupo de alumnos

/****************************************************************
En una clase de 5 alumnos se han realizado tres examenes y se 
requiere determinar el numero de:

    a) Alumnos que aprobaron todos los examenes.
    b) Alumnos que aproaron al menos un examen.
    c) Alumnos que aprobaron unicamente el ultimo examen.

Realice un programa que permita la lectura de los datos y el
calculo de las estadisticas.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal
int main(){
    //Declaracion de variables.
        float ex1,ex2,ex3;
        int aTodos=0,aUno=0,aUltimo=0;
    //Solicitar valores al usuario.
        for(int i=1;i<=5;i++){
            //Datos de los examenes.
            cout<<"Alumno "<<i<<". Nota Examen 1: "; cin>>ex1;
            cout<<"Alumno "<<i<<". Nota Examen 2: "; cin>>ex2;
            cout<<"Alumno "<<i<<". Nota Examen 3: "; cin>>ex3;
            cout<<"\n";
            //Contador de examenes aprobados.
            if((ex1>=6)&&(ex2>=6)&&(ex3>=6)){   //Aprobar todos.
                aTodos++;
            }
            if((ex1<6)&&(ex2<6)&&(ex3>=6)){ //Aprobar solo el ultimo.
                aUltimo++;
            }
            if((ex1>=6)||(ex2>=6)||(ex3>=6)){   //Aprobo al menos 1.
                aUno++;
            }
        }
    //Mostrar resultados del programa.
        cout<<"Cantidad de alumnos que aprobaron todos los examenes: "<<aTodos<<endl;
        cout<<"Cantidad de alumnos que aprobaron al menos un examen: "<<aUno<<endl;
        cout<<"Cantidad de alumnos que aprobaron el ultimo examen: "<<aUltimo<<endl;
    getch();
    return 0;
}