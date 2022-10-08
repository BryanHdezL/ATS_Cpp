//Ejercicio 7.

//Librerias.
#include <bits/stdc++.h>
#include "Alumno.h"
#include "Deportista.h"
#include "BecadoDeporte.h"
using namespace std;

/***********************************************************************
Considere la siguiente relacion de herencia, la cual involucra tres 
clases: Alumno, Deportista y BecadoDeporte.
Esta ultima representa a aquellos alumnos que son deportistas y que por 
esa razon han recibido una beca especial del gobierno para premiar sus 
esfuerzos.
Decida que atributos y metodos incrluir de tal manera que su programa 
puede:
    a) Declarar dos objetos llamados "alumnoJuan" y "alumnoPedro" de 
        tipo Alumno.
    b) Declarar un objeto llamado "deportLuis" de tipo Deportista.
    c) Declarar dos objetos llamados "bdAna" y "bdCarmen" de tipo 
        BecadoDeporte.
    d) Imprimir los datos de todos los objetos declarados.
    e) Actualizar el nombre de la carrera que estan estudiando 
        alumnoJuan y bdAna. El dato dado por el usuario sera el nombre 
        de la nueva carrera.
    f) Actualizar el nombre del entrenador de deportLuis y bdCarmen.
        El dato dado por el usuario sera el nombre del nuevo entrenador.
    g) Actualizar el monto de la beca de bdAna y bdCarmen. El dato dado 
        por el usuario sera el porcentaje de incremento de la beca 
        actual.
***********************************************************************/

//Funcion principal.
int main(){
    //Variables extra de la funcion.
    string nombreAnterior, nombreNuevo;
    float montoAnterior, montoNuevo;
    //Acciones del programa.

    //Declarar objetos de tipo Alumno.
    Alumno* alumnoJuan = new Alumno("Sistemas");
    Alumno* alumnoPedro = new Alumno("Mecatronica");

    // Declarra objeto de tipo Deportista.
    Deportista* deportLuis = new Deportista("Brandon");

    // Declarar objetos de tipo BecadoDeporte.
    BecadoDeporte* bdAna = new BecadoDeporte("IA", "Ricardo", 1200);
    BecadoDeporte* bdCarmen = new BecadoDeporte("Arquitectura", "Sandy", 1350);

    // Imprimir datos de los objetos.
    alumnoJuan->mostrarDatos();
    alumnoPedro->mostrarDatos();
    deportLuis->mostrarDatos();
    bdAna->mostrarDatos();
    bdCarmen->mostrarDatos();

    // Actualizar carreras
    cout << "\n * Actualizacion de Carreras de los Alumnos *" << endl;
    nombreAnterior = alumnoJuan->getNombreCarrera();
    cout << "\t + Nuevo carrera: ";
    fflush(stdin);
    getline(cin, nombreNuevo);
    alumnoJuan->setNombreCarrera(nombreNuevo);
    cout << "\t - Nombre de la anterior carrera de Juan: " << nombreAnterior << endl;
    cout << "\t - Nombre de la nueva carrera de Juan: " << alumnoJuan->getNombreCarrera() << endl;
    cout << "\n * Actualizacion de Carreras de los alumnos *" << endl;
    nombreAnterior = bdAna->getNombreCarrera();
    cout << "\t + Nuevo carrera: ";
    fflush(stdin);
    getline(cin, nombreNuevo);
    bdAna->setNombreCarrera(nombreNuevo);
    cout << "\t - Nombre de la anterior carrera de Ana: " << nombreAnterior << endl;
    cout << "\t - Nombre de la nueva carrera de Ana: " << bdAna->getNombreCarrera() << endl;

    // Actualizar entrenador 
    cout << "\n * Actualizacion de Entrenador de los deportista *" << endl;
    nombreAnterior = deportLuis->getNombreEntrenador();
    cout << "\t + Nuevo entrenador: ";
    fflush(stdin);
    getline(cin, nombreNuevo);
    deportLuis->setNombreEntrenador(nombreNuevo);
    cout << "\t - Nombre del entrenador de Luis: " << nombreAnterior << endl;
    cout << "\t - Nombre del nuevo entranador de Luis: " << deportLuis->getNombreEntrenador() << endl;
    cout << "\n * Actualizacion de Entrenador de los deportista *" << endl;
    nombreAnterior = bdCarmen->getNombreEntrenador();
    cout << "\t + Nuevo entrenador: ";
    fflush(stdin);
    getline(cin, nombreNuevo);
    bdCarmen->setNombreEntrenador(nombreNuevo);
    cout << "\t - Nombre del entrenador de Carmen: " << nombreAnterior << endl;
    cout << "\t - Nombre del nuevo entranador de Carmen: " << bdCarmen->getNombreEntrenador() << endl;

    // Actualizar monto Beca
    cout << "\n * Actualizacion de la Beca de los becados *" << endl;
    montoAnterior = bdAna->getMontoBeca();
    cout << "\t + Incremento del monto de la beca (%): ";
    cin >> montoNuevo;
    bdAna->setMontoBeca(montoNuevo/100);
    cout << "\t - Monto anterior de la beca de Ana: " << montoAnterior << endl;
    cout << "\t - Monto nuevo de la beca de Ana: " << bdAna->getMontoBeca() << endl;
    cout << "\n * Actualizacion de la Beca de los becados *" << endl;
    montoAnterior = bdCarmen->getMontoBeca();
    cout << "\t + Incremento del monto de la beca (%): ";
    cin >> montoNuevo;
    bdCarmen->setMontoBeca(montoNuevo/100);
    cout << "\t - Monto anterior de la beca de Carmen: " << montoAnterior << endl;
    cout << "\t - Monto nuevo de la beca de Carmen: " << bdCarmen->getMontoBeca() << endl;

    //Destruimos los objetos.
    cout << endl;
    delete alumnoJuan;
    delete alumnoPedro;
    delete deportLuis;
    delete bdAna;
    delete bdCarmen;
    //Fin del programa.
    return 0;
}