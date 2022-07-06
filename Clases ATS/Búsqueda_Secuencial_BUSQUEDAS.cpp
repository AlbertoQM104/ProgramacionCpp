/*Busqueda Secuencial

*/

#include <iostream>

using namespace std;

int main(){
	
	int v[100];
	int i,dat,cant,f=0;
	
	cout<<"Ingrese la cantidad del vector: ";
	cin>>cant;
	cout<<"-----------------------------------------------\n";
	
	for(i=0;i<cant;i++){
		cout<<"Ingrese un numero: ";
		cin>>v[i];	
		
	}
		
	cout<<"-----------------------------------------------\n";
	cout<<"Ingrese numero a ser buscado: ";
	cin>>dat;
	cout<<"-----------------------------------------------\n";
	
	for(i=0;i<cant;i++){
		if( v[i] == dat){
			f=1;
		}
		
	}
	
	if(f == 1){
		cout<<"Se pudo encontrar el valor ["<<dat<<"] en el vector!";
	}else {
		cout<<"No se pudo encontrar el valor ["<<dat<<"] en el vector.";
	}
	
	
	system("pause>nul");
	return 0;
}





