// Ejercicio #6.

/****************************************************************
Utilizar las 2 estucturas del problema 5, pero ahora pedir los
datos para N alumnos, y calcular cual de todos tienen el mejor
promedio.
****************************************************************/

// Librerias.
#include <iostream>
using namespace std;

// Estructura promedios.
struct promedio {
    float nota1, nota2, nota3;
};

// Estructura alumnos.
struct alumno {
    char nombre[20];
    char sexo[10];
    int edad;
    struct promedio prom;
} alumnos[100];

// Funcion principal.
int main() {
    // Variables de la funcion.
    int numAlumnos;
    float promedio, mejor = 0;
    int posMejor;
    // Solicitando datos al usuario.
    // Cantidad de alumnos a registrar.
    cout << "Digite el numero de alumnos a registrar: ";
    cin >> numAlumnos;
    // Datos personales.
    cout << "\nDigite los siguientes datos:" << endl;
    for (int i = 0; i < numAlumnos; i++) {
        fflush(stdin);
        cout << "\n * Alumno #" << i + 1 << " *\n"
             << endl;
        cout << "\t - Nombre: ";
        cin.getline(alumnos[i].nombre, 20, '\n');
        fflush(stdin);
        cout << "\t - Sexo: ";
        cin.getline(alumnos[i].sexo, 20, '\n');
        fflush(stdin);
        cout << "\t - Edad: ";
        cin >> alumnos[i].edad;
        fflush(stdin);
        // Notas del alumno.
        cout << "\nDigite los valores de las diferentes notas: " << endl;
        cout << "\t - Nota #1: ";
        cin >> alumnos[i].prom.nota1;
        cout << "\t - Nota #2: ";
        cin >> alumnos[i].prom.nota2;
        cout << "\t - Nota #3: ";
        cin >> alumnos[i].prom.nota3;
        // Obteniendo el mejor promedio.
        promedio = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;
        if (promedio > mejor) {
            mejor = promedio;
            posMejor = i;
        }
    }
    // Mostrar resultados en consola.
    cout << "\n * Resultados: *" << endl;
    cout << "\t - Nombre: " << alumnos[posMejor].nombre << endl;
    cout << "\t - Sexo: " << alumnos[posMejor].sexo << endl;
    cout << "\t - Edad: " << alumnos[posMejor].edad << endl;
    cout << "\t - Promedio: " << mejor << endl;
    return 0;
}