/*Ejercicio8_Funciones_Plantillas

Escriba una plantilla de funci�n llamada maximo() que devuelva 
el valor m�ximo de tres argumentos que se transmitan a la funci�n cuando 
sea llamada. Suponga que los tres argumentos ser�n del mismo tipo de datos.


*/

#include<iostream>
#include<conio.h>

using namespace std;


template <class plant>
plant maximo(plant x, plant y, plant z);



int main(){
	setlocale(LC_ALL,"");
	
	float n1=44,n2=5,n3=14;
	
	maximo(n1,n2,n3);
	
	cout<<"El n�mero m�ximo es: "<<maximo(n1,n2,n3)<<endl;
	
	system("pause>nul");
	return 0;
}




template <class plant>
plant maximo(plant x, plant y, plant z){
	
	plant max;
	
	if (x>y && x>z){
		max=x;
	}else {
		if (y>x && y>z){
			max=y;
		}else{
			if (z>x && z>y){
				max=z;
			}
		}
	}
	
	return max;
}











