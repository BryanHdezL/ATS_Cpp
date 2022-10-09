//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Delcracion de la plantilla.
template <class T>
class Materia{
    private:
        string nombreMateria;
        int clave;
        T calificacion;
    public:
        //Constructor
        Materia(string nombreMateria, int clave, T calificacion){
            this->nombreMateria = nombreMateria;
            this->clave = clave;
            this->calificacion = calificacion;
        }
        //Desstructor
        ~Materia(){

        }
        //Mostramos los datos
        void mostrarDatos(){
            cout << "\n * Mostramos los Datos *" << endl;
            cout << "\t - Nombre Materia: " << nombreMateria << endl;
            cout << "\t - Clave: " << clave << endl;
            cout << "\t - Calificacion: " << calificacion << endl;
        }
        //Establecemos el valor de la calificacion
        void setCalificacion(T nuevaCalificacion){
            this->calificacion = nuevaCalificacion;
        }
        //Obtenemos el valor de la calificacion.
        T getCalificacion(){
            return calificacion;
        }
};