//4toEjercicio_Expresion
#include <iostream>

using namespace std;

int main(){
	float a,b,c,d, result=0;
	
	cout<<"Ingrese valor a: ";
	cin>> a;
	cout<<"Ingrese valor b: ";
	cin>> b;
	cout<<"Ingrese valor c: ";
	cin>> c;
	cout<<"Ingrese valor d: ";
	cin>> d;
	
	result= a + (b/(c-d));
	cout.precision(2);
	
	cout<<"-------------------------\n";
	cout<<"Resultado: \n";
	cout<<"a + (b/(c-d)) : "<<result;	
	
	
	return 0;
}
