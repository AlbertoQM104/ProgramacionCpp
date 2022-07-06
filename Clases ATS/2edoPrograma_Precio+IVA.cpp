// 2ejercicio
#include <iostream>

using namespace std;

int main(){
	float prd,iva=0.18,result=0;
	
	cout<<"Ingresa Precio del Producto: ";
	cin>>prd;
	
	result=prd+prd*iva;
	
	cout<<"\nPrecio mas IVA: "<<result;	
	
	
	
	return 0;
}
