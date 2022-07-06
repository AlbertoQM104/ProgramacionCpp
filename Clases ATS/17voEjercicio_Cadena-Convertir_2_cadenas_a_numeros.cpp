/*17voEjercicio_Cadena

Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y
otro real, convertirlos a sus respectivos valores y por ultimo
sumarlos.

*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	
	char a[100],b[100];
	int n1;
	float n2,r;
	
	cout<<"Ingrese una cadena numerica entera: ";
	cin.getline(a,100,'\n');
	cout<<"Ingrese una cadena numerica real  : ";
	cin.getline(b,100,'\n');
	cout<<"----------------------------------------------\n";
	
	n1 = atoi(a);
	n2 = atof(b);
	
	r = n1+n2;
	
	cout<<"Respuesta de la Suma :\n";
	cout<<r;
	
	
	
	system("pause>nul");
	return 0;
}
