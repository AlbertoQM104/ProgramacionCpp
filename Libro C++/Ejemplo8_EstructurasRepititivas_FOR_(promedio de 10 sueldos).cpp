/* Ejemplo8 - FOR

Leer el sueldo de 10 trabajadores, calcular el promedio de los
sueldos, adem�s reportar a cuanto asciende el sueldo m�s alto.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int i,max=-9999,sueldo;
	float prom;
	
	cout<<"\tPromedio de Sueldos"<<endl;
	
	for(i=1;i<=10;i++){
		
		cout<<"Ingrese el sueldo del empleado N�"<<i<<" : ";
		cin>>sueldo;
		cout<<"-----------------------------------------------------\n";
		
		if(sueldo>max){
			max=sueldo;
		}
		
		prom += sueldo;
		
	}
	
	prom = prom/10;
	
	cout<<"El Promedio de Sueldos    : "<<prom<<endl;
	cout<<"El Sueldo M�ximo asciende : "<<max-prom<<endl;
	cout<<"Sueldo M�ximo             : "<<max<<endl;
	
	system("pause>nul");
	return 0;
}
