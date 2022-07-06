/*18voEjercicio_Bucles

realice un programa que solicite al usuario que piense en 
un numero entero entre el 1 y el 100. el programa debe generar
un numero aleatorio en ese mismo rango[1-100], e indicarle al
usuario si el numero que digito es menor o mayor
al numero aleatorio, así hasta que lo adivine. y por ultimo
mostrarle el numero de intentos que le llevo.

var=lim_infer+rand()%(lim_super + 1 - lim_infer);
*/

#include <iostream>
#include <stdlib.h>  // estas 2 librerias se utilizan
#include <time.h>    // juntas para el #aleatorio

using namespace std;

int main(){
	
	int num,dato,cont=0;
	//adivinar que numero aleatorio saco la maquina
		
	//generar un numero aleatorio
	srand(time(NULL));
	//formula para el rango del numero aleatorio
	//var=lim_infer+rand()%(lim_super + 1 - lim_infer); 
	dato = 1 + rand()%(100 +1 -1);
	
	do{
			cout<<"Ingrese un numero: ";
			cin>>num;
	
		if(num>dato){
			cout<<"Digite un numero menor.\n\n";
		}
		if(num<dato){
			cout<<"Digite un numero mayor.\n\n";
		}

		cont ++;	
	}while(num != dato);
	
	cout<<"-----------------------------------\n";
	cout<<"Felicidades adivinaste el numero\n";
	cout<<"Numero de intetos: "<<cont;
	
	
	system("pause>nul");
	return 0;
}





