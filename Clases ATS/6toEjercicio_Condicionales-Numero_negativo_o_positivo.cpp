//6toEjercicio_Condicionales
#include <iostream>

using namespace std;

int main(){
	
	float a;
	
	cout<<"Ingrese un numero: ";
	cin>>a;
	cout<<"-------------------------------\n";
	
	
	if(a == 0){
		cout<<"El numero es neutro.";
	}else if(a>0){
		cout<<"El numero es positivo.";
	}else if(a<0){
		cout<<"El numero es negativo.";
	}
	
	
	
	
	return 0;
}




