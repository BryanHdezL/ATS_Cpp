//Ejercicio #12.

/***********************************************************************
Defina una estructura que indique el timepo empleado por un ciclista en
recorrer una etapa. La estructura debe tener tres campos: hora, minutos
y segundos. Escriba un programa que dado 3 etapas calcule el tiempo 
total empleado en correr todas las etapas.

Nota: Usar punteros.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
void leer();
void suma();

//Estructura.
struct Tiempo{
    int hora;
    int minutos;
    int segundos;
} etapa[3], *punteroEtapa = etapa;

//Funcion principal.
int main(){
    //Solicitar datos al usuario.
    leer();
    //Acciones del programa.
    suma();
    return 0;
}

//Funcion para realizar la suma total del ciclista.
void suma(){
    int hor = 0, min = 0, seg = 0;
    //Suma entre etapas.
    for (int i = 0; i < 3; i++){
        hor += (punteroEtapa + i)->hora;
        min += (punteroEtapa + i)->minutos;
        if(min>=60){
            min -= 60;
            hor++;
        }
        seg += (punteroEtapa + i)->segundos;
        if(seg>=60){
            seg -= 60;
            min++;
        }
    }
    //Mostrar Resultados.
    cout << "\n Resultados: " << endl;
    cout << "\t Horas: " << hor << endl;
    cout << "\t Minutos: " << min << endl;
    cout << "\t Segundos: " << seg << endl;
}

//Funcion para leer el contenido de la estructura.
void leer(){
    for (int i = 0; i < 3; i++){
        cout << "Etapa #" << i + 1 << ":" << endl;
        cout << "\tHoras: ";
        cin >> (punteroEtapa + i)->hora;
        cout << "\tMinutos: ";
        cin >> (punteroEtapa + i)->minutos;
        cout << "\tSegundos: ";
        cin >> (punteroEtapa + i)->segundos;
    }
}