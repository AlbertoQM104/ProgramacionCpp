//5toEjercicio_Bucles

#include <iostream>

using namespace std;

int main(){
	
	int num,i=0;
	
	do{
	cout<<"Ingrese numero: ";
	cin>>num;
	
	if(num != 0){
	i++;	
	}
	
	}while(num != 0);
	
	cout<<"----------------------------\n";
	cout<<"La cantidad de numeros mayores que 0 son: "<<i;
	
	
	
	system("pause>null");
	return 0;
}
