/*9noEjercicio_Cadena

Crear una cadena que tenga la siguiente frase "Hola que tal",
luego crear otra cadena para preguntarle al usuario su nombre, 
por ultimo añadir el nombre al final de la primera cadena
y mostrar el mensaje completo "Hola que tal (Nombre)".

*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cad1[]="Hola que tal ",cad2[100];
	
	cout<<"Ingrese su nombre: ";
	cin.getline(cad2,100,'\n');
	cout<<"-----------------------------------\n";
	cout<<endl;
	
	strcat(cad1,cad2);
	
	cout<<cad1<<endl;
	
	
	
	
	system("pause>nul");
	return 0;
}
