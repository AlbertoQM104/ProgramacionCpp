/*
Gestionar las notas de una clase de 20 alumnos de las cuales
sabemos el nombre y la nota de cada alumno.
UTILIZANDO VECTORES (ARRAY-Arreglos)
*/
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	string nombre[20];
	int nota[20];
	int i,auxm=0,auxn=0,cant=0,nalumno, max=-999, min=999;
	float media=0, media2=0;
	
	cout<<"\tControl de Estudiantes\n";
	cout<<"---------------------------------------------\n";
	cout<<"Cantidad de Alumnos: ";
	cin>>nalumno;
	cout<<"---------------------------------------------\n";
	
	for(i=1;i<=nalumno;i++){ 
		
		cout<<"Nombre del Alumno "<<i<<": ";
		cin>>nombre[i];
		
		cout<<"Nota del Alumno "<<i<<": ";
		cin>>nota[i];
		
		cout<<"---------------------------------------------\n";
		
		
		media = media + nota[i];
		
		
		if(nota[i]<5){
			
			media2 = media2 + nota[i];
			cant = cant + 1;
		}
		
		if(max<nota[i]){
			max = nota[i];
			auxm=i;
		}
		
		if(min>nota[i]){
			min = nota[i];
			auxn=i;
		
		}
		
		
		
	}
	
	
	media = media/nalumno;
	
	media2 = media2/cant;
	
	
	
	cout<<"La Media de todas las notas es:       |"<<media<<endl;
	cout<<"La Media de las notas menores a 5 es: |"<<media2<<endl;
	cout<<"El alumno con la mejor nota es:       |"<<nombre[auxm]<<" su nota fue: "<<nota[auxm]<<endl;
	cout<<"El alumno con la peor nota es:        |"<<nombre[auxn]<<" su nota fue: "<<nota[auxn]<<endl;
	
	
	
	
	system("pause>nul");
	return 0;
}
