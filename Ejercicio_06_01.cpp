// Materia: Programaci�n I, Paralelo 4

// Autor: Diego Mateo Laguna Levy

// Fecha creaci�n: 17/10/2023

// Fecha modificaci�n: 17/10/2023

// N�mero de ejericio: 1

// Problema planteado: Algoritmo de euclides
#include <iostream>
using namespace std;
int mcd(int a, int b);
int main()
{
    int a,b;
    cout<<"ingresa dos numeros"<<endl;
    cin>>a>>b;
    cout<<"El mcd de "<<a<<" y "<<b<<" es "<<mcd(a,b);
    return 0;
}
int mcd(int a, int b)//funcion recursiva para el agoritmo de euclides
{
    if(a%b==0)
        return b;
    else if(a%b>0){
        mcd(b,(a%b));
    }
}
