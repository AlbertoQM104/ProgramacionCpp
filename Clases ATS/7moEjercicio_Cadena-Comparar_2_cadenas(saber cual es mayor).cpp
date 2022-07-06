/*7moEjercicio_Cadena

Pedir al usuario que digite 2 cadenas de caracteres, e indica
si ambas cadenas son iguales, en caso de no serlo, indicar cual
es mayor alfabeticamente.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int b;
	char cad1[100],cad2[100];
	
	cout<<"Ingrese la 1era cadena: ";
	cin.getline(cad1,100,'\n');
	cout<<"Ingrese la 2da cadena : ";
	cin.getline(cad2,100,'\n');
	
	cout<<"---------------------------------------------\n";
	cout<<"\tComparar si son Iguales o no\n";
	cout<<"\t-----------------------------\n";
	
	
	if(strcmp(cad1,cad2) == 0){
		cout<<"Son iguales!.";
	}else if(strcmp(cad1,cad2) ==1 ){
		
		cout<<"No son Iguales"<<endl;
		cout<<"-----------------------------------------\n";
		cout<<cad1<<" es mayor alfabeticamente que "<<cad2<<endl;
		
	}else if(strcmp(cad1,cad2) ==-1 ){
		
		cout<<"No son Iguales"<<endl;
		cout<<"-----------------------------------------\n";
		cout<<cad2<<" es mayor alfabeticamente que "<<cad1<<endl;
		
	}
	
	
	system("pause>nul");
	return 0;
}
