/*Ejercicio5_Funciones

Escriba una funci�n nombrada funpot() que eleve un n�mero entero 
que se le transmita a una potencia en n�mero entero positivo y despliegue 
el resultado. El n�mero entero positivo deber� ser el segundo valor transmitido
a la funci�n.

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
	cout<<"Ingrese un n�mero: ";
	cin>>n1;
	cout<<"Ingrese potencia:  ";
	cin>>n2;	
}


void funpot(int x, int y){
	
	int result;
	
	result = pow(x,y);
	
	cout<<"El resultado de la potencia es: "<<result<<endl;
	
	
}



