/*Ejercicio3_Estructura

Hacer una estructura llamada corredor, en la cual se tendrán los siguientes 
campos: NOMBRE,EDAD,SEXO,CLUB, pedir datos al usuario para un corredor y así una
categoría de competición:
-Juvenil <= 18 años
-Señor <= 40 años
-Veterano >40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoria de
competición.

*/

#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

struct corredor{
	char nombre[20];
	int edad;
	char sexo[20];
	char club[10];
}c1;



int main(){
	setlocale(LC_ALL,"");
	char cat[20];
	
	cout<<"Ingrese Nombre: ";
	cin.getline(c1.nombre,20,'\n');
	
	cout<<"Ingrese Edad: ";
	cin>>c1.edad;
	
	fflush(stdin);
	cout<<"Ingrese Sexo: ";
	cin.getline(c1.sexo,20,'\n');
	
	cout<<"Ingrese Club: ";
	cin.getline(c1.club,10,'\n');
	
	
	if(c1.edad <= 18){
		strcpy(cat,"Juvenil");
	
	}else{
		if(c1.edad <= 40){
			strcpy(cat,"Señor");
		}else{
			strcpy(cat,"Veterano");
		}
	}
	
	cout<<endl;
	cout<<"------------------------------------------\n";
	
	cout<<"Nombre    :"<<c1.nombre<<endl;
	cout<<"Edad      :"<<c1.edad<<endl;
	cout<<"Sexo      :"<<c1.sexo<<endl;
	cout<<"Club      :"<<c1.club<<endl;
	cout<<"Categoria :"<<cat<<endl;
	
	
	
	system("pause>nul");
	return 0;
}
