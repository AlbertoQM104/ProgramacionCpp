/* Ejemplo12 - FOR

Dado 4 notas de un alumno, eliminar la menor y 
calcular el promedio de las tres notas restantes.
En N alumnos!

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	float nota[100];
	int calumno,cont;
	float sum,min,prom;
	int i,j;
		
	cout<<"\t----Estudiantes----\n";
	cout<<"Cantidad de Alumnos a Ingresar notas: ";
	cin>>calumno;
	cout<<"----------------------------------------------\n";
	
	
	for(i=0;i<calumno;i++){
		system("CLS");
		min=21;		
		sum=0;
		prom=0;
						
		cout<<"-----Alumno N° "<<i+1<<" -----"<<endl;
		
		for(j=0;j<4;j++){
		
			
			do{
				
			cout<<"Ingrese la nota número "<<j+1<<": ";
			cin>>nota[j];
			
				
			}while ((nota[j]<0 || nota[j]>20));
			
			
					
			sum +=nota[j];
			
			if(nota[j]<min){
				min=nota[j];
			}
			
		
		}
		
		cout<<"******************************************\n";
		cout<<"Notas a Mostrar: "<<endl;
		for(j=0;j<4;j++){
			
			if(min != nota[j] ){
			
			cout<<"N° "<<j+1<<" : "<<nota[j]<<endl;
							
			}else{
				cont = j+1;
			}
			
		}
		
		prom = ((sum-min)/3);
		cout.precision(2); //redondeo el número
		
		cout<<endl;
		cout<<"Nota Eliminada: "<<endl;
		cout<<"N° "<<cont<<" : "<<min<<endl<<endl;
		cout<<"-----------------------------------\n";
		cout<<"Promedio de Notas: "<<prom<<endl<<endl;
		cout<<"-----------------------------------\n";
		
		system("pause");		
		
	}
	
	
	system("pause>nul");
	return 0;
}
