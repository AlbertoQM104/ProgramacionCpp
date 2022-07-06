//7moEjercicio-Expresion
#include <iostream>

using namespace std;

int main(){
	float n1,n2,n3, nf;
	
	cout<<"Ingrese nota de Practicas[30%]: ";
	cin>> n1;
	cout<<"Ingrese nota Teorica[60%]: ";
	cin>> n2;
	cout<<"Ingrese nota de Participacion[10%]: ";
	cin>> n3;
	
	nf= (n1*0.3)+ (n2*0.6) + (n3*0.1);
	
	
	cout<<"-----------------------\n";
	cout<<"Resultado Nota Final: "<<nf;
	
	
	
	
	
	return 0;
}
