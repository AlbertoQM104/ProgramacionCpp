// Se mostrará la procedencia de los operadores

#include <iostream>

using namespace std;

int main(){
	
	int val1 = 5;
	int val2 = 2;
	int val3 = 7;
	int resultado = 0;
	
	// aplica primero la múltiplicación
	resultado = val1 * val2 + val3;
	
	cout<<"El valor de resultado es "<<resultado<<"."<<endl;
	
	// aplica primero la suma
	resultado = val1 * (val2 + val3);
	
	cout<<"El valor de resultado es "<<resultado<<"."<<endl;
	
	
	
	return 0;
}





