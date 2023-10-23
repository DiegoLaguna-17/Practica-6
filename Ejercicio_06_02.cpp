// Materia: Programación I, Paralelo 4

// Autor: Diego Mateo Laguna Levy

// Fecha creación: 18/10/2023

// Fecha modificación: 18/10/2023

// Número de ejericio: 2

// Problema planteado:serie suma de digitos
#include <iostream>
using namespace std;
int sumd(int n);
int serie(int);
int main (){
	int a,i;
	cin>>a;
	for(i=1;i<=a;i++)
		cout<<serie(i)<<",";
}
int serie(int a){//funcion recursiva para hallar la serie de la suma de digitos
	if(a==1 || a==2)
		return 1;		
	else 
		
		return sumd(serie(a-1))+serie(a-1);	
}

int sumd(int n){
	if(n==0)
		n=0;
	else 
		
		return (n%10+sumd(n/10));
}
