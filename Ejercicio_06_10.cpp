// Materia: Programaci�n I, Paralelo 4

// Autor: Diego Mateo Laguna Levy

// Fecha creaci�n: 22/10/2023

// Fecha modificaci�n: 22/10/2023

// N�mero de ejericio: 10

// Problema planteado: conjetura ulam
#include <iostream>
using namespace std;
int ulam(int);
int main (){
	int a;
	cout<<"Ingresa un numero"<<endl;
	cin>>a;
	cout<<ulam(a);
}
int ulam (int a){//funcion recursiva para realizar la conjetura ulam
    if(a==2){
        return 1;
    }
	else if(a>2){
		if (a%2==0){
			cout<<a/2<<" ";
			return ulam(a/2);
		}
		else if(a%2!=0){
			cout<<(a*3)+1<<" ";
			return ulam((a*3)+1);
		}
	}	
}
