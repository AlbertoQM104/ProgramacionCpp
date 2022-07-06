/*13voEjercicio_Cadena

Convertir dos cadenas de minusculas a MAYUSCULAS.
Compararlas, y decir si son iguales.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cad1[100],cad2[100];
	
	cout<<"Ingrese la 1era palabra: ";
	cin.getline(cad1,100,'\n');
	cout<<"Ingrese la 2da palabra : ";
	cin.getline(cad2,100,'\n');
	cout<<"---------------------------------\n";
	
	strupr(cad1);
	strupr(cad2);
	
	if(strcmp(cad1,cad2) == 0){
		cout<<"Las palabras son iguales!";
	}else{
		cout<<"Las palabras no son iguales.";
	}
	
	system("pause>nul");
	return 0;
}
