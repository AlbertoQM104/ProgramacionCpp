/*Ejercicio2_Funciones

Plantilla
Sacar el valor absoluto de un número 


*/


#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo si no dan valor
template <class TIPOD>
void mostrarAbs(TIPOD numero);


int main(){
	setlocale(LC_ALL,"");
	
	int a= -4;
	float b=-20.11;
	double c=-231.13456;
	
	mostrarAbs(a);
	mostrarAbs(b);
	mostrarAbs(c);
	
	
	
	system("pause>nul");
	return 0;
}




template <class TIPOD>
void mostrarAbs(TIPOD numero){
	
	if(numero<0){
		numero = numero * -1;
	}
	
	cout<<"El valor absoluto del numero es : "<<numero<<endl;
	
	
}

