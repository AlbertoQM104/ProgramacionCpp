/* Ejemplo7 Seleccion Multiple - SWITCH

Realice un programa que ingresando dos números
enteros nos permita realizar las cuatro operaciones
básicas.

*/

#include <iostream>

using namespace std;

int main(){
	
	int n1,n2;
	char op;
	float sum,res,mul,div;
	
	cout<<"Ingrese 1er numero: ";
	cin>>n1;
	cout<<"Ingrese 2do numero: ";
	cin>>n2;
	cout<<"-----------------------------------------\n";
	cout<<"Operador a Elegir (+) (-) (*) (/) : ";
	cin>>op;
	
	switch (op){
		case '+':sum = n1 + n2;
				 cout<<"Suma: "<<sum<<endl;break;
		case '-':res = n1 - n2;
			     cout<<"Resta: "<<res<<endl;break;
		case '*':mul = n1 * n2;
				 cout<<"Multiplicación: "<<mul<<endl;break;
		case '/':div = n1/n2 ;
				 cout<<"Division: "<<div<<endl;break;
		default: cout<<"El caracter ingresado no es valido.\n";
		
		
	}
	
		
	
	system("pause>nul");
	return 0;
}
