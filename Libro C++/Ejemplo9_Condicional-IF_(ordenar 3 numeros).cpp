/* Ejemplo9 Condicional IF

Dados los datos a,b y c, que representan números enteros diferentes,
poder ordenarlos de forma descendente.
 
*/

#include <iostream>

using namespace std;

int main(){
	
	int a,b,c;
	
	cout<<"Ingrese el 1er valor: ";
	cin>>a;
	cout<<"Ingrese el 1er valor: ";
	cin>>b;
	cout<<"Ingrese el 1er valor: ";
	cin>>c;
	cout<<"-------------------------------------\n";
	cout<<"Forma Descendente:\n";
	
	if(a>b){
		if(b>c){
			cout<<a<<"-"<<b<<"-"<<c<<endl;
		}else{
			if(a>c){
				cout<<a<<"-"<<c<<"-"<<b<<endl;
			}else{
				cout<<c<<"-"<<a<<"-"<<b<<endl;
			}
		}
	}else{
		if(a>c){
			cout<<b<<"-"<<a<<"-"<<c<<endl;
		}else{
			if(b>c){
				cout<<b<<"-"<<c<<"-"<<a<<endl;
			}else{
				cout<<c<<"-"<<b<<"-"<<c<<endl;
			}
		}
	}
	
	
	system("pause>nul");
	return 0;
}
