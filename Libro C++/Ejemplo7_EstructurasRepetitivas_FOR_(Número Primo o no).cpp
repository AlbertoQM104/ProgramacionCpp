/* Ejemplo7 - FOR

Realice un programa para identificar si un 
número ingresado es primo o no.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int num,i;
	int f=0;
	
	cout<<"--Programa Primo o NoPrimo--"<<endl;
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	for(i=1;i<=num;i++){
		  
		  if( num%i == 0){
		  	
		  	f+=1;
		  }	
		
	}
	
	if( f == 2){
		cout<<"El Número ["<<num<<"] es Primo!"<<endl;
	}else{
		cout<<"No es un número Primo."<<endl;
	}
	
	
	
	
	
	
	system("pause>nul");
	return 0;
}

