/*
Escriba un programa que lea tres valores enteros que represente el mes, el d�a y el a�o 
con cuatro d�gitos. El programa deber� mostrar la fecha en uno de los formatos siguientes, 
dependiendo de la selecci�n del usuario. Si el usuario introduce 1, se mostrara el mes con palabra 
(�Enero�), el d�a como un entero (11) y el a�o (1999). Si se introduce un 2, se mostrara el mes 
con una abreviatura de tres letras (�Ene�), el d�a como un entero (11) y el a�o (1999). 
Si se produce un 3, se mostrara el mes como un entero (01), el d�a como un entero (11) y 
el a�o (1999). Solo usar lo expuesto en temas vistos previamente. 
*/


#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int val1 = 0 , val2 = 0, val3 = 0, opc = 0;
	string mesL, mesC;
	
	
	cout<<"---------------------------------Traductor de Fecha---------------------------------"<<endl;
	cout<<"Por favor introduzca una fecha (mes, d�a, a�o): "<<endl;
	cout<<"Mes: ";
	cin>>val1;
	cout<<"D�a: ";
	cin>>val2;
	cout<<"A�o: ";
	cin>>val3;
	cout<<"------------------------------------------------------------------------------------"<<endl;
	cout<<"�C�mo le gustaria mostrar la fecha?"<<endl;
	cout<<"Mes completo, d�a, a�o (Enero 11, 1999): Ingrese 1."<<endl;
	cout<<"Mes abreviado, d�a, a�o (Ene. 11, 1999): Ingrese 2."<<endl;
	cout<<"Mes en cifra/d�a/a�o (01/11/1999): Ingrese 3."<<endl;
	cout<<"************************************************************************************"<<endl;
	cout<<"Opci�n: ";
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
		cout<<"El n�mero ingresado no es valido!"<<endl;break;
	}
	
	
	cout<<endl;
	
	
	
	return 0;
}


