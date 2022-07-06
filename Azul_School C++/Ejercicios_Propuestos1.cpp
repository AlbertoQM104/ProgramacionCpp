/*
Escriba un programa con las siguientes expresiones como expresiones 
en C++ e imprima el resultado. Nota: Las variables a, b, c, d y f pueden 
inicializarse con cualquier valor.
*/

#include <iostream>

using namespace std;

int main(){
	
	float a = 10.0, b = 2.0, c = 3.0, d = 4.0, e = 10.0, f = 1.0;
	float r = 0;
	
	cout<<"--------------------------------------------------------------------------"<<endl;
	cout<<" a = 10.0  ||  b = 2.0 || c = 3.0  ||  d = 4.0  || e = 10.0  || f = 1.0"<<endl;
	cout<<"--------------------------------------------------------------------------"<<endl;
	
	//Expresión 1
	
	r = (a/b)+1;
	cout<<" R = (a/b) +1 "<<endl;
	cout<<"El valor de la expresion 1: "<<r<<endl;
	cout<<"--------------------------------------------------------------------------"<<endl;
	
	//Expresión 2
	
	r = (a+b)/(c+d);
	
	cout<<" R = (a+b)/(c+d) "<<endl;
	cout<<"El valor de la expresion 2: "<<r<<endl;
	cout<<"--------------------------------------------------------------------------"<<endl;
	
	//Expresión 3
	
	r = (a+(b/c))/(d+(e/f));
	
	cout<<" R = (a+(b/c))/(d+(e/f)) "<<endl;
	cout<<"El valor de la expresion 3: "<<r<<endl;
	cout<<"--------------------------------------------------------------------------"<<endl;
		
	//Expresión 4
	
	r = a + (b/(c-d));
	
	cout<<" R = a + (b/(c-d)) "<<endl;
	cout<<"El valor de la expresion 4: "<<r<<endl;
	cout<<"--------------------------------------------------------------------------"<<endl;
	
	
	return 0;
}















