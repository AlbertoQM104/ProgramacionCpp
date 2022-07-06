//8voEjercicio_Expresion
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Ingrese Cateto mayor: ";
	cin>>a;
	cout<<"Ingrese Cateto menor: ";
	cin>>b;
	
	c=sqrt((a*a)+ (b*b));
	
	cout<<"----------------------------\n";
	cout<<"Resultado de la Hipotenusa: "<<c;
	
	
	
	return 0;
}
