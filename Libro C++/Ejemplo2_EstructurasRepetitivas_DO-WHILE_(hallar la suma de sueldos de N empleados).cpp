/* Ejemplo2 - DO-WHILE (se ejecuta 1 vez como minimo)

Realice un programa que permita hallar la nómina de N 
empleados de una empresa.
NÓMINA = SUMA DE SUELDOS
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int nemp,sueldo,resultado=0;
	int i=0;
	
	cout<<"-----------HALLAR LA NOMINA-----------"<<endl;
	cout<<"Ingrese la cantidad de empleados: ";
	cin>>nemp;
	cout<<"-----------------------------------\n";
	system("cls");
	
	
	do{
		cout<<"Ingrese el sueldo del empleado ["<<i+1<<"] : ";
		cin>>sueldo;
		cout<<endl;
		resultado += sueldo;
		i++;
		
	}while(i<nemp);  
	
	cout<<"--------------------------------------\n";
	cout<<"La nómina es: "<<resultado<<endl;
	
	
	
	system("pause>nul");
	return 0;
}
