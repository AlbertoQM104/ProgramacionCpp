/*Ejercicio7_Estructura

Hacer 2 estructuras una llamada promedio que tendra los siguientes 
campos: NOTA1,NOTA2,NOTA3; y otra llamada alumno que tendrá los siguientes
miembros: NOMBRE,SEXO,EDAD; hacer que la estructura promedio este anidada
en la estructura alumno, luego pedir todos los datos para un alumno. luego
calcular su promedio, y por último imprimir todos sus datos incluidos el 
promedio.

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
}a;





int main(){
	setlocale(LC_ALL,"");
	
	float prom=0;
	
	cout<<"Ingrese Nombre del Alumno: ";
	cin.getline(a.nombre,20,'\n');
	cout<<"Ingrese el Sexo del Alumno: ";
	cin.getline(a.sexo,10,'\n');
	cout<<"Ingrese la Edad del Alumno: ";
	cin>>a.edad;
//	fflush(stdin);
	cout<<"Ingrese Notas:\n";
	cout<<"Nota1: ";
	cin>>a.prom_alumno.nota1;
	cout<<"Nota2: ";
	cin>>a.prom_alumno.nota2;
	cout<<"Nota3: ";
	cin>>a.prom_alumno.nota3;
	
	prom = (a.prom_alumno.nota1+a.prom_alumno.nota2+a.prom_alumno.nota3)/3;
	cout.precision(2);//redonde en 2 decimales
	cout<<"---------------------------------------------\n";
	
	cout<<"Nombre  : "<<a.nombre<<endl;
	cout<<"Sexo    : "<<a.sexo<<endl;
	cout<<"Edad    : "<<a.edad<<endl;
	cout<<"Nota1   : "<<a.prom_alumno.nota1<<endl;
	cout<<"Nota2   : "<<a.prom_alumno.nota2<<endl;
	cout<<"Nota3   : "<<a.prom_alumno.nota3<<endl;
	cout<<"Promedio: "<<prom<<endl;
	
	
	
	system("pause>nul");
	return 0;
}
