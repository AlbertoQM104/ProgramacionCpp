/* Ejemplo1 Condicional IF

Dado un número, compruebe si es mayor que 10, 
en cuyo caso debe reportar un mensaje.
*/

#include <iostream>

using namespace std;

int main(){
	
	int a;
	
	cout<<"Ingrese un numero: ";
	cin>>a;
	
	if(a>10){
		cout<<"El numero es MAYOR que 10!";
	}else{
		if (a==10){
			cout<<"El numero es igual a 10.";
		}else{
			cout<<"El numero es menor que 10.";
		}
	}
	
	
	system("pause>nul");
	return 0;
}
