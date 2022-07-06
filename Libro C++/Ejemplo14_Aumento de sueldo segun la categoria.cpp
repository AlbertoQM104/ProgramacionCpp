/* Ejemplo14

Dado como dato el tiempo de servicio de un trabajador,
considere un aumento del 15% si la categoria del trabajador
es A, un 12% en caso la categoría sea B, si la categoría
es C, un aumento del 10% y para la categoria D se
aumentará $15. Imprime el sueldo con el aumento 
incorporado, la categoria y el tiempo de servicio del trabajador.
		
			CATEGORIA				AÑOS
				A				   20-30
				B				   15-19
				C				   10-14
				D				    0-9
		
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int anos;
	float sueldo,sf,aum;
	char cat;
	
	cout<<"Ingrese su sueldo: ";
	cin>> sueldo;
	cout<<"Ingrese su años de servicio: ";
	cin>>anos;
	cout<<"------------------------------------\n";
	
	if(anos>= 0 && anos<=9){
		cat = 'D';
		aum= 15;
		
	}else{
		if(anos>= 10 && anos<=14){
			cat = 'C';
			aum= sueldo*0.10;
			
		}else{
			if(anos>= 15 && anos<=19){
				cat = 'B';
				aum= sueldo*0.12;
				
			}else{
				if(anos>= 20 && anos<=30){
					cat = 'A';
					aum= sueldo*0.15;
					
				}
			}
		}
	}
	
	sf=sueldo+aum;
	
	cout<<"Sueldo + Incremento   : "<<sf<<endl;
	cout<<"Cantidad de Incremento: "<<aum<<endl;
	cout<<"La categoria es       : "<<cat<<endl;
	cout<<"El tiempo de años es  : "<<anos<<endl;
	
		
	system("pause>nul");
	return 0;
}
