//Ejercicio #4.

/****************************************************************
Hacer un arreglo de estructura llamada atleta para N atletas que
contengan los siguientes campos: nombre, pais, numero_medallas.
Devuelva los datos (Nombre, pais) del atleta que ha ganado el
mayor numero de medallas.
****************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Estructura Atletas.
struct atletas{
    char nombre[20];
    char pais[20];
    int numMedallas;
}atleta[100];

//Funcion principal.
int main(){
    //Variables de la funcion.
    int numAtletas, mayor, medallas = 0;
    //Solicitando datos al usuario.
    cout << "Digite la cantidad de atletas a registrar: ";
    cin >> numAtletas;
    cout << "\nCapure los datos de los atletas: \n" << endl;
    for (int i = 0; i < numAtletas; i++){
        fflush(stdin);
        cout << " * Atleta #" << i + 1 << " *\n" << endl;
        cout << "\t - Nombre: ";
        cin.getline(atleta[i].nombre, 20, '\n');
        fflush(stdin);
        cout << "\t - Pais: ";
        cin.getline(atleta[i].pais, 20, '\n');
        fflush(stdin);
        cout << "\t - Medallas: ";
        cin >> atleta[i].numMedallas;
        cout << "\n";
        //Obteniendo al atleta con mas numeros de medallas.
        if (atleta[i].numMedallas > medallas){
            medallas = atleta[i].numMedallas;
            mayor = i;
        }
    }
    //  Mostrar resultados en consola.
    cout << " Resultados: " << endl;
    cout << "\n Atleta con mayor numero de medallas -> Atleta #" << mayor + 1 << endl;
    cout << "\t - Nombre: " << atleta[mayor].nombre << endl;
    cout << "\t - Pais: " << atleta[mayor].pais << endl;
    return 0;
}