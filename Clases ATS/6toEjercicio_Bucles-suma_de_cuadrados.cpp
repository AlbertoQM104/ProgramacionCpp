//6toEjercicio_Bucles

#include <iostream>

using namespace std;

int main(){
	
	int i,sum=0;
	
	for(i=1;i<=10;i++){
		
		cout<<"- "<<i<<" al cuadrado: "<<i*i<<endl;
		sum += i*i;
	}
	
	cout<<"-----------------------------\n";
	cout<<"La suma de los 10 primeros cuadrados es: "<<sum;
	
	system("pause>nul");
	return 0;
}

//realice un programa que calcule y muestre en la salida
//estandar la suma de los cuadrados de los 10
//primeros enteros mayores de 0
