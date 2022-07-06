/*2doEjercicio_Cadena

longitud de una cadena de caracteres - Funcion StrLen()
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char pal[]="Hola";
	int cant=0;
	
	cant = strlen(pal);
		
	cout<<pal<<endl;
	cout<<"--------------------------------------\n";	
	cout<<"Numero de elementos de la cadena es : "<<cant<<endl;
	
	system("pause>nul");
	return 0;
}
