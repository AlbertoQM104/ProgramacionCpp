//9noEjercicio_Condicionales

#include <iostream>

using namespace std;

int main(){
		
	int a;
	
	cout<<"Introdusca numero: ";
	cin>>a;
	cout<<"------------------------------\n";
	
	if((a>=18) && (a<=25)){
		cout<<"El numero "<<a<<" esta dentro del rango [18-25]";
	}else{
		cout<<"El numero no esta dentro del rango.";
	}
	
	
	return 0;
}
