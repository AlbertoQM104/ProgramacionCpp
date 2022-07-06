/* Ejemplo16 - FOR

Permita calcular los 4 primeros números perfectos

Números Perfectos = suma de sus divisores

*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	
	int inc=0,num=0,sum,suma2;
	int i;
	
	cout<<"\tLos 4 Primeros Números Perfectos\n";
	
	while(inc<4){
		
		sum=0;
		num++;
		
		for(i=1;i<=num-1;i++){
			
			if(num % i ==0){
				
				sum +=i;
			}
			
		}
		
		
		if( sum == num){
			
			cout<<"-"<<num<<"- \n";
			suma2 += num;	
			
			cout<<"------------\n";
			inc++;
		}
		
	}
	
		cout<<"Suma de los 4 Primeros Números Perfectos: "<<suma2<<endl;
	
	
	cout<<"-----------------------------------------------\n";
	
	system("pause>nul");
	return 0;
}
