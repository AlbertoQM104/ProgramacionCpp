/* Ejercicio1_Estructuras



*/

#include <iostream>
#include <locale.h>

using namespace std;

struct persona{
	char nombre[20];
	int edad;
	
}persona1,persona2;
/*persona1 = {"Alberto",22},
persona2 = {"Cristian",24};
*/



int main(){
	setlocale(LC_ALL,"");
	
	/*cout<<"Nombre 1: |"<<persona1.nombre;
	cout<<endl;
	cout<<"Edad 1:   |"<<persona1.edad;
	cout<<endl;
	
	cout<<"------------------------------------";
	cout<<endl;
	
	cout<<"Nombre 2: |"<<persona2.nombre;
	cout<<endl;
	cout<<"Edad 2:   |"<<persona2.edad;

	cout<<endl;*/
	
	
	cout<<"Nombre: ";
	cin.getline(persona1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>persona1.edad;
	
	cout<<"\n---------------------------------\n";
	
	//vaciar el beuffer y permitir digitar el siguiente (cin.getline)
	fflush(stdin);
	
	cout<<"Nombre: ";
	cin.getline(persona2.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>persona2.edad;
	
	
	cout<<"\n------------Muestro Info------------\n";
	cout<<"Nombre 1: "<<persona1.nombre<<endl;
	cout<<"Edad 1: "<<persona1.edad<<endl;
	cout<<"Nombre 2: "<<persona2.nombre<<endl;
	cout<<"Edad 2: "<<persona2.edad<<endl;

	system("pause>nul");
	return 0;
}
