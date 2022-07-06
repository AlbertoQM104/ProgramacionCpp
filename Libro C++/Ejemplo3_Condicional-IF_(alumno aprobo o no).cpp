/* Ejemplo3 Condicional IF-ELSE

Dadas 2 notas entre 0 y 10, cree un programa que permita saber si el
alumno esta aprobado o no, validar la entrada de notas.
*/

#include <iostream>

using namespace std;

int main (){
	
	float n1,n2,r;
	
	cout<<"Ingrese 1era nota: ";
	cin>>n1;
	cout<<"Ingrese 2da  nota: ";
	cin>>n2;
	cout<<"-----------------------------\n";
	r=(n1 + n2)/2;
	
	if ( (r>=0 && r<=10) && (n1>=0 && n1<=10) &&  (n2>=0 && n2<=10)  ){
		if(r>=5.5){
			cout<<"Aprobo el curso con ["<<r<<"].\n";
		}else{
			cout<<"Desaprobo el curso.\n";
		}
	}else{
		cout<<"Los valores no corresponden al rango dado [0-10].\n";
	}
	
	
	
	
	system("pause>nul");
	return 0;
}
