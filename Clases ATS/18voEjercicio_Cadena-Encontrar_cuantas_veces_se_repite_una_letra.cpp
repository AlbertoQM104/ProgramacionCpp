/*18voEjercicio_Cadena

Realice un programa que lea una cadena de caracteres de la entrada
estándar y muestre en la salida estándar cuántas ocurrencias de 
cada vocal existen en la cadena.

*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cad[50];
	int v_a=0,v_e=0,v_i=0,v_o=0,v_u=0;
	int i;
	
	cout<<"Ingrese un frase: ";
	cin.getline(cad,50,'\n');
	cout<<"--------------------------------------\n";
	
	for(i=0;i<50;i++){
		
		switch(cad[i]){
			case 'a': v_a++ ;break;
			case 'e': v_e++ ;break;
			case 'i': v_i++ ;break;
			case 'o': v_o++ ;break;
			case 'u': v_u++ ;break;
		}
		
	}
	
	cout<<"La vocal A se repite: "<<v_a<<endl;
	cout<<"La vocal E se repite: "<<v_e<<endl;
	cout<<"La vocal I se repite: "<<v_i<<endl;
	cout<<"La vocal O se repite: "<<v_o<<endl;
	cout<<"La vocal U se repite: "<<v_u<<endl;
	
	
	
	
	
	system("pause>nul");
	return 0;
}
