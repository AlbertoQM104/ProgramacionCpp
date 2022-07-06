/* 2doEjercicio de Vectores

Escribe un programa que defina un vertor
de numeros y calcule la multiplicacion acumulada 
de sus elementos.
*/

#include <iostream>

using namespace std;

int main(){
	
	int v[]={2,4,6,8};
	int i,mult=1;
	
	for(i=0;i<4;i++){
		mult *= v[i];
	}
	
	cout<<"El resultado es: "<<mult;
	
	
	system("pause>nul");
	return 0;
}


