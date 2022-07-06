/*16voEjercicio_Cadena

Transformar una cadena a numeros - Funcion atoi() y atof()

*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	
	char cad[100];
	//int n,n1;
	float n,n1;
	
	cout<<"Ingrese una cadena numerica para transformar: ";
	cin.getline(cad,100,'\n');
	cout<<"----------------------------------------------------"<<endl;
	//n = atoi(cad);
	n = atof(cad);
	n1= n+1;
	cout<<"El numero es: "<<n<<endl;
	cout<<n1;
	
	
	
	system("pause>nul");
	return 0;
}


