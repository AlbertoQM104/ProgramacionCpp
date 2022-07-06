/* Ejemplo17

Diseñe un programa que permita calcular el día siguiente de una fecha
dada. Asumir que la fecha ingresada es válida.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int d,m,a,ndias;
	
	cout<<"\tINGRESE UNA FECHA\n";
	cout<<"Ingrese Día: ";
	cin>>d;
	cout<<"Ingrese Mes: ";
	cin>>m;
	cout<<"Ingrese Año: ";
	cin>>a;
	cout<<"---------------------------\n";
	cout<<"Fecha Ingresada: "<<d<<"/"<<m<<"/"<<a<<endl;
	cout<<"---------------------------\n";
	cout<<"Día Siguiente: \n";
	
	if(a>1500 && a<2500){
			
			if(m>0 && m <=12){
				
				switch(m){
					
					case 1: ndias=31;break;
					case 2: 
						if ((a%4 == 0) && (a%100!=0 || a%400 ==0) ){
							ndias=29;
						}else{
							ndias=28;
						};break;
					case 3: ndias=31;break;
					case 4: ndias=30;break;
					case 5: ndias=31;break;
					case 6: ndias=30;break;
					case 7: ndias=31;break;
					case 8: ndias=31;break;
					case 9: ndias=30;break;
					case 10: ndias=31;break;
					case 11: ndias=30;break;
					case 12: ndias=31;break;
				}
				
				if(d>0 && d<= ndias){
					
					d = d+1;
					if(d>ndias){
						d=1;
						m=m+1;
						
						if(m>12){
							m=1;
							a=a+1;
						}
					}
					
				
					cout<<"     "<<d<<"/"<<m<<"/"<<a<<endl;
				
				
				
					
				}else{
					cout<<"El día de la fecha es invalida!";
				}
				
				
			}else{
				cout<<"El mes de la fecha es invalida!";
			}

	}else{
		
		cout<<"El año de la fecha es invalida!";
	}
	
	
	
	
	
	
	system("pause>nul");
	return 0;
}

