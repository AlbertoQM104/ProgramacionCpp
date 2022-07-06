//14voEjercicio_Condicionales

#include <iostream>

using namespace std;

int main(){
	
	int opc,num,rest;
	
	cout<<"\tBienvenido al Menu\n";
	cout<<"1. Cubo del numero\n";
	cout<<"2. Numero par o impar\n";
	cout<<"3. Salir\n";
	cout<<"Opcion: ";
	cin>>opc;
	cout<<"-------------------------\n";
	
	switch(opc){
		case 1:
			cout<<"Ingrese un numero: ";
			cin>>num;
			rest=num*num;
			cout<<"El cubo es: "<<rest;
			break;		 
		case 2:
			cout<<"Ingrese un numero: ";
			cin>>num;
			
			if(num%2==0){
				cout<<"El numero es par.";
			}else {
				cout<<"El numero es impar.";
			}
			break;
		case 3:
			cout<<"Gracias por ver el Menu.";break;
	}
	
	
	
	
	
	return 0;
}
