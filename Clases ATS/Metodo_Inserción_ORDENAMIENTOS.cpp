/*Método Inserción

*/

#include <iostream>

using namespace std;

int main(){
	
	int v[100];
	int i,pos,aux,num;
	
	cout<<"Ingrese la cantidad de elementos del vector: ";
	cin>>num;
	cout<<"------------------------------------------------\n";
	
	for(i=0;i<num;i++){
		cout<<"Ingrese un valor: ";
		cin>>v[i];
			
	}
	cout<<"------------------------------------------------\n";
	
	//Algoritmo del ordenamiento por insercion
	for(i=0;i<num;i++){
		pos = i;
		aux = v[i];
		
		while((pos>0) && (v[pos-1]>aux)){
			
			v[pos] = v[pos-1];
			pos--;
		}
		
		v[pos] = aux;
	}
	
	cout<<"Vector Ordenado por Insercion: \n";
	
	for(i=0;i<num;i++){
		cout<<v[i]<<endl;
		
	}
	
	
	
	
	
	system("pause>nul");
	return 0;
}
