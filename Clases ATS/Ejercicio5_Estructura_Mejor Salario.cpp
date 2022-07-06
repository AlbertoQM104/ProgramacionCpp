/*Ejercicio5_Estructura

Realizar un programa que lea un arreglo de estructuras los datos
de N empleados de la empresa y que imprima los datos del empleado
con mayor y menor salario.

*/

#include <iostream>
#include <locale.h>

using namespace std;

struct empleado{
	char nombre[20];
	int edad;
	float salario;
	
}empleado[100];



int main(){
	setlocale(LC_ALL,"");
	
	int auxm,auxn;
	int i,cant,max=-9999,min=9999;
	
	cout<<"Ingrese la cantidad de empleados: ";
	cin>>cant;
	cout<<"-------------------------------------\n";
	
	for(i=0;i<cant;i++){
		fflush(stdin);
		cout<<"Información del Empleado ["<<i+1<<"]\n";
		cout<<"Nombre: ";
		cin.getline(empleado[i].nombre,20,'\n');
		cout<<"Edad: ";
		cin>>empleado[i].edad;
		cout<<"Salario: ";
		cin>>empleado[i].salario;
		cout<<endl;
		
		//max
		if(empleado[i].salario>max){
			max = empleado[i].salario;
			auxm = i;
		}
		
		
		
		//min
		if(empleado[i].salario<min){
			min = empleado[i].salario;
			auxn = i;
		}
		
	}
	
	
	cout<<"--------------------------------------------\n";
	cout<<"El empleado con mayor Salario es:\n";
	cout<<"Nombre: "<<empleado[auxm].nombre<<endl;
	cout<<"Salario: "<<empleado[auxm].salario<<endl;
	cout<<"--------------------------------------------\n";
	cout<<"El empleado con menor Salario es:\n";
	cout<<"Nombre: "<<empleado[auxn].nombre<<endl;
	cout<<"Salario: "<<empleado[auxn].salario<<endl;
	
	
	
	
	
	system("pause>nul");
	return 0;
}
