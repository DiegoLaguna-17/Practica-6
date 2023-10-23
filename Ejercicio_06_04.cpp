// Materia: Programación I, Paralelo 4

// Autor: Diego Mateo Laguna Levy

// Fecha creación: 17/10/2023

// Fecha modificación: 17/10/2023

// Número de ejericio: 4

// Problema planteado: dar vuelta a una cadena
#include<iostream>
using namespace std;
string palve(string,int,int);
int main (){
	string p;
	int i,j=0;
	cout<<"Ingrese una palabra"<<endl;
	cin>>p;
	i=p.length();
	cout<<"la palabra ingresada dada vuelta es: "<<palve(p,i,j);
}
string palve(string p, int i, int j){//funcion recursiva para dar ka vuelta a la cadena
	char a;
	if(j>=i-1)
		return p;
	else {
		a=p[i-1];
		p[i-1]=p[j];
		p[j]=a;
		return palve(p,i-1,j+1);
	}
}
