/*Ejercicio1_Funciones

mayor de 2 n�meros con  funciones

*/

#include<iostream>
#include<locale.h>

using namespace std;

//prototipo de funci�n
int encontrarMax(int x, int y);



int main(){
	setlocale(LC_ALL,"");
	
	int n1,n2;
	
	cout<<"Ingrese 1er n�mero: ";
	cin>>n1;
	cout<<"Ingrese 2do n�mero: ";
	cin>>n2;
	cout<<endl;
	
	cout<<"--------------------------------------\n";
	cout<<"El n�mero mayor es: "<<encontrarMax(n1,n2)<<endl;
	
	system("pause>nul");
	return 0;
}


//Definici�n de Funci�n

int encontrarMax(int x, int y){
	
	int numMax;
	
	if(x>y){
		numMax = x;
		
	}else{
		numMax = y;
	}
	
	return numMax;
	
}





