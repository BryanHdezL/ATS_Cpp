//Ejercicio #10.

/***********************************************************************
Escriba una funcion nombrada calc_años() que tenga un parametro entero
que represente el numero total de dias desde la fecha 1/1/2000 y
parametros de referencia nombradas año, mes, dia. La funcion es calcular
el año, mes y dia actual para el numero dado de dias que se le
transmitan. Isando las referencias, la funcion debera alterar en forma
directa los argumentos respectivos en la funcion que llama. Para este
problema suponga que cada año tiene 365 dias y cada mes tiene 30 dias.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void calcYears(int, int&, int&, int&);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int days, year = 2000, month = 1, day = 1;
    //Solicitar datos al usuario.
    cout<<"Dias: ";
    cin >> days;
    //Acciones del programa.
    calcYears(days, year, month, day);
    cout << "\t Fecha actual: " << day << "/" << month << "/" << year;
    return 0;
}

//Funcion caculadora de años.
void calcYears(int days, int& year, int& month, int& day){
    year += days / 365;
    days -= ((year - 2000) * 365);
    month += days / 30;
    days -= ((month - 1) * 30);
    day += days;
}