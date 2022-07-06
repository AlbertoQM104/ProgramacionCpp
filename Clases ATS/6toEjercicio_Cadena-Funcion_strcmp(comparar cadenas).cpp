/*6toEjercicio_Cadena

Compara cadenas - Función strcmp()
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cad1[]="Afeto";
	char cad2[]="Boris";
	int a;
	
	a=strcmp(cad1,cad2);
	
	cout<<a<<endl;
	cout<<"---------------------------\n";
/*	if (a==0){
		cout<<"Las cadenas son iguales";
	}else{
		cout<<"Ya valimos , ni se parecen";
	}
*/	

//orden alfabetico

	if (strcmp(cad2,cad1) > 0){
		cout<<cad2<<" esta despues alfabeticamente de "<<cad1<<endl;
	}
	
	
	system("pause>nul");
	return 0;
}
