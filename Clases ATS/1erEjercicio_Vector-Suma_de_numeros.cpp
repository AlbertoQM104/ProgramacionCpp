/* 1erEjercicio de Vectores

Escribe un programa que defina un vertor
de numeros y calcule la suma de sus elementos.
*/


#include <iostream>

using namespace std;

int main(){
	
	int v[]={1,2,3,4,5};
	int i,sum=0;
	
	for (i=0;i<5;i++){
		
		sum += v[i];
		
	}
	
	cout<<"El resultado es : "<<sum;
	
	
	system("pause>nul");
	return 0;
}


