/* Ejemplo3 - DO-WHILE (se ejecuta 1 vez como minimo)

Escriba un pseudoc�digo, que dados como datos N n�meros, obtenga
el n�mero de ceros que hay entre estos n�meros.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int num,cant,i=0,nceros=0;
	
	cout<<"---Contador de Ceros---"<<endl;
	cout<<"Ingrese la cantidad de n�meros: ";
	cin>>cant;
	cout<<"-----------------------------------\n";
	
	do{
		cout<<"Ingrese el n�mero "<<i+1<<": ";
		cin>>num;
		cout<<endl;
		
		i++;
		if(num == 0){
			nceros +=1;
		}
		
	}while(i<cant);
	
	cout<<"-------------------------------------------\n";
	cout<<"RESPUESTA:"<<endl;
	cout<<"Cantidad de Ceros encontrados: "<<nceros<<endl;
	
	
	
	system("pause>nul");
	return 0;
}
