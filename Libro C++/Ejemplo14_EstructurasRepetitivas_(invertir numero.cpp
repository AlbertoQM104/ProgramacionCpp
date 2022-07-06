/* Ejemplo14 - FOR

Invertir un número entero
*/


#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int num;
	float NI=0,F=0.1,FI=1,result;
	
	do{
	
	cout<<"Ingrese el número a invertir: ";
	cin>>num;
	cout<<"----------------------------------\n";
	
	}while(num<=0);
	
	
	while(num>0){
	
		NI  = NI + ((num%10)* F );
		FI  = FI * 10;
		F   = F * 0.1;
		num = num/10; 
		
	}
	
	NI = NI * FI;
	
	cout<<"Número Invertido: "<<NI<<endl;
	
	
	system("pause>nul");
	return 0;
}
