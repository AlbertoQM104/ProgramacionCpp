/*Ejercicio9_Estructura

Define una estructura que indique el tiempo empleado por un ciclista
en una etapa. La estructura debe tener tres campos: horas,minutos y segundos.
Escriba un programa que dado N etapas calcule el tiempo total empleado en 
correr todas las etapas.

*/

#include <iostream>
#include <locale.h>

using namespace std;

struct etapa{
	int horas;
	int minutos;
	int segundos;
}e[100];



int main(){
	setlocale(LC_ALL,"");
		
	int cant,i;
	int sumh=0,summ=0,sums=0;	
		
	cout<<"Ingrese la Cantidad de Etapas: ";
	cin>>cant;
	cout<<"-----------------------------------------\n";
	
	for(i=0;i<cant;i++){
				
		do{	
		cout<<"Etapa N°"<<i+1<<": \n";
		fflush(stdin);	
		cout<<"Horas: ";
		cin>>e[i].horas;
		cout<<"Minutos: ";
		cin>>e[i].minutos;
		cout<<"Segundos: ";
		cin>>e[i].segundos;
		cout<<endl<<endl;
			
			if((e[i].horas<=0 || e[i].horas>24) 
			|| (e[i].minutos<=0 || e[i].minutos>59) 
			|| (e[i].segundos<=0 || e[i].segundos>59)){
								system("cls");
			}
		
		}while((e[i].horas<=0 || e[i].horas>24) 
		    || (e[i].minutos<=0 || e[i].minutos>59) 
			|| (e[i].segundos<=0 || e[i].segundos>59) );
		
		sums = sums + e[i].segundos;
		
		if (sums >59){
			sums = sums - 60;	
			summ = summ+1;	
		}
		
		summ = summ + e[i].minutos;
		
		if (summ >59){
			summ = summ-60;
			sumh = sumh+1;
		}
		
		sumh = sumh + e[i].horas;
		
		
	}
	
	cout<<"El tiempo total en correr todas las etapas: \n";
	cout<<" "<<sumh<<" horas, "<<summ<<" minutos, "<<sums<<" segundo\n";
	
	
	system("pause>nul");
	return 0;
}
