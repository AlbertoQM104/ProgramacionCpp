/* 3erEjercicio de Vectores

Escribe un programa que lea de la entrada
estandar un vector de numeros y muestre 
en la salida estandar los numeros del vector
con sus indices asociados.

*/

#include <iostream>

using namespace std;

int main(){
	
	int v[100];
	int i,num;
	
	cout<<"Ingrese la cantidad del vector: ";
	cin>>num;
	
	
	for(i=0;i<num;i++){
		
		cout<<"Digite un numero: ";
		cin>>v[i]; //se guarda en cada vector
		
	}
	
	cout<<"-------------------------------\n";
	//mostrar elementos
	
	for(i=0;i<num;i++){
		
		cout<<"- V["<<i<<"] :"<<v[i]<<endl;
		
	}
	
	
	system("pause>nul");
	return 0;
}

