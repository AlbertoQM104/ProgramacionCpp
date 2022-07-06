//4toEjercicio_Condicionales

#include <iostream>

using namespace std;

int main(){
	
	float n1,n2,n3;
	
	cout<<"Ingrese el 1er numero: ";cin>>n1;
	cout<<"Ingrese el 2do numero: ";cin>>n2;
	cout<<"Ingrese el 3er numero: ";cin>>n3;
	cout<<"--------------------------------\n";
	
	if(n1==n2&&n3) {
		cout<<"Los numeros son IGUALES.";
	}else if((n1>n2) && (n2>n3)){
		cout<<"El numero mayor es: "<<n1;
		cout<<"\nEl numero menor es: "<<n3;
	}else if((n1>n2) && (n3>n2) && (n1>n3)){
		cout<<"El numero mayor es: "<<n1;
		cout<<"\nEl numero menor es: "<<n2;
	}else if((n2>n3) && (n3>n1)){
		cout<<"El numero mayor es: "<<n2;
		cout<<"\nEl numero menor es: "<<n1;
	}else if((n2>n3) && (n1>n3) && (n2>n1)){
		cout<<"El numero mayor es: "<<n2;
		cout<<"\nEl numero menor es: "<<n3;
	}else if((n3>n1) && (n1>n2)){
		cout<<"El numero mayor es: "<<n3;
		cout<<"\nEl numero menor es: "<<n2;
	}else if((n3>n1) && (n2>n1) && (n3>n2)){
		cout<<"El numero mayor es: "<<n3;
		cout<<"\nEl numero menor es: "<<n1;
	}

	
	return 0;
}



