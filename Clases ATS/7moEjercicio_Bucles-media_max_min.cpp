/*7moEjercicio_Bucles

Escribe un programa que tome cada 4 horas 
la temperatura exterior, leyendola durante un
periodo de 24hrs. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del día, la temperatura 
más alta y la más baja.     */

#include <iostream>

using namespace std;

int main(){
	
	float temp,i,sum=0,max=0,min=9999,media;
		
	for(i=1;i<=6;i++){
	
	cout<<"Introdusca la temperatura #"<<i<<": ";
 	cin>>temp;
 	
 	sum += temp;
 	
	if(temp>max){
 		max = temp;
	 }
 	
 	if(min>temp){
 		min = temp; 		
	 }
	 	  	
	}
	
	media=sum/6;
	cout.precision(2);
	
	
	cout<<"--------------------------------------\n";
	cout<<"La temperatura media es: "<<media<<"\n";
	cout<<"La temperatura mas alta es: "<<max<<"\n";
	cout<<"La temperatura mas baja es: "<<min<<"\n";
	
	
	system("pause>nul");
	return 0;
}
