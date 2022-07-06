/*12voEjercicio_Cadena

Pasar una palabra a MAYUSCULA -Funcion strupr()
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cad1[100];
	
	cout<<"Ingrese una palabra en minuscula: ";
	cin.getline(cad1,100,'\n');
	cout<<"--------------------------------------\n";
	
	strupr(cad1);
	
	cout<<"La palabra en MAYUSCULA : "<<endl;
	cout<<cad1;
	
	
	
	system("pause>nul");
	return 0;
}
