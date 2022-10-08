//Librerias.
#include <bits/stdc++.h>
#include "Alumno.h"
#include "Deportista.h"
using namespace std;

//Declaracion de la clase.
class BecadoDeporte : public Alumno, public Deportista{
    private:
        float montoBeca;
    public:
        //Constructor
        BecadoDeporte(string nombreCarrera, string nombreEntrenador, float montoBeca) : Alumno(nombreCarrera), Deportista(nombreEntrenador){
            this->montoBeca = montoBeca;
        }
        //Constructor
        ~BecadoDeporte(){

        }
        //Mostramos los datos del Becado
        void mostrarDatos(){
            cout << "\n * Datos Becado *" << endl;
            cout << "\t - Carrera: " << getNombreCarrera() << endl;
            cout << "\t - Entrenador: " << getNombreEntrenador() << endl;
            cout << "\t - Monto de la Beca: " << montoBeca << endl;
        }
        //Establecemos el valor de la beca.
        void setMontoBeca(float nuevoMontoBeca){
            this->montoBeca = (montoBeca * (1.0 + nuevoMontoBeca));
        }
        //Obtenemos el nombre del Entrenador.
        float getMontoBeca(){
            return montoBeca;
        }
};