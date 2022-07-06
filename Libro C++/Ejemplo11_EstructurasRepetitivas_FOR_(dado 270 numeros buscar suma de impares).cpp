/* Ejemplo11 - FOR

Dado como datos 270 n�meros enteros, obtenga la suma de los
n�meros pares y el promedio de los n�meros impares. Adem�s
indique cuantos ceros se ingresaron.

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	
	int   num=270,aux,sum=0,prom=0,cant=0,i,cont=0;
	
	
	cout<<"-----------Buscar lo Indicado-----------\n";
		
	for(i=0;i<=num;i++){
		aux = i;
		
		if(aux % 2 == 0){
			sum +=aux;
		}else{
			prom+=aux;
			cont+=1;
		}
		
		if (aux == 0){
			cant+=1;			
		}
		
		
		/* Otra Opci�n
			for(i=0;i<=num;i++){
		aux = i;
			
		if (aux == 0){
			cant+=1;			
		}else{
			
			if(aux % 2 == 0){
				sum +=aux;
			}else{
				prom+=aux;
				cont+=1;
				}	
			
			}
		
		*/
	
		
	}
	
	prom = prom/cont;
	
	cout<<" Suma de N�meros Pares       : "<<sum<<endl;
	cout<<" Promedio de N�meros Impares : "<<prom<<endl;
	cout<<" Cantidad de N�meros Impares : "<<cont<<endl;
	cout<<" Cantidad de ceros Ingresados: "<<cant<<endl;
	
	system("pause>nul");
	return 0;
}
