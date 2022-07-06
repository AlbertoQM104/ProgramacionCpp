//3er Ejercicio_Expresion
#include <iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, result=0;
	
	cout<<"Ingrese el valor a: ";
	cin>> a;
	cout<<"Ingrese el valor b: ";
	cin>> b;
	cout<<"Ingrese el valor c: ";
	cin>> c;
	cout<<"Ingrese el valor d: ";
	cin>> d;
	cout<<"Ingrese el valor e: ";
	cin>> e;
	cout<<"Ingrese el valor f: ";
	cin>> f;
	
	result= (a+(b/c))/(d+(e/f));
	cout.precision(2);
	
	cout<<"----------------------------------\n";
	cout<<"Resultado: \n";
	cout<<"(a+(b/c)) / (d+(e/f)) : "<<result;
	
	
	
	
	return 0;
}


