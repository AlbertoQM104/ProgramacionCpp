/* Ejemplo13

Reealizar un programa que realice las cuatro operaciones básicas
entre dos números, según el siguiente menú:
			MENÚ
		[S] SUMAR
		[R] RESTAR
		[M] MULTIPLICAR
		[D] DIVIDIR
	Elija una opción:
*/

#include <iostream>
#include <locale.h>		//libreria para añadir ñ o tilde

using namespace std;

int main(){
	
	setlocale(LC_CTYPE,"Spanish"); //obtiene el teclado español
	
	int n1,n2;
	float r=0;
	char opc;
	
	cout<<"--------------------------\n";
	cout<<"\t MENÚ\n";
	cout<<"\t[S] Suma\n";
	cout<<"\t[R] Restar\n";
	cout<<"\t[M] Multiplicar\n";
	cout<<"\t[D] Dividir\n";
	cout<<"--------------------------\n";
	cout<<"Selecciones una opción: ";
	cin>>opc;

	opc = toupper(opc); //pone mayúscula
	
	if( (opc=='S') || (opc=='R') || (opc=='M') || (opc=='D') ){
		
		cout<<"******************************\n";
		cout<<"-Ingrese el 1er número: ";
		cin>>n1;
		cout<<"-Ingrese el 2do número: ";
		cin>>n2;
		cout<<"******************************\n";
		
			switch(opc){
					//las letras en mayusculas
						case 'S':cout<<"\t    Sumar\n"; 
								 r = n1 + n2  ;break;
						case 'R':cout<<"\t    Restar\n"; 
								 r = n1 - n2  ;break;
						case 'M':cout<<"\t   Multiplicar\n"; 
								 r = n1 * n2  ;break;
						case 'D':cout<<"\t    Dividir\n"; 
								 r = n1 / n2  ;break;
			}
					
		cout<<" La respuesta es : "<<r<<endl;			
					
	}else{
		cout<<"---------------------------------------------\n";
		cout<<"El valor ingresado no es valido!\n";
		cout<<"---------------------------------------------\n";
	}
	
	
	
	system("pause>nul");
	return 0;
}



