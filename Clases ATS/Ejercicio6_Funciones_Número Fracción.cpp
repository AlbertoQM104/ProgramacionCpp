/*Ejercicio6_Funciones

Escriba un programa en C++ que devuelva la parte fraccionaria de 
cualquier número introducido por el usuario. Por ejemplo, si se introduce
el número 256.879, deberia desplegarse el numero 0.879.

*/


#include<iostream>
#include<conio.h>

using namespace std;

void recival();
float fracci(float x);

float n1;

int main(){
	setlocale(LC_ALL,"");
	
	recival();
	cout<<"---------------------------\n";
	cout<<"El resultado es: "<<fracci(n1)<<endl;
	
	
	system("pause>nul");
	return 0;
}



void recival(){
	
	cout<<"Ingrese un número: ";
	cin>>n1;
	
}



float fracci(float x){
	
	float result;
	int aux;
	
	aux = x;
	
	result = x - aux;
	
	return result;
	
	
}


