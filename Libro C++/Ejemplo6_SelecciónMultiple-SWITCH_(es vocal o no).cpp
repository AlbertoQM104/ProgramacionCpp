/* Ejemplo6 Seleccion Multiple - SWITCH

Realice un programa que permite saber si un 
caracter ingresado por teclado es o no una vocal.

*/

#include <iostream>

using namespace std;

int main(){
	
	char car;
	
	cout<<"Ingrese un caracter: ";
	cin>>car;
	cout<<"-----------------------------------\n";
	
	switch(car){
		case 'a': 
		case 'e': 
		case 'i': 
		case 'o': 
		case 'u': cout<<"El caracter es una vocal '"<<car<<"'"; break;
		default:  cout<<"No es una vocal."; break;
				
	}
	
	
	
	
	system("pause>nul");
	return 0;
}
