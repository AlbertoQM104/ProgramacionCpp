//10moEjercicio_Expresion
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float a,b,c,result1=0,result2=0;
	
	cout<<"Ingrese valor de a: ";cin>>a;
	cout<<"Ingrese valor de b: ";cin>>b;
	cout<<"Ingrese valor de c: ";cin>>c;
	
	result1= (-b+sqrt(pow(b,2)-(4*a*c)))/2*a;
	result2= (-b-sqrt(pow(b,2)-(4*a*c)))/2*a;
	
	cout<<"-------------------------------\n";
	cout<<"Resultado:\n";
	cout<<"1era Respuesta: "<<result1;
	cout<<"\n2da Respuesta: "<<result2;
	
	
	return 0;
}



