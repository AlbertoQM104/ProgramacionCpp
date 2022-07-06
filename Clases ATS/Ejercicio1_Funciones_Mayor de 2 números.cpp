/*Ejercicio1_Funciones

mayor de 2 números con  funciones

*/

#include<iostream>
#include<locale.h>

using namespace std;

//prototipo de función
int encontrarMax(int x, int y);



int main(){
	setlocale(LC_ALL,"");
	
	int n1,n2;
	
	cout<<"Ingrese 1er número: ";
	cin>>n1;
	cout<<"Ingrese 2do número: ";
	cin>>n2;
	cout<<endl;
	
	cout<<"--------------------------------------\n";
	cout<<"El número mayor es: "<<encontrarMax(n1,n2)<<endl;
	
	system("pause>nul");
	return 0;
}


//Definición de Función

int encontrarMax(int x, int y){
	
	int numMax;
	
	if(x>y){
		numMax = x;
		
	}else{
		numMax = y;
	}
	
	return numMax;
	
}





