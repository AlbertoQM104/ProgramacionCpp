/* Ejemplo5 Condicional Operador ?

Desarrolle un programa que permita seleccionar el menor
y el mayor de dos números.

*/

#include <iostream>

using namespace std;

int main(){
	
	int n1,n2;
	
	cout<<"Ingrese 1er numero: ";
	cin>>n1;
	cout<<"Ingrese 2do numero: ";
	cin>>n2;
	cout<<"----------------------------\n";
	
	(n1>n2)?cout<<"El numero "<<n1<<" es el MAYOR.\n":
			cout<<"El numero "<<n2<<" es el MAYOR.\n";
	
	(n1>n2)?cout<<"El numero "<<n2<<" es el menor.\n":
			cout<<"El numero "<<n1<<" es el menor.\n";
	
	
	
	
	system("pause>nul");
	return 0;
}
