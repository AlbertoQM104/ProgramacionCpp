/* Ejemplo12 Condicional IF

Escribir un programa que permita introducir por teclado
tres letras y responda si existen al menos dos letras iguales
*/

#include <iostream>

using namespace std;

int main(){
	
	char a,b,c;
	
	cout<<"Ingrese la 1ra letra: ";
	cin>>a;
	cout<<"Ingrese la 2da letra: ";
	cin>>b;
	cout<<"Ingrese la 3ra letra: ";
	cin>>c;
	cout<<"---------------------------------------\n";
	
	// utilizamos la función [isalpha()]---> solo acepta letras 
	if( isalpha(a) && isalpha(b) && isalpha(c) ){
		
		if(a!=b && b!=c && a!=c){
			cout<<"Las letras son diferentes.\n";
		}else{
			if(a==b && b==c){
				cout<<"Las letras son IGUALES\n";
			}else{
				if(a==c || b==c || b==a ){
					cout<<"Al menos 2 de las letras son iguales.\n";
				}
			}
		}
		
	}else{
		cout<<"Algun valor no es valido.\n";
	}
	
	
	
	system("pause>nul");
	return 0;
}
