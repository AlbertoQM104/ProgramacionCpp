/* Ejemplo5 - WHILE

Escriba un programa que dado un grupo de n�meros
naturales positivos, calcule e imprima el cubo de 
estos n�meros.
SOLO NUMEROS
*/

#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
		
	int num=1;
	
	cout<<"-----------Cubo de los N�meros-----------\n";
	
	
	while(num>0){
		
		cout<<"Ingrese un n�mero: ";
		cin>>num;
				
		cout<<endl<<"Cubo del N�mero "<<num<<" : "<<pow(num,3)<<endl;
		cout<<"---------------------------\n";
		
		
	}

	
	
	system("pause>nul");
	return 0;
}
