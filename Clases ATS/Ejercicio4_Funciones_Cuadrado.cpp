/*Ejercicio4_Funciones

Escriba una función llamada al_cuadrado() que calcule el cuadrado del 
valor que se le transmite y despliegue el resultado. La función deberá
ser capaz de elevar al cuadrado números flotantes.

*/

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void ingrvalor();
void al_cuadrado(float x);

float n1;

int main(){
	setlocale(LC_ALL,"");
	
	ingrvalor();
	cout<<"-------------------------\n";
	al_cuadrado(n1);
	
	
	system("pause>nul");
	return 0;
}



void ingrvalor(){
	cout<<"Ingrese un número: ";
	cin>>n1;
	
}

void al_cuadrado(float x){
	float result;
	
	result = pow(x,2);
	
	cout<<"El cuadrado de "<<x<<" es : "<<result<<endl;
	
	
}


