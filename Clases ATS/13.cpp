/*13voEjercicio_Bucles

Escriba un program que calcule el valor de : 2^1+2^2+...2^n
*/

#include <iostream>

using namespace std;

int main(){
	
	int i,num,sum=0;
	
	cout<<"Ingrese un numero: ";
	cin>>num;
	cout<<"------------------------------\n";
	
	if(num !=0){
	for(i=1;i<=num;i++){
		
		sum = sum + (2*i);
		
	}	
	
	cout<<"El resultado es :"<<sum;
	
	}else {
		cout<<"Dato no permitido.";
	}
	
	
	
	
	system("pause>nul");
	return 0;
}


