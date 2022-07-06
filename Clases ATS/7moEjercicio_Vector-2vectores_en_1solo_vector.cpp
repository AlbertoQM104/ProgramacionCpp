/* 7moEjercicio de Vectores

Realiza un programa que defina dos vectores de caracteres y
despues almacene el contenido de ambos vectores en un nuevo 
vector, situando en primer lugar los elementos del primer
vector seguido por los elementos del segundo vector.
Muestre el contenido del nuevo vector en la salida estándar.
*/

#include <iostream>

using namespace std;

int main(){
	char v1[]={'a','b','c','d','e'};
	char v2[]={'f','g','h','i','j'};
	char v3[10],i;
	
	for(i=0;i<5;i++){
		v3[i]=v1[i];
	}
	
	for(i=0;i<5;i++){
		v3[i+5]=v2[i];
	}
	
	cout<<"[";
	for(i=0;i<10;i++){
		cout<<" "<<v3[i]<<" ";
	
	}
	cout<<"]";
	
	system("pause>nul");
	return 0;
}
