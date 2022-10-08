// Librerias.
#include <bits/stdc++.h>

#include "SerVivo.h"
using namespace std;

// Declaracion de la clase.
class Planta : public SerVivo {
    public:
        // Constructor
        Planta() {
        }
        // Destructor
        ~Planta() {
        }
        // Metodo para mostrar el alimento
        void alimentarse() {
            cout << "\t - Las plantas se alimentan por fotosintesis." << endl;
        }
};