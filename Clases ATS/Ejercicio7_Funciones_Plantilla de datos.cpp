/*Ejercicio7_Funciones

Escriba una plantilla de función llamada despliegue() que despliegue 
el valor del argumento único que se le transmite cuando es invocado la
función.

*/

#include<iostream>
#include<conio.h>

using namespace std;


template <class TIPOD>
void despliegue(TIPOD x);

int   n1=4;
float n2=15.67;
double n3=567.7889;
char n4='s';


int main(){
	setlocale(LC_ALL,"");
	
	despliegue(n1);
	cout<<endl;
	despliegue(n2);
	cout<<endl;
	despliegue(n3);
	cout<<endl;
	despliegue(n4);
	cout<<endl;
	
	
	system("pause>nul");
	return 0;
}


template <class TIPOD>
void despliegue(TIPOD x){
	
	cout<<"El dato es: "<<x<<endl;
	
}




