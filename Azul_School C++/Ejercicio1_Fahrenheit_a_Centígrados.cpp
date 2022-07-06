/*
Escriba un programa en C++ que convierta una temperatura de 86 grados
Fahrenheit a su equivalente en grados centígrados.
La fórmula para convertir es grados F a grados C es la siguiente:
	(5/9)*(Fahrenheit - 32)
*/

# include <iostream>

using namespace std;

int main(){
	
	float val1 = 86;
	double resultado;
	
	resultado = (5.0 / 9) * (val1 - 32) ;
	
	cout<<"El resultado de la conversion de 86 GF a GC es: "<<resultado<<endl;
	
	
	
	return 0;
}
