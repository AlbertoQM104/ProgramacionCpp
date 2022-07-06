/*
Escriba un programa en C++ que calcule la longitud de una circunferencia de
radio 15. La fórmula para hallar la longitud de la circunferencia es la siguiente:
L = 2 * PI * r, siendo 3.1416 el valor de PI y siendo "r" el radio de la circufenrencia
*/


#include <iostream>

using namespace std;

int main(){
	
	int r = 15;
	float PI = 3.1416, resultado;
	
	resultado = (2*PI)*r;
	
	cout<<"La longitud de la circunferencia con radio 15 es: "<<resultado<<endl;
	
	
	return 0;
}






