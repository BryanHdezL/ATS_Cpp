//Ejercicio #18.

/***********************************************************************
Escriba una funcion en C++ llamada mayor() que devuelva la fecha mas
reciente de cualquier par de fechas que se le transmitan. Por ejemplo,
si se transmiten las fechas 10/9/2005 y 11/3/2015 a mayor(), sera 
devuelta la segunda fecha.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void leerFechas();
struct Fecha mayor(Fecha, Fecha);
void mostrar(Fecha);

// Estructura.
struct Fecha{
    int day;
    int month;
    int year;
}date1, date2;

//Funcion principal.
int main(){
    //Variables de la funcion.
    Fecha mayorFecha;
    //Solicitar datos al usuario.
    leerFechas();
    //Acciones del programa.
    mayorFecha = mayor(date1,date2);
    mostrar(mayorFecha);
    return 0;
}

//Funcion para mostrar la fecha mayor.
void mostrar(Fecha f){
    cout << "Fecha mayor: " << f.day << "/" << f.month << "/" << f.year << endl;
}

//Funcion que comprobara que fecha es mayor.
struct Fecha mayor(Fecha d1, Fecha d2){
    while(-1){
        if(d1.year == d2.year){
            //Si los años son iguales, analizamos los meses.
            if(d1.month == d2.month){
                //Si los meses son iguales, analizamos los dias
                if(d1.day == d2.month){
                    return d1;
                }
            }else if(d1.month > d2.month){
                return d1;
            }else{
                return d2;
            }
        }else if(d1.year > d2.year){
            return d1;
        }else{
            return d2;
        }
    }
}

    // Funcion para leer el contenido de la estructura Fecha.
    void leerFechas() {
    cout << "Capture los datos de la primer fecha" << endl;
    cout << " - Day: ";
    cin >> date1.day;
    cout<<" - Month: ";
    cin >> date1.month;
    cout<<" - Year: ";
    cin >> date1.year;
    cout << "Capture los datos de la segunda fecha" << endl;
    cout << " - Day: ";
    cin >> date2.day;
    cout<<" - Month: ";
    cin >> date2.month;
    cout<<" - Year: ";
    cin >> date2.year;
}