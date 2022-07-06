/*
Simula una calculadora. Su programa debe permitir al usuario introducir 2 números de tipo double 
y un operador (+, -, * o /). Basándose en las entradas, el programa deberá sumar, restar, multiplicar 
o dividir los números introducidos.

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
	cout<<"Ingrese el 1er número: ";
	cin>> nu1;
	cout<<"Ingrese el 2do número: ";
	cin>>nu2;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<" Suma (+) "<<endl;
	cout<<" Resta (-) "<<endl;
	cout<<" Multiplicación (*) "<<endl;
	cout<<" División (/) "<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Ingrese la operación a realizar ( + | - | * | /): ";
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
		cout<<"Multiplicación: "; break;
		
		case '/': 
		res = nu1 / nu2;
		opera = "Dividir";
		cout<<"División: "; break;
		
		default:
			cout<<" El número ingresado no se encuentra dentro de la lista!"<<endl;	
			cout<<"--------------------------------------------------------";	
		
	}
	
	
	cout<<endl<<"El resultado de "<<opera<<" "<< nu1 <<" y "<< nu2<<" es: "<<res<<endl;
	
	
	
	
	
	
	
	return 0;
}
