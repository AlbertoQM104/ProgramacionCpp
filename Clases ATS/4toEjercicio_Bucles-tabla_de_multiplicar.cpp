//4toEjercicio_Bucles

#include <iostream>

using namespace std;

int main(){
	
	int x, i;
	
	do{
		cout<<"Ingrese un numero del 1 al 10: ";
		cin>>x;
	}while((x>10) || (x<1)); //enfoca el true para salir
	
	for(i=1; i<=20;i++){
		cout<<i<<". "<<x<<"x"<<i<<" = "<<i*x<<endl;		
	}
	
	
	system("pause>nul");
	return 0;
}
