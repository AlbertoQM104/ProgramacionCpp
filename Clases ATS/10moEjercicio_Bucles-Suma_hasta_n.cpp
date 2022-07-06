/*10moEjercicio_Bucles

Escriba un program que calcule el valor de : 1+2+3+...+n 
*/

#include <iostream>

using namespace std;

int main(){
	
	int num,i,sum=0;
	
	cout<<"Ingrese hasta que valor quiere la suma: ";
	cin>>num;
	cout<<"----------------------------------------------\n";
	
	for(i=1;i<=num;i++){
		
		sum +=i;
	}
		
	cout<<"La suma es: "<<sum;
	
	
	
	
	system("pause>nul");
	return 0;
}








