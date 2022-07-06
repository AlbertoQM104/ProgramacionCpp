/*
Muestre el listado de los planetas (con sus n�meros asociados).
Planeta	Distancia media al sol (En millones de kil�metros).
Mercurio	59
Venus	108
Tierra	150
Marte	228
J�piter	750
Saturno	1431
Urano	2877
Neptuno	4509

Pida por teclado el n�mero (dato entero) asociado a un planeta.

3.- Muestre la distancia media al Sol, a la que se encuentra el planeta seleccionado.

Nota: Si el n�mero introducido por el usuario, no est� asociado a ning�n planeta, se 
mostrar� el mensaje: �ERROR: <n�mero> no est� asociado a ning�n planeta.�.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int pnt = 0, dst = 0;
	string planeta;
	
	cout<<"--------------- Listado de Planetas ---------------"<<endl;
	cout<<"1. Mercurio"<<endl;
	cout<<"2. Venus"<<endl;
	cout<<"3. Tierra"<<endl;
	cout<<"4. Marte"<<endl;
	cout<<"5. J�piter"<<endl;
	cout<<"6. Saturno"<<endl;
	cout<<"7. Urano"<<endl;
	cout<<"8. Neptuno"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"Introduzca n�mero del planeta: ";
	cin>>pnt;
	cout<<"---------------------------------------------------"<<endl;
	
	if(pnt == 1){
		dst = 59;
		planeta = "Mercurio";
		cout<<"El planeta "<<planeta<<" est� a ["<<dst<<"] millones de kilometros del sol.";
	}
	
	if(pnt == 2){
		dst = 108;
		planeta = "Venus";
		cout<<"El planeta "<<planeta<<" est� a ["<<dst<<"] millones de kilometros del sol.";

	}
	
	if(pnt == 3){
		dst = 150;
		planeta = "Tierra";
		cout<<"El planeta "<<planeta<<" est� a ["<<dst<<"] millones de kilometros del sol.";

	}
	
	if(pnt == 4){
		dst = 228;
		planeta = "Marte";
		cout<<"El planeta "<<planeta<<" est� a ["<<dst<<"] millones de kilometros del sol.";

	}
	
	if(pnt == 5){
		dst = 750;
		planeta = "J�piter";
		cout<<"El planeta "<<planeta<<" est� a ["<<dst<<"] millones de kilometros del sol.";

	}
	
	if(pnt == 6){
		dst = 1431;
		planeta = "Saturno";
		cout<<"El planeta "<<planeta<<" est� a ["<<dst<<"] millones de kilometros del sol.";

	}
	
	if(pnt == 7){
		dst = 2877;
		planeta = "Urano";
		cout<<"El planeta "<<planeta<<" est� a ["<<dst<<"] millones de kilometros del sol.";

	}
	
	if(pnt == 8){
		dst = 4509;
		planeta = "Neptuno";
		cout<<"El planeta "<<planeta<<" est� a ["<<dst<<"] millones de kilometros del sol.";

	}
	
	if (pnt < 1 || pnt > 8){
		cout <<"ERROR: <n�mero> no est� asociado a ning�n planeta.";
	}
	
	
	cout<<endl;
	
	
	return 0;
}






