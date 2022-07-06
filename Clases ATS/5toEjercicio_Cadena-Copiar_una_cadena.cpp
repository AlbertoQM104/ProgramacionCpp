/*5toEjercicio_Cadena

Pedir al usuario una cadena de caracteres, almacenarla
en un arreglo y copiar todo su contenido hacia otro arreglo
de caracteres.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cad[100],cadcop[100];
	
	cout<<"Ingrese una cadena: ";
	cin.getline(cad,100,'\n');
	cout<<"--------------------------------\n";
	cout<<"Mostramos la copia:\n";
	cout<<"--------------------------------\n";
		
	strcpy(cadcop,cad);	
	
	cout<<cad<<endl;
	cout<<cadcop<<endl;
	
	
	
	
	system("pause>nul");
	return 0;
}
