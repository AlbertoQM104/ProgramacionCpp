/* 1erEjercicio Matrices

hacer un programa para rellenar una matriz pidiendo 
al usuario el numero de filas y columnas, posteriormente
mostrar la matriz en pantalla.

*/

#include <iostream>

using namespace std;

int main(){
	
	int m[100][100];
	int i,j,fil,col;
	
	cout<<"Ingrese el numero de filas: ";
	cin>>fil;
	cout<<"Ingrese el numero de columnas: ";
	cin>>col;
	
	cout<<"----------------------------------------\n";
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			
		cout<<"Ingrese un numero: ";
		cin>>m[i][j];	
					
		}
				
	}
	
	cout<<"----------------------------------------\n";
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			
			cout<<"["<<m[i][j]<<"] ";
						
		}
				
		cout<<endl;
	}
	
	system("pause>nul");
	return 0;
}
