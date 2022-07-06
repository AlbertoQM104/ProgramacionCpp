/*
Realice un programa que determine si un número es par o impar.
*/


#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int num;
	
	cout<<"-----------------------PAR O IMPAR-----------------------";
	cout<<"Ingrese un Número:";
	cin>>num;
	
	cout<<"---------------------------------------------------------"<<endl;
	
	if(num%2==0){
		cout<<"El número '"<<num<<"' es PAR!"<<endl;
	}else{
		cout<<"El número '"<<num<<"' es IMPAR..."<<endl;
	}
	
	return 0;
}











