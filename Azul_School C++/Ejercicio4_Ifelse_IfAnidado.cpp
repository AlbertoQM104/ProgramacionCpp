/*
Solicita edad, el sexo y pais de una persona e imprima si es mayor de edad, su sexo y su ciudad.
*/

#include <iostream>
#include <locale.h>


using namespace std;


int main(){
	
	setlocale(LC_ALL,"");
	
	int edad , pais;
	char sexo = 'm'; 
	
	cout<<"----------------------Ejercicio 4----------------------"<<endl;
	cout<<"Ingrese su Edad: ";
	cin>>edad;
	cout<<"Ingrese su Sexo [M-F]: ";
	cin>>sexo;
	cout<<"Ingrese su País [1. México, 2. Colombia, 3. Perú]: ";
	cin>>pais;
	
	cout<<"-------------------------------------------"<<endl;
	
	if ( edad >= 18){
		
		cout<<"Usted es mayor de edad y tiene: ["<<edad<<"] "<<endl;
		
		if(sexo == 'm' || sexo == 'M'){
			cout<<"Su sexo es: [ Masculino ]"<<endl;
		}else{
			cout<<"Su sexo es: [ Femenino ]"<<endl;
		}
		
		if (pais == 1){
			cout<<"Su país es: [ México ]"<<endl;
			
		}else{
			if (pais == 2){
				cout<<"Su país es: [ Colombia ]"<<endl;
			}else{
				cout<<"Su país es: [ Perú ]"<<endl;
			}
		}
		
		
		
	}else{
		cout<<"Usted es menor de edad y tiene: ["<<edad<<"] "<<endl;
		
		if(sexo == 'm' || sexo == 'M'){
			cout<<"Su sexo es: [ Masculino ]"<<endl;
		}else{
			cout<<"Su sexo es: [ Femenino ]"<<endl;
		}
		
		if (pais == 1){
			cout<<"Su país es: [ México ]"<<endl;
			
		}else{
			if (pais == 2){
				cout<<"Su país es: [ Colombia ]"<<endl;
			}else{
				cout<<"Su país es: [ Perú ]"<<endl;
			}
		}
	}
	
	
	
	
	
	return 0;
}







