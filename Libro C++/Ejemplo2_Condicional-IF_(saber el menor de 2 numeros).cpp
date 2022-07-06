/* Ejemplo2 Condicional IF

Dado como datos 2 números enteros, compruebe si el
número es menor que el segundo.
*/

#include <iostream>

using namespace std;

int main(){
	
	int a,b;
	
	cout<<"Ingrese 1er numero: ";
	cin>>a;
	cout<<"Ingrese 2do numero: ";
	cin>>b;
	cout<<"--------------------------------------\n";
	
	if(a<b){
		cout<<"El numero ["<<b<<"] es mayor que ["<<a<<"].";
	}else{
		if (a==b){
			cout<<"Los numeros son iguales.";
		}else{
			cout<<"El numero ["<<a<<"] es mayor que ["<<b<<"].";
		}
	}
	
	
	
	system("pause>nul");
	return 0;
}
