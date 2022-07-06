/*Ejercicio4_Estructura

Hacer una estructura llamada alumno, en la cual se tendrán los siguientes
campos: NOMBRE, EDAD, PROMEDIO, pedir datos al usuario para 3 alumnos,
comprobar cúal de los 3 tiene el mejor promedio y posteriormente imprimir 
los datos del alumno.

*/

#include <iostream>
#include <locale.h>

using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
}alumno[3];



int main(){
	setlocale(LC_ALL,"");
	int i,aux=0,max=-9999;
	
	for(i=0;i<3;i++){
		
	cout<<"Ingrese Nombre: ";
	cin.getline(alumno[i].nombre,20,'\n');
	cout<<"Ingrese Edad: ";
	cin>>alumno[i].edad;
	cout<<"Ingrese Promedio: ";
	cin>>alumno[i].promedio;
	fflush(stdin);	
	cout<<endl;
	
		if(alumno[i].promedio>max){
			max = alumno[i].promedio;
			aux = i;
		}
		
	}
	
	cout<<"---------------------------------\n";
	cout<<"El alumno con mejor promedio es:\n";
	cout<<"Nombre   :"<<alumno[aux].nombre<<endl;
	cout<<"Edad     :"<<alumno[aux].edad<<endl;
	cout<<"Promedio :"<<alumno[aux].promedio<<endl;
	
	
	
	system("pause>nul");
	return 0;
}
