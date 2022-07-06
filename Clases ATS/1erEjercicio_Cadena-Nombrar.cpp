//Cadenas

#include <iostream>

using namespace std;

int main(){
	
	char palabra[]="Alberto";
	char pal[]= {'a','b','c'};
	char nom[30];
	
	cout<<palabra;
	cout<<endl;
	cout<<pal;
	cout<<endl;
	cout<<"Ingrese un nombre: ";
//	cin>>nom; //si encuentra un espacio se termino la palabra
//	gets(nom);//permite toda la cadena completa (ocupando espacio)
//				variable,cantidad,cuando termina
	cin.getline(nom,30,'\n');//respeta la cantidad dada de la variable
	cout<<"-------------------------\n";
	cout<<nom;
	
	
	
	
	
	
	
	system("pause>nul");
	return 0;
}
