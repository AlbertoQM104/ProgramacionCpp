/* Ejemplo6 - FOR

Realice un programa que permita hallar el promedio
de los 100 primeros números naturales positivos.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int n,sum=0,i;
	float pro=0;
	
	cout<<"---Promedio de los 100 Primeros Números---"<<endl;
	
	for(i=0;i<=100;i++){
		
		sum += i;
	}
	
	pro=sum/100;
	
	cout<<"El promedio de los 100 primeros Números son: "<<pro<<endl;
	system("pause>nul");
	return 0;
}
