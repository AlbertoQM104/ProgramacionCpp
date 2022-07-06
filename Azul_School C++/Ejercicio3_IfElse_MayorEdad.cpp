/*
Mayor o menor de edad.
*/


#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int edad = 0;
	
	cout<<"------------------ ERES MAYOR DE EDAD? ------------------"<<endl;
	cout<<"Ingrese la edad que tiene: ";
	cin>>edad;
	
	if (edad >= 18){
		cout<<"Tu edad es "<<edad<<" años y eres MAYOR DE EDAD!"<<endl;
	}else{
		cout<<"Eres menor de edad y tienes: ["<<edad<<"] años"<<endl;
	}
	
	
	return 0;
}










