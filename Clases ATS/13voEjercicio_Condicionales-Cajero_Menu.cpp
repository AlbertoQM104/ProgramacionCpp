//13voEjercicio_Condicionales

#include <iostream>

using namespace std;

int main(){
	
	int saldo_inicial=1000,opc;
	float ing,ret;
	
	cout<<"\tBienvenido a su Cajero Virtual\n";
	cout<<"1. Ingresar dinero en cuenta\n";
	cout<<"2. Retirar dinero de la cuenta\n";
	cout<<"3. Salir\n";
	cout<<"Opcion: "; 
	cin>>opc;
	cout<<"-------------------------------\n";
	
	switch(opc){
		case 1:
		cout<<"Cuanto ingresara? "; 
		cin>>ing;
		saldo_inicial +=ing;
		cout<<"Nuevo monto: "<<saldo_inicial;break;
		case 2:
		cout<<"Cuanto quiere retirar? ";
		cin>>ret;
		if(ret>saldo_inicial){
			cout<<"No se puede retirar ese monto.";
		}else{
		saldo_inicial -=ret; 
		cout<<"Nuevo monto: "<<saldo_inicial;
		};break;
		case 3:cout<<"Gracias por su visita.";break;
	}
	
	
	return 0;
}
