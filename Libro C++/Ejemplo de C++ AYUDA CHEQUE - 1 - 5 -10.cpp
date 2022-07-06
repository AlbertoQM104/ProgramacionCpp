// Programa que permita cambiar un cheque de cualquier cantidad en la menor
//cantidad de billetes de 1,5,10 dolares 

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int cheque,d1=0,d5=0,d10=0;
	
	cout<<"Ingrese cantidad de Dinero (menor a 999): ";
	cin>>cheque;
	
	
	if (cheque<=999 && cheque>0){
		
		d10 = cheque/10;
		cheque = cheque%10;
		
		d5  = cheque/5;
		cheque = cheque%5;
		
		d1  =  cheque/1;
		
		cout<<"------------------------------------\n";
		cout<<"N° de Billetes de 1 : "<<d1 <<endl;
		cout<<"N° de Billetes de 5 : "<<d5 <<endl;
		cout<<"N° de Billetes de 10: "<<d10 <<endl;
		cout<<"------------------------------------\n";
			
		
		
	}else{
		
		cout<<"Número ingresado no Dable! \n";
		
	}
	
	
	
	system ("pause>null");
	return 0;
}
