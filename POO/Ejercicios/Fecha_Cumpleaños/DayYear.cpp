//Ejercicio 1.

/***********************************************************************
Definir una clase DayYear con los atributos mes y dia, los metodos 
igual() y visualizar().
El mes se registra como un valor entero (1, Enero, 2, Febrero, etc...).
El dia del mes se registra en otra variable entera denominada dia.
Escribir un programa que compruebe si una fecha es su cumpleaños.
***********************************************************************/

#include <bits/stdc++.h>
#include "DayYear.h"
using namespace std;

//Funcion Principal.
int main(){
    //Variables de la funcion.
    int d, m;
    DayYear* hoy;   //Objeto dinamico.
    DayYear* cumple;    //Objeto dinamico.
    //Solicitando datos al usuario.
    cout << "\n * Fecha actual *" << endl;
    cout << "\t - Dia: ";
    cin >> d;
    cout << "\t - Mes: ";
    cin >> m;
    hoy = new DayYear(d, m);    //Creacion de objeto dinamico.
    cout << "\n * Fecha cumple *" << endl;
    cout << "\t - Dia: ";
    cin >> d;
    cout << "\t - Mes: ";
    cin >> m;
    cumple = new DayYear(d, m);    //Creacion de objeto dinamico.
    //Mostramos las fechas.
    hoy->visualizar();
    cumple->visualizar();
    //Resultado de la comprobacion de fechas.
    if(hoy->igual(*cumple)){
        cout << "\n\t FELIZ CUMPLE!!!" << endl;
    }else{
        cout << "\n\t TENGA BUEN DIA" << endl;
    }
    return 0;
}

//Metodo para comparar ambas fechas.
bool DayYear::igual(DayYear& d){
    return (((dia == d.dia) && (mes == d.mes)) ? true : false);
}

//Metodo para visualizar las fechas.
void DayYear::visualizar(){
    cout << "\n * Fecha *" << endl;
    cout << "\t Dia: " << dia << endl;
    cout << "\t Mes: " << mes << endl;
}