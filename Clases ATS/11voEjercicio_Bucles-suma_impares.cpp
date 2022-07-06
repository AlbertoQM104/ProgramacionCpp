/*11voEjercicio_Bucles

Escriba un program que calcule el valor de : 1+3+5+...+2n-1 
*/

#include <iostream>

using namespace std;

int main(){
	
	int num,i,sum=0;
	
	cout<<"Ingrese hasta que valor quiere la suma: ";
	cin>>num;
	cout<<"----------------------------------------------\n";
	
	for(i=1;i<=(2*num)-1;i+=2){
		
		sum +=i;
	}
	
	cout<<"La suma es: "<<sum;
	
	
	system("pause>nul");
	return 0;
}
