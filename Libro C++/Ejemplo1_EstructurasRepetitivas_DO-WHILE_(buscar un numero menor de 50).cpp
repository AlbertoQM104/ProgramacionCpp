/* Ejemplo1 - DO-WHILE (se ejecuta 1 vez como minimo)

Construye un programa, que permita la validadción
de un número entero positivo menor a 50. El programa no
finalizará hasta que un dato válido sea ingresado.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int num;
	
	cout<<"-----Número Menor que 50------\n";
	
	do{
	
	cout<<"Ingrese un número: ";
	cin>>num;
	cout<<"-----------------------------\n";
		
		
	}while(num>50 || num<0);
	
	cout<<"Se pudo encontrar: \n";
	cout<<num<<endl;
	
	system("pause>nul");
	return 0;
}
