//Ejercicio #5.

/****************************************************************
Hacer 2 estructuras una llamada promedio que tendra los
sigueintes campos: nota1, nota2, nota3; y otra llamada alumno
que tendra los sigueintes miembros: nombre, sexo, edad.
Hacer que la estructura alumno, luego pedir todos los datos para
un alumno, luego calcular su promedio, y por ultimo imprimir 
todos sus datos incluidos el promedio.
****************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Estructura promedios.
struct promedio {
    float nota1, nota2, nota3;
};

//Estructura alumnos.
struct alumno {
    char nombre[20];
    char sexo[10];
    int edad;
    struct promedio prom;
}alumno1;

//Funcion principal.
int main(){
    // Variables de la funcion.
    float promedio;
    // Solicitando datos al usuario.
    //Datos personales.
    cout << "Digite los siguientes datos:" << endl;
    cout << "\t - Nombre: ";
    cin.getline(alumno1.nombre, 20, '\n');
    fflush(stdin);
    cout << "\t - Sexo: ";
    cin.getline(alumno1.sexo, 20, '\n');
    fflush(stdin);
    cout << "\t - Edad: ";
    cin >> alumno1.edad;
    fflush(stdin);
    //Notas del alumno.
    cout << "\nDigite los valores de las diferentes notas: " << endl;
    cout << "\t - Nota #1: ";
    cin >> alumno1.prom.nota1;
    cout << "\t - Nota #2: ";
    cin >> alumno1.prom.nota2;
    cout << "\t - Nota #3: ";
    cin >> alumno1.prom.nota3;
    //Realizando el calculo del promedio de las notas capturadas.
    promedio = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;
    // Mostrar resultados en consola.
    cout << "\n * Resultados: *" << endl;
    cout << "\t - Nombre: " << alumno1.nombre << endl;
    cout << "\t - Sexo: " << alumno1.sexo << endl;
    cout << "\t - Edad: " << alumno1.edad << endl;
    cout << "\t - Promedio: " << promedio << endl;
    return 0;
}