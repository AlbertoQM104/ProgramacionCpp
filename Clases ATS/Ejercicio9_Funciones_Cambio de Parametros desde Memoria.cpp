/*Ejercicio9_Funciones_Pasos de parametro por referencia

CAMBIAR DESDE MEMORIA

*/

#include<iostream>
#include<conio.h>

using namespace std;

void valnuevo(int&, int&);

int main(){
	setlocale(LC_ALL,"");
	
	int n1,n2;
	
	cout<<"Ingrese 1er número: ";
	cin>>n1;
	cout<<"Ingrese 2do número: ";
	cin>>n2;
	
	valnuevo(n1,n2);
	
	cout<<"---------------------------------\n";
	cout<<"El nuevo valor del 1er número es: "<<n1<<endl;
	cout<<"El nuevo valor del 2do número es: "<<n2<<endl;
	
	system("pause>nul");
	return 0;
}


void valnuevo(int& x, int& y){
	
	cout<<"El valor del 1er número es: "<<x<<endl;
	cout<<"El valor del 2do número es: "<<y<<endl;
	
	x=11;
	y=22;
}



