/* Ejercicio3_Funciones

Escribe una funci�n llamada mult() que acepte 2 n�meros en punto flotante 
como par�metros, multiplique estos dos n�meros y despliegue el resultado.

*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void mult(float n1, float n2); //no retorna

float a,b; //Variables globales


int main(){
	setlocale(LC_ALL,"");
	
	
	pedirDatos();
	cout<<"-----------------------------------------------\n";
	mult(a,b);
	
		
	system("Pause>nul");
	return 0;
}



void pedirDatos(){
	cout<<"Ingrese 1er n�mero: ";
	cin>>a;
	cout<<"Ingrese 2do n�mero: ";
	cin>>b;
	cout<<endl;
}


void mult(float n1, float n2){
	
	float result;
	
	result = n1*n2;
	
	cout<<"La multiplicaci�n es: "<< result<<endl;
	
}

