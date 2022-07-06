/*9noEjercicio_Bucles

Escriba un programa que calcule x^y, donde
tanto x como y son enteros positivos, sin utilizar la
funcion pow. 
*/

#include <iostream>

using namespace std;

int main(){
	
	int x,y,i,result;
	
	cout<<"Ingrese el valor de X: ";
	cin>>x;
	cout<<"Ingrese el valor de Y: ";
	cin>>y;
	cout<<"---------------------------------\n";
	
	if((x!=0) && (y!=0)){
	for(i=1;i<=y;i++){
		
		result *= x;				
	}
		cout<<"El resultado de x^y es : "<<result;
		
	}else if((x!=0) && (y==0)){
		result = 1;
		cout<<"El resultado de x^y es : "<<result;
	
	}else if((x==0) && (y==0)){
		cout<<"Valor indeterminado.";
	
	}
	
	
	
	system("pause>nul");
	return 0;
}
