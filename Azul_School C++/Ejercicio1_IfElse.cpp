/*
Determinar cuánto dinero puede ahorrarse cada mes para comprar un nuevo televisor.
Introducir los gastos mensuales siguientes: gastos de la casa , gastos de comida, 
gastos de coche, gasolina, seguro, gastos de ropa. Determine que podrá ahorrar
200 pesos cada mes para el tv, cuando tenga al menos 300 pesos disponibles despues de 
pagar todos los gastos
*/

#include <iostream>
#include <locale.h>


using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	float ahorro, ingresos, gastosCasa, gastosComida, gastosCoche, gastosGasolina, gastosSeguro, gastosRopa;
	
	cout<<"Ingrese ingresos: ";
	cin>>ingresos;
	
	cout<<"Ingrese Gastos de Casa: ";
	cin>>gastosCasa;
	
	cout<<"Ingrese Gastos de Comida: ";
	cin>>gastosComida;
	
	cout<<"Ingrese Gastos de Coche: ";
	cin>>gastosCoche;
	
	cout<<"Ingrese Gastos de Gasolina: ";
	cin>>gastosGasolina;
	
	cout<<"Ingrese Gastos de Seguro: ";
	cin>>gastosSeguro;
	
	cout<<"Ingrese Gastos de Ropa: ";
	cin>>gastosRopa;
	
	
	ahorro = ingresos - (gastosCasa+gastosComida+gastosCoche+gastosGasolina+gastosSeguro+gastosRopa);
	
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"El ahorro que obtuvo es de '"<<ahorro<<"'"<<endl;
	
	
	if(ahorro>=300){
		cout<<"Usted si puede ahorrar para comprar su TV!"<<endl;
	}else{
		
		cout<<"Usted no tendra nada T_T"<<endl;
	}
	
	
	return 0;
}












