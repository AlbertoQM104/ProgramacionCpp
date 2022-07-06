/*
Simula una calculadora. Su programa debe permitir al usuario introducir 2 n�meros de tipo double 
y un operador (+, -, * o /). Bas�ndose en las entradas, el programa deber� sumar, restar, multiplicar 
o dividir los n�meros introducidos.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	double nu1=0 , nu2=0, res=0 ;
	char op;
	string  opera;
	
	cout<<"----------------------Calculadora----------------------"<<endl;
	cout<<"Ingrese el 1er n�mero: ";
	cin>> nu1;
	cout<<"Ingrese el 2do n�mero: ";
	cin>>nu2;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<" Suma (+) "<<endl;
	cout<<" Resta (-) "<<endl;
	cout<<" Multiplicaci�n (*) "<<endl;
	cout<<" Divisi�n (/) "<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Ingrese la operaci�n a realizar ( + | - | * | /): ";
	cin>>op;
	cout<<"*******************************************************"<<endl<<endl;
	
	
	switch(op){
		case '+': 
		res = nu1 + nu2;
		opera = "Sumar";
		cout<<"Suma: "; break;
		
		case '-': 
		res = nu1 - nu2;
		opera = "Restar";
		cout<<"Resta: "; break;
		
		case '*': 
		res = nu1 * nu2;
		opera = "Multiplicar";
		cout<<"Multiplicaci�n: "; break;
		
		case '/': 
		res = nu1 / nu2;
		opera = "Dividir";
		cout<<"Divisi�n: "; break;
		
		default:
			cout<<" El n�mero ingresado no se encuentra dentro de la lista!"<<endl;	
			cout<<"--------------------------------------------------------";	
		
	}
	
	
	cout<<endl<<"El resultado de "<<opera<<" "<< nu1 <<" y "<< nu2<<" es: "<<res<<endl;
	
	
	
	
	
	
	
	return 0;
}
