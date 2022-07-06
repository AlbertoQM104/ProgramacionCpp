/*Ejercicio10_Funciones_Cambio de Parametros

Devolver valores múltiples (sumar y multiplicar 2 números)

*/

#include<iostream>
#include<conio.h>

using namespace std;

void calcular(int,int,int&,int&);


int main(){
	setlocale(LC_ALL,"");
	
	int n1,n2,suma=0,prod=0;
	
	cout<<"Ingrese 1er número: ";
	cin>>n1;
	cout<<"Ingrese 2do número: ";
	cin>>n2;
	
	calcular(n1,n2,suma,prod);
	
	cout<<"El valor de la suma es: "<<suma<<endl;
	cout<<"El valor del producto es: "<<prod<<endl;
	
	system("pause>nul");
	return 0;
}


void calcular(int x,int y,int& suma,int& prod){
	
	suma = x+y;
	prod = x*y;	
	
}



