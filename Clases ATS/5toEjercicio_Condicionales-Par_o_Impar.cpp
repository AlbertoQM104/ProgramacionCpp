//5toEjercicio_Condicionales
#include <iostream>

using namespace std;

int main(){
	
	int a, res;
	
	cout<<"Ingrese un numero: ";
	cin>>a;
	cout<<"---------------------------\n";
	
	res= a%2; //no es necesario el res - pero por orden
	
	if(a == 0){
		cout<<"El numero es 0.";
	}else if(res == 0){
		cout<<"El numero "<<a<<" es par.";
	}else {
		cout<<"El numero "<<a<<" es impar.";
	}
	
	return 0;
}



