/*Ejercicio6_Estructura

Hacer un arreglo de estructura llamada atleta para N atletas
que contenga los siguiente campos: NOMBRE,PAIS,NUMERO_MEDALLAS.
y devuelva los datos (NOMBRE,PAIS) del atleta que ha ganado el 
mayor número de medallas

*/

#include <iostream>
#include <locale.h>

using namespace std;

struct atleta{
	char nombre[20];
	char pais[10];
	int num_medallas;
	
}atl[100];


int main(){
	setlocale(LC_ALL,"");
	
	int i,cant,max=-9999,auxm;
	
	cout<<"Ingrese la cantidad de Atletas: ";
	cin>>cant;
	cout<<"---------------------------------------\n";
	
	for(i=0;i<cant;i++){
		fflush(stdin);
		cout<<"Datos del Atleta ["<<i+1<<"]\n";
		cout<<"Nombre: ";
		cin.getline(atl[i].nombre,20,'\n');
		cout<<"País: ";
		cin.getline(atl[i].pais,10,'\n');
		cout<<"Cantidad de Medallas: ";
		cin>>atl[i].num_medallas;
		
		cout<<endl;
		//max 
		if(atl[i].num_medallas>max){
			max=atl[i].num_medallas;
			auxm = i;
		}
		
		
	}
	
	
	cout<<"El atleta con mayor números de medallas:\n";
	cout<<"Nombre: "<<atl[auxm].nombre<<endl;
	cout<<"Pais: "<<atl[auxm].pais<<endl;
	
	
	
	
	system("pause>nul");
	return 0;
}
