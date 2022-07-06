/*8voEjercicio_Cadena

Añadir o concatenar una cadena con otra - Funcion strcat

*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cad1[100],cad2[100];
	
	cout<<"Ingrese la 1era cadena: ";
	cin.getline(cad1,100,'\n');
	cout<<"Ingrese la 2da cadena: ";
	cin.getline(cad2,100,'\n');
	cout<<"-------------------------------\n";
	
	strcat(cad1, " pelado");
	
	cout<<cad1<<endl;
	
	system("pause>nul");
	return 0;
}
