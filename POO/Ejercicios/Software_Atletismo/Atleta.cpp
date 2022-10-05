//Ejercicio 5.

/***********************************************************************
Construir un programa para una competencia de atletismo, el programa 
debe gestionar una serie de atletas caracterizados por su numero de 
atleta, nombre y tiempo de carrera, al final el programa debe mostrar 
los datos del atleta ganador de la carrera.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
#include "Atleta.h"
using namespace std;

//Funcion principal.
int main(){
    //Variables de la funcion.
    Atleta* atletas;    //Vector de objetos.
    int numAtletas, numeroAtleta, indiceMenor;
    string nombreAtleta;
    float tiempoCarrera;
    //Acciones del programa.
    //Solicitamos el numero de atletas a registrar.
    cout << "No. de atletas: ";
    cin >> numAtletas;
    atletas = new Atleta[numAtletas];   //Declaramos el arreglo de objetos
    //Rellenamos el arreglo de objetos.
    for (int i = 0; i < numAtletas; i++){
        cout << "\n * Atributos del atleta *" << endl;
        cout << "\t - No. del atleta: ";
        cin >> numeroAtleta;
        fflush(stdin);
        cout << "\t - Nombre del atleta: ";
        getline(cin, nombreAtleta);
        cout << "\t - Tiempo de carrera del atleta: ";
        cin >> tiempoCarrera;
        //Inicializamos el objeto.
        atletas[i] = Atleta(numeroAtleta, nombreAtleta, tiempoCarrera);
    }
    //Obtenemos el indice del atleta con menor tiempo
    indiceMenor = Atleta::indiceMenor(atletas, numAtletas);
    //Mostramos los datos del atleta con el indice obtenido.
    (atletas + indiceMenor)->mostrarDatos();
    //Destruimos el objeto.
    delete[] atletas; 
    return 0;
}