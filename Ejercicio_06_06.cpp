// Materia: Programaci�n I, Paralelo 4

// Autor: Diego Mateo Laguna Levy

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 18/10/2023

// N�mero de ejericio: 6

// Problema planteado: funcion de la sumatoria de n terminos al cuadrado
#include <iostream>
using namespace std;
int funcion(int);
int main()
{
    int n;
    cout<<"Ingrese la cantidad de t�rminos para la funcion"<<endl;
    cin>>n;
    cout<<"el resultado de la funcion es "<<funcion(n);

    return 0;
}
int funcion(int n){//funcion recuriva para hacer la funcion planteada
    if (n==1)
        return 1;
    else if(n==2)
        return 1+(n*n);
    else if(n>2)
        return (n*n)+funcion((n-1));
}
