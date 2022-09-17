//Ejercicio #9.

/***********************************************************************
Escriba una funcion nombrada tiempo() que tengan un parametro en
numero entero llamado totalSeg y tres parametros de referencia enteros
nombrados horas, min y seg. La funcion es convertir el numero de 
segundos transmitido en un numero equivalente de horas, minutos y
segundos.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void tiempo(int, int&, int&, int&);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int totalSeg, horas, min, seg;
    //Solicitar datos al usuario.
    cout << "totalSeg: ";
    cin >> totalSeg;
    //Acciones del programa.
    tiempo(totalSeg, horas, min, seg);
    cout << "\t- Horas: \t" << horas << endl;
    cout << "\t- Minutos: \t" << min << endl;
    cout << "\t- Segundos: \t" << seg << endl;
    return 0;
}

//Funcion de tiempo.
void tiempo(int totalSeg, int& horas, int& min, int& seg){
    horas = totalSeg / 3600;
    totalSeg -= horas * 3600;
    min = totalSeg / 60;
    totalSeg -= min * 60;
    seg = totalSeg;
}