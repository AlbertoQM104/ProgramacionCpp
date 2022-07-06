/*Ejercicio8_Estructura

Utilizar 2 estructuras del problema 5, pero ahora pedir los 
datos para N alumnos, y calcular cuál de todos tiene el mejor 
promedio, e imprimir sus notas.

*/


#include <iostream>
#include <locale.h>

using namespace std;

struct promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct promedio prom_alumno;
}a[100];





int main(){
	setlocale(LC_ALL,"");
	
	float prom=0;
	int cant,i,max=-9999,auxm;
	
	cout<<"Ingrese Cantidad de Alumnos: ";
	cin>>cant;
	cout<<"-------------------------------------\n";
	
	for(i=0;i<cant;i++){
		prom = 0;
	fflush(stdin);
	cout<<"Datos del Alumno ["<<i+1<<"]: \n";
	cout<<"Nombre: ";
	cin.getline(a[i].nombre,20,'\n');
	cout<<"Sexo: ";
	cin.getline(a[i].sexo,10,'\n');
	cout<<"Edad: ";
	cin>>a[i].edad;
//	fflush(stdin);
	cout<<"Ingrese Notas:\n";
	cout<<"Nota1: ";
	cin>>a[i].prom_alumno.nota1;
	cout<<"Nota2: ";
	cin>>a[i].prom_alumno.nota2;
	cout<<"Nota3: ";
	cin>>a[i].prom_alumno.nota3;
	
	prom = (a[i].prom_alumno.nota1+a[i].prom_alumno.nota2+a[i].prom_alumno.nota3)/3;
	cout.precision(2);//redonde en 2 decimales
	
	//max
	if(prom > max){
		max = prom;
		auxm = i;
	}
	
	
	fflush(stdin);
	system("cls");
	}
	
	
	cout<<"---------------------------------------------\n";
	cout<<"El Alumno con Mejor Promedio es:\n";
	
	cout<<"Nombre  : "<<a[auxm].nombre<<endl;
	cout<<"Sexo    : "<<a[auxm].sexo<<endl;
	cout<<"Edad    : "<<a[auxm].edad<<endl;
	cout<<"Nota1   : "<<a[auxm].prom_alumno.nota1<<endl;
	cout<<"Nota2   : "<<a[auxm].prom_alumno.nota2<<endl;
	cout<<"Nota3   : "<<a[auxm].prom_alumno.nota3<<endl;
	cout<<"Promedio: "<<max<<endl;
	
	
	
	system("pause>nul");
	return 0;
}
