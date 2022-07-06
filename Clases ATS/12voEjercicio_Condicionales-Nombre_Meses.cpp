//12voEjercicio_Condicionales

#include<iostream>

using namespace std;

int main(){
	
	int mes;
	
	cout<<"Ingrese un numero del [1-12]: ";
	cin>>mes;
	cout<<"-------------------------------------\n";
	cout<<"El mes es: \n";
	
	switch(mes){
		case 1:cout<<"ENERO";break;
		case 2:cout<<"FEBRERO";break;
		case 3:cout<<"MARZO";break;
		case 4:cout<<"ABRIL";break;
		case 5:cout<<"MAYO";break;
		case 6:cout<<"JUNIO";break;
		case 7:cout<<"JULIO";break;
		case 8:cout<<"AGOSTO";break;
		case 9:cout<<"SEPTIEMBRE";break;
		case 10:cout<<"OCTUBRE";break;
		case 11:cout<<"NOMBRE";break;
		case 12:cout<<"DICIEMBRE";break;
	}
	
	
	
	return 0;
}
