/*15voEjercicio_Bucles

hacer un programa que calcule el resultado
de la siguiente expresion: 1-2 + 3-4 + 5-6 ...n
*/

#include <iostream>

using namespace std;

int main(){
	
	int num,i,par=0,impar=0,result;
	
	cout<<"Ingrese el valor de n: ";
	cin>>num;
	cout<<"---------------------------\n";
	
	if( num>0){				  // signo=1
	for(i=1;i<=num;i++){     //otra forma ---result =result +(i*signo);
							//					signo = signo * -1;
		if(i % 2 == 1){
			par += i;
		}else {
			impar -= i;
		}
		
	}
		result = par + impar;
		
		cout<<"El resultado es: "<<result;
		
	}else {
		cout<<"Dato errado.";
	}
	
	
	
	
	system("pause>nul");
	return 0;
}

