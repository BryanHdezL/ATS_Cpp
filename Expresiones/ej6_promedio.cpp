//Ejercicio #6 promedio de 3 notas.

/***********************************************************************
Escribe un programa que lea la nota final de cuatro alumnos y calcula
la nota final media de los cuatro alummnos
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables;
        float n1,n2,n3,n4,nf;
    //Solicitar valores al usuario.
        cout<<"Digite la nota del alumno 1: "; cin>>n1;
        cout<<"Digite la nota del alumno 2: "; cin>>n2;
        cout<<"Digite la nota del alumno 3: "; cin>>n3;
        cout<<"Digite la nota del alumno 4: "; cin>>n4;
    //Acciones del programa.
        nf=(n1+n2+n3+n4)/4;
    //Mostrar resultados del programa.
        cout.precision(3);
        cout<<"El promedio de las cuatro notas es: "<<nf<<endl;
    return 0;
}