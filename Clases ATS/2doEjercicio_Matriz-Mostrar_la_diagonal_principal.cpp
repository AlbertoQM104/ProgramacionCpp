/* 2doEjercicio Matrices

Realiza un programa que defina una matriz de 3x3 
y escriba un ciclo para que muestre la diagonal 
principal de la matriz.

*/

#include <iostream>

using namespace std;

int main(){
	
	int m[3][3];
	int i,j,fil,col;
	
	
	cout<<"Ingrese lo siguiente para la Matriz 3x3:\n";
	cout<<"----------------------------------------\n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
		cout<<"Ingrese un numero: ";
		cin>>m[i][j];	
					
		}
				
	}
	cout<<"----------------------------------------\n";		   
	for(i=2;i>=0;i--){
		for(j=0;j<3;j++){
					
		cout<<" ["<<m[i][j]<<"] ";	
			
		}
		cout<<endl;
			
	}
	
		
	
	cout<<"-------------------------------------------\n";
	cout<<" La diagonal principal es: \n";
	for(i=2;i>=0;i--){
		for(j=0;j<3;j++){
		if(i==j){
			cout<<" ["<<m[i][j]<<"] ";	
		}else{
			cout<<" [ ] ";
		}	
		
		}
		cout<<endl;
			
	}
	
	
	system("pause>nul");
	return 0;
}
