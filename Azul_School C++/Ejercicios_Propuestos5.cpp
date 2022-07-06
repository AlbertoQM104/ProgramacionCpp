/*
Crea un programa que calcule el área de la siguiente figura:
		segmento circular
		
*/

#include <locale.h>
#include <iostream>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	float h = 13, r = 10, atr = 0, arc= 0, at = 0;
	
	cout<<"----------------ÁREA DEL SEGMENTO CIRCULAR----------------"<<endl;
	cout<<"Altura: 13"<<endl;
	cout<<"Radio: 10"<<endl;
	cout<<"---------------------------"<<endl;
	atr = h*r/2;
	arc = (3.14*r*r)/2;
	
	cout<<"Área del triángulo:"<<atr<<endl;
	cout<<"Área del semicirculo:"<<arc<<endl;
	at = atr + arc;
	
	cout<<"---------------------------"<<endl;
	cout<<"Área Total: "<< at <<endl;
	
	
	
	return 0;
}











