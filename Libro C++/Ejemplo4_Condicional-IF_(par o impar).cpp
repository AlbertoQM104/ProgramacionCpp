/* Ejemplo4 Condicional IF-ELSE

Se requiere la implementaci�n de un programa que 
dado un n�mero entero positivo mayor que cero de como
resultado si dicho n�mero es par o impar.
El ejercicio requiere la validaci�n del dato de entrada.

*/

#include <iostream>

using namespace std;

int main(){
	
	int n1;
	
	cout<<"Ingrese un Numero: ";
	cin>>n1;
	cout<<"------------------------------------\n";
	
	if(n1>0){
		if(n1 % 2 == 0){
			cout<<"El numero es par.";
		}else{
			cout<<"El no numero es Impar.";
		}
	}else{
		cout<<"El valor no es mayor que 0.";
	}
	
	system("pause>nul");
	return 0;
}

