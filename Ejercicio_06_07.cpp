// Materia: Programación I, Paralelo 4

// Autor: Diego Mateo Laguna Levy

// Fecha creación: 22/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 7

// Problema planteado: parejas de conejos
#include <iostream>
using namespace std;
int pcjs(int);
int main(){
    cout << "En un año habran en total " <<pcjs(12)<<" parejas de conejos"<<endl;
    return 0;
}
int pcjs(int m){
    if (m<=2) {
        return 1;
    } else {
        return pcjs(m-1)+pcjs(m - 2);
    }
}
