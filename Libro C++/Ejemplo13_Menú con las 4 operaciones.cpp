/* Ejemplo13

Reealizar un programa que realice las cuatro operaciones b�sicas
entre dos n�meros, seg�n el siguiente men�:
			MEN�
		[S] SUMAR
		[R] RESTAR
		[M] MULTIPLICAR
		[D] DIVIDIR
	Elija una opci�n:
*/

#include <iostream>
#include <locale.h>		//libreria para a�adir � o tilde

using namespace std;

int main(){
	
	setlocale(LC_CTYPE,"Spanish"); //obtiene el teclado espa�ol
	
	int n1,n2;
	float r=0;
	char opc;
	
	cout<<"--------------------------\n";
	cout<<"\t MEN�\n";
	cout<<"\t[S] Suma\n";
	cout<<"\t[R] Restar\n";
	cout<<"\t[M] Multiplicar\n";
	cout<<"\t[D] Dividir\n";
	cout<<"--------------------------\n";
	cout<<"Selecciones una opci�n: ";
	cin>>opc;

	opc = toupper(opc); //pone may�scula
	
	if( (opc=='S') || (opc=='R') || (opc=='M') || (opc=='D') ){
		
		cout<<"******************************\n";
		cout<<"-Ingrese el 1er n�mero: ";
		cin>>n1;
		cout<<"-Ingrese el 2do n�mero: ";
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



