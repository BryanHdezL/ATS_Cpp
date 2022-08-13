//Ejercicio #7.

/****************************************************************
Defina una estructura que indique el tiempo empleado por una
ciclista en una etapa. La estructura dee tener tres campos: horas,
minutos y segundos.
Escriba un programa que dado N etapas calcula el tiempo total
empleado en correr todas las etapas
****************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Estructura etapa.
struct etapa {
    int horas;
    int minutos;
    int segundos;
}etapas[50];

//Funcion principal.
int main(){
    // Variables de la funcion.
    int numEtapas;
    int totalHoras = 0, totalMinutos = 0, totalSegundos = 0;
    // Solicitando datos al usuario.
    // Cantidad de alumnos a registrar.
    cout << "Digite la cantidad de etapas de la ciclista: ";
    cin >> numEtapas;
    // Datos de las etapas.
    for (int i = 0; i < numEtapas; i++){
        cout << "\n * Etapa #" << i + 1 << " *" << endl;
        cout << "\t - Horas: ";
        cin >> etapas[i].horas;
        cout << "\t - Minutos: ";
        cin >> etapas[i].minutos;
        cout << "\t - Segundos: ";
        cin >> etapas[i].segundos;
        //Realizando el calculo total de los tiempos.
        totalHoras += etapas[i].horas;
        totalMinutos += etapas[i].minutos;
        totalSegundos += etapas[i].segundos;
    }
    // Realizando reducciones de tienpos.
    while(totalSegundos>=60){
        totalMinutos++;
        totalSegundos -= 60;
    }
    while(totalMinutos>=60){
        totalHoras++;
        totalMinutos -= 60;
    }
    // Mostrar resultados en consola.
    cout << "\n Tiempo total empleado: " << endl;
    cout << "\t - Horas: " << totalHoras << endl;
    cout << "\t - Minutos: " << totalMinutos << endl;
    cout << "\t - Segundos: " << totalSegundos << endl;  
    return 0;
}