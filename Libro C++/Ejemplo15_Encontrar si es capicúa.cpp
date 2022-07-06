/* Ejemplo15

Contruye un programa que permita saber si un
n�mero estero de 4 cifras, es capic�a.
*/
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int num,opuesto;
	int aux,m,c,d,u;
	
	cout<<"Ingrese un n�mero de 4 cifras: ";
	cin>>num;
	cout<<"-----------------------------------------\n";
	
	if(num>=1000 && num<=9999){
		
		aux = num;
		m = aux/1000;
		aux = aux%1000;
		
		c = aux/100;
		aux= aux%100;
		
		d = aux/10;
		aux = aux%10;
		
		u = aux;
		
		opuesto = (u*1000) + (d*100) + (c*10) + (m);
		
		if(num == opuesto){
			
			cout<<"El n�mero ingresado SI es capic�a!\n";
			
		}else{
			//limpia la pantalla
			system("cls");
			
			cout<<"El n�mero "<<num<<" no es CAPIC�A.\n";
			
			
		}
		
	
		
	}else{
		//limpia la pantalla
		system("cls");
		
		cout<<"El n�mero ingresado no es valido!\n";
	}
	
	
	
	
	system("pause>nul");
	return 0;
}
