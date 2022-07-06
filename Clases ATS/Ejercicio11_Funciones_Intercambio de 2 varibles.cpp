/*Ejercicio11_Funciones

Intercambio de 2 variables por paso de parámetros por 
referencia


*/

#include <iostream>
#include <locale>

using namespace std;

void intercambio(int&, int&);




int main(){
	setlocale(LC_ALL,"");
	
	int v1,v2; 
	
	cout<<"Ingrese el 1er valor: ";
	cin>>v1;
	cout<<"Ingrese el 2do valor: ";
	cin>>v2;
	
	intercambio(v1,v2);
	cout<<"---------------------------------------\n";
	cout<<endl;
	cout<<" El valor 1 es: "<< v1<<endl;
	cout<<" El valor 2 es: "<< v2<<endl;
	
	system("pause>nul");
	return 0;
}




void intercambio(int& num1, int& num2){
	
	int aux;
		
	aux = num1;
	num1=num2;
	num2= aux;	
	
	
}
