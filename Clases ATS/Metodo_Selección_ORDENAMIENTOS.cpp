/*Método Selección

*/

#include <iostream>

using namespace std;

int main(){
	
	int v[100];
	int i,j,aux,min=0,cant;
	
	cout<<"Ingrese cantidad de valores al vector: ";
	cin>>cant;
	cout<<"---------------------------------------------\n";
	
	for(i=0;i<cant;i++){
		cout<<"Ingrese un numero: ";
		cin>>v[i];
	}
	
	cout<<"---------------------------------------------\n";
	cout<<"Mostrar sin ordenar: \n";
	
	for(i=0;i<cant;i++){
		cout<<v[i]<<endl;
	}
	
	cout<<"---------------------------------------------\n";
	cout<<"Ordenado de forma Seleccion: \n";
	
	for(i=0;i<cant;i++){
		min = i;
		
		for(j=i+1;j<cant;j++){
			if(v[j]<v[min]){
				min = j;	
			}							
		}
		
		aux = v[i];
			v[i] = v[min];
		v[min] = aux;
	}
	
	
	//mostrar el orden selección
	for(i=0;i<cant;i++){
		cout<<v[i]<<endl;
	}
	
	
	
	
	
	system("pause>nul");
	return 0;
}
