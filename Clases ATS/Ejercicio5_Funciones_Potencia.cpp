/*Ejercicio5_Funciones

Escriba una función nombrada funpot() que eleve un número entero 
que se le transmita a una potencia en número entero positivo y despliegue 
el resultado. El número entero positivo deberá ser el segundo valor transmitido
a la función.

*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void capvalor();
void funpot(int x, int y);

int n1,n2;


int main(){
	setlocale(LC_ALL,"");
	
	capvalor();
	cout<<"------------------------\n";
	funpot(n1,n2);
	
	
	system("pause>nul");
	return 0;
}


void capvalor(){
	cout<<"Ingrese un número: ";
	cin>>n1;
	cout<<"Ingrese potencia:  ";
	cin>>n2;	
}


void funpot(int x, int y){
	
	int result;
	
	result = pow(x,y);
	
	cout<<"El resultado de la potencia es: "<<result<<endl;
	
	
}



