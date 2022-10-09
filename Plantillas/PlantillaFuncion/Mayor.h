//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Delcracion de la plantilla.
template <typename T1, typename T2>
T2 mayor(T1 dato1, T2 dato2){
    if (dato1 >= dato2){
        return dato1;
    }else{
        return dato2;
    }
}