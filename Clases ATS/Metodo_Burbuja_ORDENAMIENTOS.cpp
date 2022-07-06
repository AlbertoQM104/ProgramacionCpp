/*Método Burbuja

*/


#include <iostream>

using namespace std;

int main(){
	
	int num[100];
	int i,j,aux=0,val=0;
	
	cout<<"Ingrese la cantidad de valores que tendra el vector: ";
	cin>>val;
	for(i=0;i<val;i++){
	cout<<"Ingrese un valor: ";
	cin>>num[i];
	}
	
	cout<<"-------------------------------------------------------\n";
	
	//algoritmo del metodo burbuja
	for(i=0;i<val;i++){
		for(j=0;j<val-1;j++){ //ojo con el 2do for - (valor-1)
			if(num[j] > num[j+1]){
				aux     = num[j];
				num[j]  = num[j+1];
				num[j+1]= aux;
			}
			
		}
		
	}
	
	
	cout<<"Orden Ascendente: \n";
	for(i=0;i<val;i++){
		cout<<num[i]<<endl;
	}
	
	
	
	return 0;
}

