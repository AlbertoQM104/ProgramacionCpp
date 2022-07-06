/*
Realice un programa en C++ que calcule el aumento de sueldo para un trabajador según
su categoria: Cat 1 (+15%), Cat 2 (+10%), Cat 3 (+08%), Cat 4 (+07%) 
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	float sueldo = 0, aumento;
	int cat=0;
	
	cout<<"-----------------AUMENTO DE SUELDO-----------------"<<endl;
	cout<<"Ingrese su sueldo: ";
	cin>>sueldo;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"Categoria [1]"<<endl;
	cout<<"Categoria [2]"<<endl;
	cout<<"Categoria [3]"<<endl;
	cout<<"Categoria [4]"<<endl;
	cout<<"Ingrese la categoria que pertenece: ";
	cin>>cat;
	cout<<"---------------------------------------------------"<<endl;
	
	
	switch(cat){
		case 1:
			aumento = sueldo*0.15;
		break;
		
		case 2:
			aumento = sueldo*0.10;
		break;
		
		case 3:
			aumento = sueldo*0.08;
		break;
		
		case 4:
			aumento = sueldo*0.07;
		break;
		
		default: 
			
			cout<<"La categoria ingresada no es la correcta!"<<endl;
	}

	// para no mostrar esta info si la categoria es diferente
	if (cat>0 && cat<5){
		cout<<"Aumento de sueldo: "<<aumento<<endl;
		cout<<"Nuevo sueldo: "<<sueldo+aumento<<endl;
	}else{
		cout<<"";
	}

	return 0;
}





