//5toEjercicio_Expresion
#include <iostream>

using namespace std;

int main(){
	float a,b,aux=0;
	
	cout<<"Ingrese el 1er valor: ";
	cin>> a;
	cout<<"Ingrese el 2do valor: ";
	cin>> b;
	
	aux=a;
	a=b;
	b=aux;
	
	cout<<"----------------------------------\n";
	cout<<"El 1er valor es: "<<a;
	cout<<"\nEl 2do valor es: "<<b;
	
	
	return 0;
}


