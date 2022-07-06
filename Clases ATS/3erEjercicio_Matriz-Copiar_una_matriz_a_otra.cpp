/* 3erEjercicio Matrices

Hacer una matriz de tipo enterea de 2x2, y luego 
copiarla a otra matriz.

*/

#include <iostream>

using namespace std;

int main(){
	
	int m[100][100],m2[100][100];
	int i,j,fil,col;
	
	cout<<"Ingrese numero de filas: ";
	cin>>fil;
	cout<<"Ingrese numero de columnas: ";
	cin>>col;
	cout<<"---------------------------------\n";
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			cout<<"Ingrese un numero: ";
			cin>>m[i][j];
						
		}
	
	}
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			m2[i][j]= m[i][j];
						
		}
	
	}
	
	cout<<"---------------------------------\n";
	cout<<"Matriz 1:\n";
	for(i=fil-1;i>=0;i--){
		for(j=0;j<col;j++){
			cout<<" ["<<m[i][j]<<"] ";
						
		}
		cout<<endl;
	}
	
	
	cout<<"---------------------------------\n";
	cout<<"Matriz 2:\n";
	for(i=fil-1;i>=0;i--){
		for(j=0;j<col;j++){
		cout<<" ["<<m2[i][j]<<"] ";
						
		}
		cout<<endl;
	}
	
	system("pause>nul");
	return 0;
}
