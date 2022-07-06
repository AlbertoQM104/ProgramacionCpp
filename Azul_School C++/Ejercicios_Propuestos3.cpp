/*
La calificación final de un estudiante es el promedio de tres notas: la nota 
de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y 
la nota de participación que cuenta el 10% Escriba un programa que lea las 
tres notas del alumno y escriba su nota final.
*/


#include <iostream>

using namespace std;

int main(){
	
	float nprac = 11, nteo = 13, npart = 15, nf= 0;
	
	cout<<"-----------------------NOTA FINAL-----------------------"<<endl;
	nf = (nprac*0.3)+(nteo*0.6)+(npart*0.1);
	
	cout<<"Nota de Practicas: 11"<<endl;
	cout<<"Nota de Teorica: 13"<<endl;
	cout<<"Nota de Participacion: 15"<<endl;
	cout<<"Nota Final : "<<nf<<endl;
	
	
	
	return 0;
}













