/* Ejemplo8 Seleccion Multiple - SWITCH

Construya un programa, que dado como datos la categoria y 
el sueldo de un trabajador, calcule el aumento correspondiente 
teniendo en cuenta la siguiente tabla. 
		CATEGORIA			  AUMENTO
			1					15%
			2					10%
			3					8%
			4					5%
 
*/

#include <iostream>

using namespace std;

int main(){
	
	int cat;
	float sueldo,aumento,r;
	
	
	cout<<"Ingrese la categoria [1-2-3-4]: ";
	cin>>cat;
	cout<<"Ingrese el sueldo que gana: ";
	cin>>sueldo;
	
	switch(cat){
		
		case 1:aumento=sueldo*0.15 ;break;
		case 2:aumento=sueldo*0.10 ;break;
		case 3:aumento=sueldo*0.08 ;break;
		case 4:aumento=sueldo*0.05 ;break;	
		default: cout<<"La categoria no es valida.";break;
		
	}
	r=aumento+sueldo;
	
	cout<<"Categoria: "<<cat;
	cout<<"El monto final del trabajador es: "<<r<<endl;
	
	
	system("pause>nul");
	return 0;
}

