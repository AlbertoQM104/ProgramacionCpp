/*8voEjercicio_Bucles

Escriba un programa que lea valores enteros
hasta que se introduzca un valor en el rango [20-30]
o se introduzca el valor 0. El programa debe entregar
la suma de los valores mayores a 0 introducidos.
*/

#include <iostream>

using namespace std;

int main(){
	
	float num,sum=0;
	
	do{
	cout<<"Ingrese valor: ";
	cin>>num;
	
	sum +=num;
	
	}while(((num<=20) || (num>=30)) && (num!=0));
	
	cout<<"--------------------------------------\n";
	cout<<"La suma de los valores mayores a 0 es: "<<sum;
	
	system("pause>nul");
	return 0;
}
