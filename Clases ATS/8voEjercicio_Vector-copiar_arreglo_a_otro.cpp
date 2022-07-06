/* 8voEjercicio de Vectores

Hacer un programa que lea 5# en un arreglo, los copie
a otro arreglo multiplicados por 2 y muestre el segundo
arreglo.
*/

#include <iostream>

using namespace std;

int main(){
	
	int v1[]={1,2,3,2,1};
	int v2[5],i;
	
	for(i=0;i<5;i++){
		v2[i]=v1[i]*2;
	}
	
	cout<<"[";
	for(i=0;i<5;i++){
		cout<<" "<<v2[i]<<" ";
	}
	cout<<"]";
	
	
	system("pause>nul");
	return 0;
}
