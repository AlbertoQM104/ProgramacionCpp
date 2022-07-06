/*
Escriba un programa en C++ que calcule la edad que tendrá el día de su cumpleaños
del año 2020.
Asigne valores apropiados a su edad y al año actual
*/


#include <iostream>

using namespace std;

int main(){
	
	int val1 = 24, fechaA = 2022, fechaF = 2020, edadF=0; 
	
	if((fechaF-fechaA)>0){
		edadF = val1 + (fechaF-fechaA);
	}else{
		edadF = val1 + (fechaF-fechaA);
	}
	
	cout<<"Una persona con 24 años de edad en 2022 tenia en el 2020..."<<endl;
	cout<<"La edad que tenias o tienes en el 2020 es: "<<edadF<<endl;
	
	
	return 0;
}


