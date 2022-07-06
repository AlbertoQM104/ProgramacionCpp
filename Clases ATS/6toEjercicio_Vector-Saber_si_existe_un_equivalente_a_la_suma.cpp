/* 6toEjercicio de Vectores

Escribe un programa que defina un vector de 
numeros y calcule si existe algun numero en el vector
cuyo valor equivale a la suma del resto de numeros
del vector.
*/

#include <iostream>

using namespace std;

int main(){
	
	int v[100];
	int i,num,sum=0,max=0;
	
	cout<<"Ingrese la cantidad del vector: ";
	cin>>num;
	cout<<"-------------------------------------------\n";
	
	for(i=0;i<num;i++){
		cout<<"Ingrese un numero: ";
		cin>>v[i];
		
		sum += v[i];
		if(v[i]>max){
			max=v[i];
		}
		
	}
	
	if(max==sum-max){
		cout<<"-------------------------------------------\n";
		cout<<"Se pudo encontrar equivalente --> "<<max;
	}else{
		cout<<"-------------------------------------------\n";
		cout<<"No se encontro equivalente.";
	}
	
	
	
	
	system("pause>nul");
	return 0;
}
