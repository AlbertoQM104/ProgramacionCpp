/* Ejemplo13 - FOR

Escriba un algoritmo que nos permita hallar el factorial de un número
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int num,i;
	float rest=1;
	
	cout<<"Ingrese un número para obtener su factorial: ";
	cin>> num;
	cout<<"----------------------------------------\n";
	
	cout<<"  "<<num<<"! :     ";
	
	
	for(i=1;i<=num;i++){
		
		rest = i*rest;
		
		if(i!=num){
		
			cout<<i<<" * ";
		}else{
			cout<<i;
		}
		
	
	}
	
	
	cout<<endl;
	cout<<"----------------------------------------\n";
	cout<<"Factorial de "<<num<<" : "<<rest;
	
	
	
	
	system("pause>nul");
	return 0;
}

