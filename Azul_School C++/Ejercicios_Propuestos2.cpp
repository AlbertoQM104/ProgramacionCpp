/*
Escriba un programa que lea las tres notas de un alumno y calcule la 
nota final media de dicho alumno (Promedio).
*/

#include <iostream>

using namespace std;


int main(){
	
	float n1 = 11,n2 = 11,n3= 13, prom = 0 ;
	
	prom = (n1+n2+n3)/3;
	
	
	cout<<"------------------PROMEDIO DE NOTAS------------------"<<endl;
	cout<<"Nota 1: "<<n1<<endl;
	cout<<"Nota 2: "<<n2<<endl;
	cout<<"Nota 3: "<<n3<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"Promedio de Notas: "<<prom<<endl;
	
	
	
	return 0;
}










