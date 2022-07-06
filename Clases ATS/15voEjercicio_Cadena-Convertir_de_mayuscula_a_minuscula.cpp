/*15voEjercicio_Cadena

Pedir su nombre al usuario en MAYUSCULA, si su nombre
comienza por la letra A, convertir su nombre a minusculas,
caso contrario no convertirlo.

*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
	char nom[100],a[]="B";
	
	cout<<"Ingrese su nombre en MAYUSCULA: ";
	cin.getline(nom,100,'\n');
	
	cout<<"------------------------------------\n";
	
	if(strcmp(a,nom) > 0){
		strlwr(nom);
		cout<<"Nombre en minuscula por empezar con 'A' :"<<endl;
		cout<<nom;
	}else{
		cout<<"El nombre con empieza con 'A'!";
	}
	
	
	
	system("pause>nul");
	return 0;
}
