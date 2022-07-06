/*
Crea un programa que imprima el resultado del siguiente problema: 
Dos personas ganan entre los 2 un total de $3,000. ¿Si una gana $500 
más que otra, cuánto gana cada una? Nota: p1 = (3,000+500)/2, p2 = 3000-p1. 
*/


#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	float v1 = 0, v2 =0, vt= 3000;
	
	cout<<"---------------------------GANACIA---------------------------"<<endl;
	cout<<"2 Personas ganan 3,000"<<endl;
	
	v1 = (3000+500)/2;
	v2 = 3000-v1;
	
	cout<<"La Persona 1 gana: "<<v1<<endl;
	cout<<"La Persona 2 gana: "<<v2<<endl;
	
	
	
	
	
	return 0;
}














