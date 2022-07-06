/* Ejemplo1 - DO-WHILE (se ejecuta 1 vez como minimo)

Construye un programa, que permita la validadci�n
de un n�mero entero positivo menor a 50. El programa no
finalizar� hasta que un dato v�lido sea ingresado.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int num;
	
	cout<<"-----N�mero Menor que 50------\n";
	
	do{
	
	cout<<"Ingrese un n�mero: ";
	cin>>num;
	cout<<"-----------------------------\n";
		
		
	}while(num>50 || num<0);
	
	cout<<"Se pudo encontrar: \n";
	cout<<num<<endl;
	
	system("pause>nul");
	return 0;
}
