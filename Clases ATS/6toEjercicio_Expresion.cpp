//6toEjercicio_Expresion
#include <iostream>

using namespace std;

int main(){
	float n1,n2,n3,n4, media=0;
	
	cout<<"Ingrese nota 1: ";
	cin>> n1;
	cout<<"Ingrese nota 2: ";
	cin>> n2;
	cout<<"Ingrese nota 3: ";
	cin>> n3;
	cout<<"Ingrese nota 4: ";
	cin>> n4;
	
	media=(n1+n2+n3+n4)/4;
	cout.precision(2);
	
	cout<<"----------------------\n";
	cout<<"Resultado Promedio: "<<media;
	
	
	return 0;
}
