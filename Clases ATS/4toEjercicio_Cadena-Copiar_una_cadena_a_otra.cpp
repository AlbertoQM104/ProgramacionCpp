/*4toEjercicio_Cadena

copiar el contenido de una cadena a otra - Funcion strcpy()
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char cad1[]="Palabras";
	char cad2[100];
	
	cout<<"\tCopiamos cadenas\n";
	cout<<"--------------------------------------\n";
	cout<<"Primera: "<<cad1<<endl;
	cout<<"Segunda: "<<cad2<<endl;
	cout<<"--------------------------------------\n";
	
	strcpy(cad2,cad1);//(vacia,lo que copiaras) -- similar a asignar
	
	cout<<"Primera: "<<cad1<<endl;
	cout<<"Segunda: "<<cad2<<endl;
	
	
	system("pause>nul");
	return 0;
}
