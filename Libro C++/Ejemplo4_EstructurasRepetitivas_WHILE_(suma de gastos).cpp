/* Ejemplo4 - WHILE

Supongamos que debemos obtener la suma de los gastos que 
hicimos en nuestro último viaje, pero no sabemos exactamente 
cuántos fueron, desarrolle el programa para solucionar este problema.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	char x='S';
	int gasto,sum=0;
	
	cout<<"---------Calculo del Gasto Total---------"<<endl;
	
	while(x=='S'){
		
		cout<<"Ingrese Gasto: ";
		cin>>gasto;
		
		sum +=gasto;
		
		cout<<"---------------------------------\n";
		cout<<"Seguir poniendo más gastos? [S=sí][N=no] ---> ";
		cin>>x;
		cout<<"---------------------------------\n";
		x= toupper(x);
		
	}
	
	cout<<"--------------------------------------------\n";
	cout<<"Cantidad Total de Gastos: "<<sum<<endl;	
	
	
	system("pause>nul");
	return 0;
}


