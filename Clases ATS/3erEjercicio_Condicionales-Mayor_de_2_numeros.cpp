//3erEjercicio_Condicionales
#include <iostream>

using namespace std;

int main(){
	float a,b;
	
	//cout<<"digite 2 numeros: ";cin>>a>>b;  ---otra forma
	cout<<"Ingrese el 1er numero: ";cin>>a;
	cout<<"Ingrese el 2do numero: ";cin>>b;
	cout<<"--------------------------------\n";
	
	
	if(a>b){
		cout<<"El numero mayor es: "<<a;
		cout<<"\nEl numero menor es: "<<b;
	}else if(b>a){
			cout<<"El numero mayor es: "<<b;
			cout<<"\nEl numero menor es: "<<a;
		}else{
			cout<<"Los numeros son Iguales.";
		}
	
	
		
	return 0;
}
