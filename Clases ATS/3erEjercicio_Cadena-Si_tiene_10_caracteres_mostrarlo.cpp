/*3erEjercicio_Cadena

Hacer un programa que pida al usuario que digite una cadena de
caracteres, luego verificar la longitud de la cadena, y si 
ésta supera a 10 caracteres mostrarla en pantalla, caso contrario
no mostrarla.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cadena[100];
	int n=0;
	
	cout<<"Ingresa una cadena: ";
	cin.getline(cadena,100,'\n');
	cout<<"--------------------------------------------------------\n";
	
	n= strlen(cadena);
	cout<<"Ver si la cadena supera los 10 caracteres\n";
	cout<<"---------------------------------------------------------\n";
	
	if(n > 10){
		cout<<"La cadena es: "<<cadena;
	}else{
		cout<<"La cadena no es digna!";
	}
		
	
	
	system("pause>nul");
	return 0;
}
