//Cadenas de caracteres.

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    //char palabra[] = "Bryan";
    char nombre[20];
    //cout << palabra << endl;
    cout<<"\n Digite su nombre: ";
    cin.getline(nombre,20,'\n');
    cout << nombre;
    return 0;
}