// Materia: Programación I, Paralelo 4

// Autor: Diego Mateo Laguna Levy

// Fecha creación: 17/10/2023

// Fecha modificación: 17/10/2023

// Número de ejericio: 3

// Problema planteado: suma de los componentes de un vector
#include <iostream>
using namespace std;
int suma_recursiva(int n,int v[],int j);
int main()
{
    int n;
    cout<<"Ingresa la cantidad de terminos de su vector"<<endl;
    cin>>n;
    int v[n];
    int in=0;
    for(int i=0;i<n;i++){
        cout<<"Ingresa el termino "<<i<<endl;
        cin>>v[i];
    }
    cout<<endl;
    cout<<"La suma es "<<suma_recursiva(n,v,in);
    return 0;
}
int suma_recursiva(int n,int v[],int j){//funcion recursiva para sumar los terminos de un vector
    if (n==j)
        return 0;
    else
        return v[j]+suma_recursiva(n,v,j+1);       
}
