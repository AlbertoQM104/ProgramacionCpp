/* Ejemplo9 - FOR

Determinar la cantidad semanal de dinero que recibirá cada uno
de los N obreros de una empresa. Se sabe que cuando las horas que
trabajo un obrero exceden de 40, el resto se convierte en horas 
extras que se pagan al doble de una hora normal, cuando no exceden
de 8; cuando las horas extras exceden de 8 se pagan las primeras 8
al doble de lo que se paga por hora normal y el resto al triple.
Considerar que todos los obreros ganan el mismo sueldo (200).

hora = 200/40 = 5
*/

#include <iostream>
#include <locale.h>
// #define sueldohora 5     --------- Define el valor (palabra reservada)
using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int hrs,sueldo=0,sueldohora=5;
	char res='S';
	
	do{
	cout<<"\tSueldo"<<endl;
	cout<<"Cantidad de horas Trabajadas : ";
	cin>>hrs;
	
	if(hrs>40){
		
		if(hrs>48){
			
			sueldo = 200 + (8*2*(sueldohora)) + ((hrs-48)*3*(sueldohora));
				
		}else{
			sueldo = 200 + ((hrs-40)*2*(sueldohora));
			
		}
		
			
	}else{
		sueldo=200;
	}
	
	cout<<"-------------------------------------------------------------------\n";
	cout<<"El sueldo que obtiene por trabajar ["<<hrs<<"] horas es : "<<sueldo<<endl;
	cout<<"-------------------------------------------------------------------\n";
	cout<<endl<<"Desea consultar otro empleado? [S] [N]:---> ";
	cin>>res;
	
	res= toupper(res);
	
	system("cls");
	
	}while(res=='S');
	
	
	
	system("pause>nul");
	return 0;
}
