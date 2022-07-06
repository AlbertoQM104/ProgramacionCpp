/*14voEjercicio_Cadena

Pasar una palabra a minusculas - Función strlwr()
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cad[100];
	
	cout<<"Ingrese una palabra en MAYUSCULA: ";
	cin.getline(cad,100,'\n');
	cout<<"-------------------------------------\n";
	
	strlwr(cad);
	
	cout<<"Palabra en minuscula: "<<endl;
	cout<<cad;
	
	
	
	system("pause>nul");
	return 0;
}
