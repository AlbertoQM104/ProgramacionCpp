/*11voEjercicio_Cadena

Hacer un programa que determine si una palabra es políndroma

*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cad1[100],cad2[100];
	
	cout<<"Ingresa una palabra: ";
	cin.getline(cad1,100,'\n');
	cout<<"---------------------------\n";
	
	strcpy(cad2,cad1);
	strrev(cad1);
	
	if( strcmp(cad1,cad2) == 0){
		cout<<" La palabra '"<<cad1<<"' es polindroma.";
	}else{
		cout<<"La palabra no es polindroma.";
	}
	
	
	
	
	system("pause>nul");
	return 0;
}
