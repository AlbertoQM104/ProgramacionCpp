/* Ejemplo15 - FOR

Permite calcular las 5 primeras parejas de numeros primos gemelos.

números primos gemelos = la diferencia de los primos da 2;

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int i,inc=0,val,x=2;
	int VI,VF,num=0;
	
	cout<<"\tLos 5 Primeras Parejas de Primos Gemelos\n";
	
	while(inc<5){
		
		VI = x;
		val=0;
		num = num +1;
		
		for(i=1;i<=num;i++){
		
			if(num%i==0){
				val+=1;
				
			}
		
		}
				
		
		if(val==2){
			VF = num;
			
			if( VF - VI == 2){
				
				cout<<" "<<VI<<" - "<<VF<<endl;
				inc = inc +1;
				
			}
			
			x=VF;
			
		}
		
		
	}
	
	
	cout<<"-----------------------------------------------\n";
	
	
	
	system("pause>nul");
	return 0;
}

