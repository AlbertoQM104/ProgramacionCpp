/* 5toEjercicio de Vectores

Desarrolle un programa que lea de la entrada
estandar un vector de enteros y determine el mayor
elemento del vector.
*/

#include <iostream>

using namespace std;

int main(){
	
	int v[100];
	int i,num,max=0,pos;
	
	cout<<"Ingrese la cantidad del vector: ";
	cin>>num;
	cout<<"--------------------------------------\n";
	
	for(i=0;i<num;i++){
		cout<<"Ingrese un numero: ";
		cin>>v[i];
		
		if(v[i]>max){
		max=v[i];
		pos=i+1;
		}	
		
	}
	
	cout<<"--------------------------------------\n";
	
	cout<<"El numero mayor del vector es: V["<<pos<<"] -> "<<max;
	
	
	
	
	system("pause>nul");
	return 0;
}





