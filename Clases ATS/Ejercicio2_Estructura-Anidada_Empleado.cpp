/*Ejercicio2_EstructuraAnidada

info de empleado
*/

#include <iostream>
#include <locale.h>

struct info_dir{
	char direccion[30];
	char ciudad[20];
	char provincia[20];
	
};

struct empleado{
	char nombre[20];
	struct info_dir dir_empleado;
	double salario;
	
}empleado[2]; //defines cuantos empleado tendras



using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	
	for(i=0;i<2;i++){
		//vaciar el beuffer y permitir digitar el siguiente (cin.getline)
		fflush(stdin);
		
		cout<<"Digite su Nombre: ";
		cin.getline(empleado[i].nombre,20,'\n');
		
		cout<<"Digite su Dirección: ";
		cin.getline(empleado[i].dir_empleado.direccion,30,'\n');
		
		cout<<"Digite su Ciudad: ";
		cin.getline(empleado[i].dir_empleado.ciudad,20,'\n');
		
		cout<<"Digite su Provincia: ";
		cin.getline(empleado[i].dir_empleado.provincia,20,'\n');
		
		cout<<"Digite su Salario: ";
		cin>>empleado[i].salario;
		
		cout<<endl;
	}
	
	for(i=0;i<2;i++){
		cout<<"Nombre: "<<empleado[i].nombre<<endl;
		cout<<"Dirección: "<<empleado[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleado[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleado[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleado[i].salario<<endl;
		
		cout<<endl;
		
	}
	
	
	system("pause>nul");
	return 0;
}
