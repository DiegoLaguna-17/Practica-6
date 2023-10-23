// Materia: Programación I, Paralelo 4

// Autor: Diego Mateo Laguna Levy

// Fecha creación: 17/10/2023

// Fecha modificación: 17/10/2023

// Número de ejericio: 5

// Problema planteado: comparar si dos vectores son iguales
#include <iostream>
using namespace std;
string vecig(int v1[], int v2[], int i, int n);
int main()
{
    int n,i;
    cout<<"Ingrese la cantidad de terminos que tendran los vectores"<<endl;
    cin>>n;
    int v1[n];
    int v2[n];
    for(i=0;i<n;i++){
        cout<<"Ingrese el término "<<i<<" del primer vector"<<endl;
        cin>>v1[i];
    }
    for(i=0;i<n;i++){
        cout<<"Ingrese el término "<<i<<" del segundo vector"<<endl;
        cin>>v2[i];
    }
    i=0;
    cout<<vecig(v1,v2,i,n);
    return 0;
}
string vecig(int v1[], int v2[], int i, int n){//funcion recursiva para comparar los componentes de los vectores
    if(i<n){
        if(v1[i]==v2[i]){
            cout<<"terminos en la posición "<<i<<" iguales"<<endl;
            return vecig(v1,v2,i+1,n);
        }
        else if(v1[i]!=v2[i]){
            cout<<"terminos en la posición "<<i<<" diferentes"<<endl;
            return vecig(v1,v2,i+1,n);
        }
    } 
}
