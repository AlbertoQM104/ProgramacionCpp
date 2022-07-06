/* Ejemplo10 - FOR

Calcular la suma siguiente:
100 + 98 + 96 + ... + 0 en este orden
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int nmax=100,i,sum=0;
	
	cout<<"------Mostrar Suma de Números Inverso------\n";
	
	for(i=nmax;i>=0;i -=2){
		
		sum = i + sum;
		
	}
	
	cout<<"-----------------------------------------------\n";
	cout<<"La suma resulta: "<<sum<<endl;
	
	
	
	system("pause>nul");
	return 0;
}
