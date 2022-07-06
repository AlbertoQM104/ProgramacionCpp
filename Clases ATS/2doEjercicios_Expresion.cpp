//2doEjercio_Expresion
#include <iostream>

using namespace std;

int main(){
	float a,b,c,d, result=0;
	
	cout<<"Ingrese valor de a: ";
	cin>> a;
	cout<<"Ingrese valor de b: ";
	cin>> b;
	cout<<"Ingrese valor de c: ";
	cin>> c;
	cout<<"Ingrese valor de d: ";
	cin>> d;
	
	result= (a+b)/(c+d);
	cout.precision(3);
	
	cout<<"-----------------------------------\n";
	cout<<"Resultado:\n";
	cout<<"(a+b)/(c+d) : "<<result;
	
	
	return 0;
}
