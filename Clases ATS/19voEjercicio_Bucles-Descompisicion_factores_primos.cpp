/*19voEjercicio_Bucles

realice un programa que calcule la descomposicion en
factores primos de un numero entero.
*/

#include <iostream>

using namespace std;

int main(){
	
	int num,i,rest;
	
	do{
	cout<<"Ingrese un numero a descomponer: ";
	cin>>num;
	
	if(num==0 or num<0){
		cout<<"Digite un numero entero positivo.\n";
	}
	}while(num==0 or num<0);
	
	
	cout<<"-----------------------------------------\n";
	cout<<"La desconposicion es: \n";
	
	for(i=2;num>1;i++){
		while(num%i==0){
			cout<<i<<" ";
			num= num/i;	
		}
		
	}

	

	
		
	
	system("pause>nul");
	return 0;
}
