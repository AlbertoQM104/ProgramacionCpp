/*13voEjercicio_Bucles

Escriba un program que calcule el valor de : 1!+2!+3!+...+n! 
*/

#include <iostream>

using namespace std;

int main(){
	
	int i,num,result=0,aux=1;
	
	cout<<"Ingrese valor para la suma de factoriales: ";
	cin>>num;
	cout<<"------------------------------------------------\n";
	
	for(i=1;i<=num;i++){
		aux= aux*i;
		result += aux;
	}
	
	cout<<"Resultado de la suma: "<<result;
	
	
	system("pause>nul");
	return 0;
}
