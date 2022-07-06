/* Ejemplo11 Condicional IF

Crear un programa que lea tres números enteros por 
teclado y emita un mensaje indicando si están o no ordenados 
crecientemente. 

*/

#include <iostream>

using namespace std;

int main(){
	
	int n1,n2,n3;
	
	cout<<"Ingrese el 1er numero: ";
	cin>>n1;
	cout<<"Ingrese el 2do numero: ";
	cin>>n2;
	cout<<"Ingrese el 3er numero: ";
	cin>>n3;
	cout<<"------------------------------------\n";
	
	if(n1<n2 && n2<n3){
	
			cout<<"Los numeros estan ordenados de forma crecientes:\n";
			cout<< n1<<" - "<< n2<<" - "<< n3;
		
	}else{
		cout<<"Los numeros no estan ordenados de forma crecientes.\n";
	}
	
	
	system("pause>nul");
	return 0;
}
