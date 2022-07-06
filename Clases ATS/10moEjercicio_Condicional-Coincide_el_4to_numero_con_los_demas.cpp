//10moEjercicio_Condicional

#include<iostream>

using namespace std;

int main(){
	
	int a,b,c,x;
	
	cout<<"Ingrese 1er Numero: ";cin>>a;
	cout<<"Ingrese 2do Numero: ";cin>>b;
	cout<<"Ingrese 3er Numero: ";cin>>c;
	cout<<"Ingrese 4to Numero: ";cin>>x;
	cout<<"-----------------------------\n";
	cout<<"El 4to Numero coincide o no ?\n";
	cout<<"-----------------------------\n";
	
	//el orden de ejecucion de los if tienen que ir de mayor a menor.
	if((a==b)&&(b==c)&&(c==x)){
		cout<<"Todos los numeros son iguales.";
	}else if((a==x)&&(b==x)){
		cout<<"Coincide con el 1er y 2do numero.";
	}else if((b==x)&&(c==x)){
		cout<<"Coincide con el 2do y 3er numero.";
	}else if((a==x)&&(c==x)){
		cout<<"Coincide con el 1er y 3er numero.";
	}else if(a==x){
		cout<<"Coincide con el 1er numero.";
	}else if(b==x){
		cout<<"Coincide con el 2do numero.";
	}else if(c==x){
		cout<<"Coincide con el 3er numero.";
	}else{
		cout<<"No coincide con ningun numero.";
	}
	
	
	
	return 0;
}

