/* Ejemplo10 Condicional IF

Escribir un programa que lea dos n�meros enteros por teclado
y determine cu�l es el mayor y cual es el menor. Tambi�n deber�
considerar el caso en el que los dos n�meros sean iguales.

*/

#include <iostream>

using namespace std;

int main(){
	
	int n1,n2;
	
	cout<<"Ingrese el 1er numero: ";
	cin>>n1;
	cout<<"Ingrese el 2do numero: ";
	cin>>n2;
	cout<<"--------------------------------------\n";
	
	if (n1!=n2){
		
		if(n1>n2){
			cout<<"El numero ["<<n1<<"] es el MAYOR.\n";
			cout<<"El numero ["<<n2<<"] es el menor.";
		}else{
			cout<<"El numero ["<<n2<<"] es el MAYOR.\n";
			cout<<"El numero ["<<n1<<"] es el menor.";
		}
		
	}else{
		cout<<"Los numeros son IGUALES!";
	}
	
	
	
	system("pause>nul");
	return 0;
}
