/* 4toEjercicio de Vectores

Escribe un programa que defina un vector de 
numeros y muestre en la salida estandar el
vector en orden inverso - del ultimo al primer elemento.

*/

#include <iostream>

using namespace std;

int main(){
	
	int v[100];
	int i,n;
	
	cout<<"Ingrese la cantidad del vector: ";
	cin>>n;
	cout<<"-----------------------------------\n";
	
	for(i=0;i<n;i++){
		cout<<"Ingrese el elemento "<<i+1<<": ";
		cin>>v[i];
		
	}
	
	cout<<"-----------------------------------\n";
	
	for(i=n-1;i>=0;i--){
		cout<<"- V["<<i<<"] : "<<v[i]<<endl;
		
	}
	
	
	system("pause>nul");
	return 0;
}

