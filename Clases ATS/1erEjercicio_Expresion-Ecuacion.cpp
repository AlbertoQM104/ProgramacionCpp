//1er Ejercicio - Expresiones
#include <iostream>

using namespace std;

int main(){
	float num1,num2,result=0;
	
	cout<<"Ingrese el valor de A: ";
	cin>> num1;
	cout<<"Ingrese el valor de B: ";
	cin>> num2;
	
	result=(num1/num2)+1;
	cout.precision(2); //ayuda a redondear
	
	cout<<"------------------------------\n";
	cout<<"Resultado de la ecuacion:\n";
	cout<<"(A/B)+1 = "<<result;	
	
	
	return 0;
}
