// Materia: Programación I, Paralelo 4

// Autor: Diego Mateo Laguna Levy

// Fecha creación: 18/10/2023

// Fecha modificación: 18/10/2023

// Número de ejericio: 8

// Problema planteado: verificar si una palabra es simetrica o palindroma
#include <iostream>
using namespace std;
bool palin (string, int,int);
int main ()
{
    int i;
    string p;
    cout << "ingresa una palabra" << endl;
    cin>>p;
    i=p.length();
    if(palin(p,i-1,0)){
        cout<<"la palabra es palindroma"<<endl;
    }
    else
    cout<<"la palabra no es palindroma"<<endl;
    return 0;
}
bool palin(string p, int i,int j){//funcion recursiva para comparar las letras de la palabra
    if(j>=i)
        return true;
    if(p[i]==p[j]){
        return palin(p,i-1,j+1);
    }
    return false;
}
