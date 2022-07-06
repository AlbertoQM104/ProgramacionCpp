//3er Ejercicio - edad-sexo-altura
#include <iostream>

using namespace std;

int main(){
	int edad;
	char sex; //sex[10] (ahí tienes espacio de una palabra)
	float alt;
	
	cout<<"---------Datos Personales---------\n";
	cout<<"Ingrese su edad: ";
	cin>>edad;
	cout<<"Ingrese su Sexo[M/F]: ";
	cin>>sex; 
	cout<<"Ingrese su altura: ";
	cin>>alt;
	
	cout<<"----------------------------------\n";
	cout<<"Edad: "<<edad;
	cout<<"\nSexo: "<<sex;
	cout<<"\nAltura: "<<alt<<"m.";
	
	return 0;	
}
