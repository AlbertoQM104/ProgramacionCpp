//1er Problema

#include<iostream>

using namespace std;

int main(){
	float num1, num2, mult=0,sum=0,rest=0,div=0;
	
	cout<<"Ingrese 1er numero: ";
	cin>>num1;
	cout<<"Ingrese 2do numero: ";
	cin>>num2;
	
	sum=num1+num2;
	rest=num1-num2;
	mult=num1*num2;
	div=num1/num2;
	cout<<"-----------------------------------\n";
	cout<<"Resultados: \n";
	cout<<"-----------------------------------\n";
	cout<<"La suma es: "<<sum;
	cout<<"\nLa resta es: "<<rest;
	cout<<"\nLa multiplicacion es: "<<mult;
	cout<<"\nLa division es: "<<div;
	
	
	return 0;
}
