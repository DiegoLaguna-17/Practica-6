// Materia: Programaci�n I, Paralelo 4

// Autor: Diego Mateo Laguna Levy

// Fecha creaci�n: 19/10/2023

// Fecha modificaci�n: 19/10/2023

// N�mero de ejericio: 9

// Problema planteado: coeficiente binomial
#include <iostream>
using namespace std;
int fac(int);
int main ()
{
    int n,m;
    cout << "ingresa dos numeros"<< endl;
    cin>>n>>m;
   cout<<"El coeficiente binomial es "<<(fac(n))/(fac(m)*fac(n-m));
    return 0;
}
int fac(int a){//funcion recursiva paara hallar el factorial de un numero
    if(a==1)
        return 1;
    else
        return a*fac(a-1);
}
