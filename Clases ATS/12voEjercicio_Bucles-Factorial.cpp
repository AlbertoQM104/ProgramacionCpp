/*12voEjercicio_Bucles

Escriba un program que calcule el valor de : 1*2*3*...*n 
*/

#include <iostream>

using namespace std;

int main(){
	
	int num,i,result=1;
	
	cout<<"Ingrese valor de a ser factorial: ";
	cin>>num;
	cout<<"----------------------------------------\n";
	
	for(i=1;i<=num;i++){
		result= result * i;
	}
	
	cout<<"El resultado de "<<num<<"! es : "<<result;
	
	system("pause>nul");
	return 0;
}


