/*
Realice un programa que determine si un n�mero es par o impar.
*/


#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int num;
	
	cout<<"-----------------------PAR O IMPAR-----------------------";
	cout<<"Ingrese un N�mero:";
	cin>>num;
	
	cout<<"---------------------------------------------------------"<<endl;
	
	if(num%2==0){
		cout<<"El n�mero '"<<num<<"' es PAR!"<<endl;
	}else{
		cout<<"El n�mero '"<<num<<"' es IMPAR..."<<endl;
	}
	
	return 0;
}











