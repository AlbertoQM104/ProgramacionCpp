/*Ejercicio10_Estructura

Defina una estructura que sirva para representar a una persona.
La estructura debe contener dos campos: NOMBRE,VALOR TIPO LOGICO (indique
si la persona tiene algún tipo de discapacidad).Realice un programa que 
dado un vector de personas rellene dos nuevos vectores: uno que contenga
las personas que no tienen ninguna discapacidad y otra que contenga las 
personas con discapacidad.

*/

#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

struct persona{
	char nombre[10];
	char v_disc;
	
}p[100];

struct discapacidad{
	char nombre[10];
}d[100];

struct normal{
	char nombre[10];
}n[100];



int main(){
	setlocale(LC_ALL,"");
	
	int i,cant,nd=0,nn=0;
	
	cout<<"Ingrese la cantidad de Personas: ";
	cin>>cant;
	cout<<"------------------------------------\n";
	
	for(i=0;i<cant;i++){
		
		do{
			
		fflush(stdin);
		cout<<"Ingrese Infomación de Persona ["<<i+1<<"]: \n";
		cout<<"Nombre: ";
		cin.getline(p[i].nombre,10,'\n');
		cout<<"Discapacidad [S][N]: ";
		cin>>p[i].v_disc;
		p[i].v_disc=toupper(p[i].v_disc);
		cout<<endl;
		
		if((p[i].v_disc != 'S') && (p[i].v_disc != 'N')){
			system("cls");
		}
		
		if (p[i].v_disc == 'S'){
			strcpy(d[nd].nombre,p[i].nombre);
			nd=nd+1;
		}else{
			strcpy(n[nn].nombre,p[i].nombre);
			nn=nn+1;
		}
		
		
		
		}while((p[i].v_disc != 'S') && (p[i].v_disc != 'N'));
	}
	
	cout<<endl;
	cout<<"---------------------------------------------------\n";
	cout<<endl;
	cout<<"Personas Discapacitadas: \n";
			
	for(i=0;i<nd;i++){
		cout<<i+1<<".Nombre: "<<d[i].nombre<<endl;
		
	}
	
	cout<<endl;
	cout<<"Personas Normales: \n";
	
	for(i=0;i<nn;i++){
		cout<<i+1<<".Nombre: "<<n[i].nombre<<endl;
		
	}
	
	
	
	
	
	system("pause>nul");
	return 0;
}
