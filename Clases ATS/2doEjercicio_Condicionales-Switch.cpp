//2doEjercicio_Condicionales
#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout<<"Digite un numero entre 1-5: ";
	cin>>num;
	
	switch(num){
		case 1: cout<<"Es el numero uno.";break;
		case 2: cout<<"Es el numero dos.";break;
		case 3: cout<<"Es el numero tres.";break;
		case 4: cout<<"Es el numero cuatro.";break;
		case 5: cout<<"Es el numero cinco.";break;
		default: cout<<"no esta en el rango.";break; 
	}
	
	return 0;
}
