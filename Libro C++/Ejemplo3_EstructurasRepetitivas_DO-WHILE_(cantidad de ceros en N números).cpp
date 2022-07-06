/* Ejemplo3 - DO-WHILE (se ejecuta 1 vez como minimo)

Escriba un pseudocódigo, que dados como datos N números, obtenga
el número de ceros que hay entre estos números.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int num,cant,i=0,nceros=0;
	
	cout<<"---Contador de Ceros---"<<endl;
	cout<<"Ingrese la cantidad de números: ";
	cin>>cant;
	cout<<"-----------------------------------\n";
	
	do{
		cout<<"Ingrese el número "<<i+1<<": ";
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
