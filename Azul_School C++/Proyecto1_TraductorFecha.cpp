/*
Escriba un programa que lea tres valores enteros que represente el mes, el día y el año 
con cuatro dígitos. El programa deberá mostrar la fecha en uno de los formatos siguientes, 
dependiendo de la selección del usuario. Si el usuario introduce 1, se mostrara el mes con palabra 
(“Enero”), el día como un entero (11) y el año (1999). Si se introduce un 2, se mostrara el mes 
con una abreviatura de tres letras (“Ene”), el día como un entero (11) y el año (1999). 
Si se produce un 3, se mostrara el mes como un entero (01), el día como un entero (11) y 
el año (1999). Solo usar lo expuesto en temas vistos previamente. 
*/


#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int val1 = 0 , val2 = 0, val3 = 0, opc = 0;
	string mesL, mesC;
	
	
	cout<<"---------------------------------Traductor de Fecha---------------------------------"<<endl;
	cout<<"Por favor introduzca una fecha (mes, día, año): "<<endl;
	cout<<"Mes: ";
	cin>>val1;
	cout<<"Día: ";
	cin>>val2;
	cout<<"Año: ";
	cin>>val3;
	cout<<"------------------------------------------------------------------------------------"<<endl;
	cout<<"¿Cómo le gustaria mostrar la fecha?"<<endl;
	cout<<"Mes completo, día, año (Enero 11, 1999): Ingrese 1."<<endl;
	cout<<"Mes abreviado, día, año (Ene. 11, 1999): Ingrese 2."<<endl;
	cout<<"Mes en cifra/día/año (01/11/1999): Ingrese 3."<<endl;
	cout<<"************************************************************************************"<<endl;
	cout<<"Opción: ";
	cin>> opc;
	
	switch(val1){
		case 1:
		mesL = "Enero";
		mesC = "Ene"; break;
		
		case 2:
		mesL = "Febrero";
		mesC = "Feb"; break;
		
		case 3:
		mesL = "Marzo";
		mesC = "Mar"; break;
		
		case 4:
		mesL = "Abril";
		mesC = "Abr"; break;
		
		case 5:
		mesL = "Mayo";
		mesC = "May"; break;
		
		case 6:
		mesL = "Junio";
		mesC = "Jun"; break;
		
		case 7:
		mesL = "Julio";
		mesC = "Jul"; break;
		
		case 8:
		mesL = "Agosto";
		mesC = "Ago"; break;
		
		case 9:
		mesL = "Septiembre";
		mesC = "Sep"; break;
		
		case 10:
		mesL = "Octubre";
		mesC = "Oct"; break;
		
		case 11:
		mesL = "Noviembre";
		mesC = "Nov"; break;
		
		case 12:
		mesL = "Diciembre";
		mesC = "Dic"; break;
		
		default: 
		cout<<"Error de Fecha!"<<endl;break;
	}
	
	
	switch(opc){
		case 1: 
		cout<<"La fecha traducida es: "<<mesL<<" "<<val2<<", "<<val3;break;
		
		case 2: 
		cout<<"La fecha traducida es: "<<mesC<<". "<<val2<<", "<<val3;break;
		
		case 3: 
		cout<<"La fecha traducida es: "<<val1<<"/"<<val2<<"/"<<val3;break;
		
		default: 
		cout<<"El número ingresado no es valido!"<<endl;break;
	}
	
	
	cout<<endl;
	
	
	
	return 0;
}


